#include <iostream>
#include <vector>

/* ��� ������ �����. ����������, ������� � ��� ��� ���������, ������ ���� �����. ���������, ��� ����� ��� ��������, ������ ���� ����� �������� ���� ����, ������� ���������� ���������.
������ ������� ������
� ������ ������ �������� ���������� ��������� � �������. �� ������ ������ �������� �������� �������.
������ �������� ������
�������� ����� �� ������.
Sample Input 1:
5
1 2 3 2 3
Sample Output 1:
2
Sample Input 2:
5
1 1 1 1 1
Sample Output 2:
10
*/

using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    vector <int> a(n);
    //Reading
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //Treatment
    for (int j = 0; j < n; j++)
    {
        for (int i = j; i < n; i++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }
    }
    cout << count - a.size() << endl;
    return 0;
}
