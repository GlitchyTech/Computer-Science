#include <iostream>

using namespace std;

/*���� ����������� ����� N. �������� ����� YES, ���� ����� N �������� ������ �������� ������, ��� ����� NO � ��������� ������.
������ ������� ������
�������� ����������� �����.
������ �������� ������
�������� ����� �� ������.
Sample Input 1:
1
Sample Output 1:
YES
Sample Input 2:
2
Sample Output 2:
YES
*/

int main()
{
  int N,n=1;
  cin >> N;
  while (n*2<=N)
  {
      n = n*2;
  }
  if (N%n==0)
  {
     cout << "YES" << endl;
  }
  else
  {
      cout << "NO" << endl;
  }
  return 0;
}
