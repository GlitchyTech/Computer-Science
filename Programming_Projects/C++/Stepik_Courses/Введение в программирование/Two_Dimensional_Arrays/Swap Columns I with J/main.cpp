#include <iostream>

/* ��� ��������� ������ � ��� �����: i � j. ��������� � ������� ������� � �������� i � j
������ ������� ������
��������� �������� �� ���� ������� ������� n � m, �� ������������� 100, ����� �������� �������, ����� ����� i � j.
������ �������� ������
�������� ���������.
Sample Input:
3 4
11 12 13 14
21 22 23 24
31 32 33 34
0 1
Sample Output:
12 11 13 14
22 21 23 24
32 31 33 34
*/

using namespace std;

int main()
{
    int n, m, a[100][100];
    cin >> n >> m;
    //������
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    //����� ��������
    int r, k;
    cin >> r >> k;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (k == j){
                int temp;
                temp = a[i][j];
                a[i][j] = a[i][r];
                a[i][r] = temp;
            }
        }
    }
    //�����
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
