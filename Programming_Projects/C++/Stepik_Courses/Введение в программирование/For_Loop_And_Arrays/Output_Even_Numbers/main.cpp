#include <iostream>
#include <vector>

/* �������� ��� ������ �������� �������.
������ ������� ������
� ������ ������ �������� ���������� ��������� � �������. �� ������ ������ �������� �������� �������.
������ �������� ������
�������� ����� �� ������. �������� ��������� � ��� �� �������, � ������� ��� ������ � �������.
Sample Input:
7
1 2 2 3 3 3 4
Sample Output:
2 2 4
*/

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> a(n);
    //Reading
    for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    //Treatment and Output
    for (int i = 0; i < n; i++ )
    {
        if (a[i]%2 == 0)
        {
            cout << a[i] <<" ";
        }
    }
    return 0;
}
