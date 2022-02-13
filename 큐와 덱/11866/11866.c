#include <stdio.h>
#define MAX 1001

typedef struct queue
{
   int l, r;
   int arr[MAX];  
} queue;

int pop(struct queue *);
void push(struct queue *, int);
int size(struct queue *);

int main()
{
   queue q = {.l = 0, .r = 0};
   int n, k, i;
   scanf("%d %d", &n, &k);

   for (i = 0; i < n; ++i)
      push(&q, i + 1);

   printf("<");
   while (size(&q) > 1)
   {
      for (i = 1; i < k; ++i)
         push(&q, pop(&q));
      printf("%d, ", pop(&q));
   }
   printf("%d>", pop(&q));

   return 0;
}

int pop(struct queue *q)
{
   q->l = (q->l + 1) % MAX;
   return q->arr[(MAX + q->l - 1) % MAX];
}

void push(struct queue *q, int n)
{
   q->arr[q->r] = n;
   q->r = (q->r + 1) % MAX;
}

int size(struct queue *q)
{
   return q->r > q->l ? q->r - q->l : MAX + q->r - q->l;
}