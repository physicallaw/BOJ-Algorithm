long long sum(int *a, int n)
{
   int i;
   long long answer = 0;
   
   for (i = 0; i < n; ++i)
      answer += a[i];
   
   return answer;
}