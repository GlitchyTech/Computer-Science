#include <iostream>
#include <cmath>

/* ���� ������ �������������� �����: x1, y1, x2, y2. �������� ������� distance(x1, y1, x2, y2), ����������� ���������� ����� ������ (x1. y1) � (x2, y2). �������� ������ �������������� ����� � �������� ��������� ������ ���� �������.

������ ������� ������
�������� ������ �������������� �����.
������ �������� ������
�������� ����� �� ������.
Sample Input:
0
0
1
1
Sample Output:
1.41421
*/

using namespace std;

double distance(double a, double b, double c, double d){
    if (a == c && b == d){
        return 0;
    }
    if (a == c){
        return abs(b - d);
    } else if (b == d){
        return abs(a - c);
    }
    double ans = sqrt(pow(a - c, 2) + pow(b - d, 2));
    return ans;
}

int main()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << distance(x1, y1, x2, y2) << endl;
    return 0;
}
