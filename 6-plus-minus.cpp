#include <iostream>
using namespace std;
int main()
{
  int n, arr[100];
  float plus = 0, minus = 0, zero = 0;
  float sum_zero, sum_plus, sum_minus;
  cin>>n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 0)
    {
      zero += 1.0;
    }
    if (arr[i] > 0)
    {
      plus += 1.0;
    }
    if (arr[i] < 0)
    {
      minus += 1.0;
    }
  }
  sum_zero = zero / n;
  sum_plus = plus / n;
  sum_minus = minus / n;
  cout << sum_plus << endl;
  cout << sum_minus << endl;
  cout << sum_zero << endl;
}
