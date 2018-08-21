#include <iostream>
#include <vector>

/* ��� ������, ������������� �� ���������� ��������� � ���. ����������, ������� � ��� ��������� ���������.
������ ������� ������
� ������ ������ �������� ���������� ��������� � �������. �� ������ ������ �������� �������� �������.
������ �������� ������
�������� ����� �� ������.
Sample Input:
6
1 2 2 3 3 3
Sample Output:
3
*/

using namespace std;

int main()
{
    int n, count = 1;
    cin >> n;
    vector <int> a(n);
    //Reading
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //Treatment
    int compare = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[compare] != a[i])
        {
            count++;
            compare = i;
        }
    }
    cout << count << endl;
    return 0;
}
