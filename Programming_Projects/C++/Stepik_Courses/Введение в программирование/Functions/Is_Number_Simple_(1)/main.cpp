#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/* ���� ����������� ����� n > 1. ���������, �������� �� ��� �������. ��������� ������ ������� ����� YES, ���� ����� ������� � NO, ���� ����� ���������.
������� �������� � ���� ������� IsPrime(n), ������� ���������� True ��� ������� ����� � False ��� ��������� �����. ���������� �������� � ��������� ������ ���� ��������������� ����� �� n.
������ ������� ������
�������� ����������� �����.
������ �������� ������
�������� ����� �� ������.
Sample Input 1:
2
Sample Output 1:
YES
Sample Input 2:
4
Sample Output 2:
NO
*/

int IsPrime(int n) {
    double sqrtn = sqrt(n);
    for (int i = 2; i <= sqrtn; i++) {
        if (n % i == 0) {
            return i;
        }
    }
    return n;
}

int main() {
    int n;
    cin >> n;
    cout << (IsPrime(n) == n ? "YES" : "NO");
    return 0;
}
