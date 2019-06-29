#include <iostream>
using namespace std;
int main()
{
  int a[3], b[3], point, aa = 0, bb = 0;
  for (int i = 0; i < 3; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < 3; i++)
  {
    cin >> b[i];
  }
  for (int i = 0; i < 3; i++)
  {
    if (a[i] > b[i])
    {
      point = 1;
      aa += point;
    }
    if (a[i] == b[i])
    {
      point = 0;
    }
    if (a[i] < b[i])
    {
      point = 1;
      bb += point;
    }
  }
  cout << aa << " " << bb;
}