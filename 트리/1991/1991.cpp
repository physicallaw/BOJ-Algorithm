#include <iostream>
#include <map>
#include <vector>

using namespace std;

void preorder(map<char, vector<char>> &m, char node = 'A')
{
   cout << node;
   if (m[node][0] != '.')
      preorder(m, m[node][0]);
   if (m[node][1] != '.')
      preorder(m, m[node][1]);
}
void inorder(map<char, vector<char>> &m, char node = 'A')
{
   if (m[node][0] != '.')
      inorder(m, m[node][0]);
   cout << node;
   if (m[node][1] != '.')
      inorder(m, m[node][1]);
}
void postorder(map<char, vector<char>> &m, char node = 'A')
{
   if (m[node][0] != '.')
      postorder(m, m[node][0]);
   if (m[node][1] != '.')
      postorder(m, m[node][1]);
   cout << node;
}

int main()
{
   int n;
   cin >> n;
   map<char, vector<char>> tree;
   char a, b, c;
   for (int i = 0; i < n; ++i)
   {
      cin >> a >> b >> c;
      tree[a].push_back(b);
      tree[a].push_back(c);
   }

   preorder(tree);
   cout << endl;
   inorder(tree);
   cout << endl;
   postorder(tree);

   return 0;
}