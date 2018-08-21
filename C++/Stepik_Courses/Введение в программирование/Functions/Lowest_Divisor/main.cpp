#include <iostream>
#include <cmath>

/* ���� ����������� ����� n > 1. �������� ��� ���������� ��������, �������� �� 1.
������� �������� � ���� ������� MinDivisor(n). ���������� �������� � ��������� ������ ���� ��������������� ����� �� n.
��������. ���� � ����� n ��� ��������, �������� n , �� ����� n � ������� � ������� ����� ���� ����� n.
������ ������� ������
�������� ����������� �����.
������ �������� ������
�������� ����� �� ������.
Sample Input 1:
4
Sample Output 1:
2
Sample Input 2:
5
Sample Output 2:
5
*/

using namespace std;

int MinDivisor(int a, int b, double c){
    int res = a / b;
    if (a == 1){
        return 1;
    } else if (a == 0) {
        return 0;
    } else if (res * b == a && b <= c){
        return b;
    } else if (b > c){
        return a;
    } else {
        return MinDivisor(a, b + 1, c);
    }
}

int main()
{
    int n, div = 2;
    double sqrtn;
    cin >> n;
    sqrtn = sqrt(n);
    cout <<  MinDivisor(n, div, sqrtn) << endl;
    return 0;
}
