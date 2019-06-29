#include <iostream>
using namespace std;
int main()
{
  int n, a[100][100], sum, arr1 = 0, arr2 = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == j)
      {
        arr1 += a[i][j];
      }
      if (i <)
      {
        /* code */
      }

      arr2 += a[0][2] + a[1][1] + a[2][0];
    }
  }
  // sum = arr1 - arr2;
  // cout << sum;
}