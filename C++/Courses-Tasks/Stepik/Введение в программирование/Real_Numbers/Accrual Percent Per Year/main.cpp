#include <iostream>

/* ���������� ������ �� ������ ���������� P ��������� �������, ������� ������������ � ����� ������ � ����� ����. ����� ���������� X ������ Y ������. ���������� ������ ������ ����� ���.


��� ������� ���� ������ ������ ������������ ��������� ������������ � �������.

������ ������� ������
��������� �������� �� ���� ����� ����� P, X, Y.
������ �������� ������
��������� ������ ������� ��� �����: �������� ������ ����� ��� � ������ � ��������. ������� ����� ������ �������������.
Sample Input:
12
179
0
Sample Output:
200 48
*/

using namespace std;

int main(){
    int p, x, y;
	cin >> p >> x >> y;
	x = (x * 100 + y) * (p + 100) / 100;
	cout << x / 100 << " " << x % 100;
  return 0;
}
