#include <iostream>

/* �� ���������� ������� ����������, �������� �� �� ������.

������� ������

�������� ����������� ������.

�������� ������

�������� "yes", ���� ������ �������� ������ � "no" � ��������� ������. �������� ��������, ��� ����� ����� �������� ���������� �������.

Sample Input 1:
1
Sample Output 1:
yes
Sample Input 2:
a
Sample Output 2:
no
*/

using namespace std;

int main()
{
    char a;
    cin >> a;
    a >= '0' && a <= '9' ? cout << "yes" : cout << "no";
    return 0;
}
