#include <iostream>
#include <vector>

/*�������� ��� �������� ������� � ������� ��������� (�� ���� A[0], A[2], A[4], ...).
������ ������� ������
� ������ ������ �������� ���������� ��������� � �������. �� ������ ������ �������� �������� �������.
������ �������� ������
�������� ����� �� ������.
Sample Input:
5
1 2 3 4 5
Sample Output:
1 3 5
*/

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> a(n);
    // ����������
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // ���������
    for ( int i = 0; i < n; i++)
    {
        if ( i % 2 == 0)
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}
