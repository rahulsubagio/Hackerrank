#include <iostream>
using namespace std;
int main()
{
  int n;
  long a[10], sum = 0;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
    sum += a[i];
  }
  cout << sum << endl;
}