#include <iostream>
#include <cmath>

/* ���� ���� �������������� �����: x, y, xc, yc, r. ���������, ����������� �� ����� (x, y) ����� � ������� (xc, yc) � �������� r. ���� ����� ����������� �����, �������� ����� YES, ����� �������� ����� NO.
������� ������ ��������� ������� IsPointInCircle(x, y, xc, yc, r), ������������ True, ���� ����� ����������� ����� � False, ���� �� �����������. �������� ��������� ������ ������� ���������� �����, ������� ������� IsPointInCircle � � ����������� �� ������������� �������� ������� �� ����� ����������� ���������.
������� IsPointInCircle �� ������ ��������� ���������� if.
������ ������� ������
�������� ���� �������������� �����.
������ �������� ������
�������� ����� �� ������.
Sample Input 1:
0.5
0.5
0
0
1
Sample Output 1:
YES
Sample Input 2:
0.5
0.5
1
1
0.1
Sample Output 2:
NO
*/

using namespace std;

bool IsPointInCircle(double x, double y, double xc, double yc, double r){
    return pow(xc - x, 2) + pow(yc - y, 2) <= r * r;
}

int main()
{
    double x, y, xc, yc, r;
    cin >> x >> y >> xc >> yc >> r;
    if (IsPointInCircle(x, y, xc, yc, r)){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
