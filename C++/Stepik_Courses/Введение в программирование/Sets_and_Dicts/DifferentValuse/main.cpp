#include <iostream>
#include <set>

/* ��� ������ ����� �����, ������� ����� ��������� �� 100000 �����. ����������, ������� � ��� ����������� ��������� �����.

������� ������

�������� ����� N - ���������� ��������� ������, � ����� N �����.

�������� ������

�������� ����� �� ������.

Sample Input:
5
1 2 3 2 1
Sample Output:
3
*/

using namespace std;

int main()
{
    set <int> j;
    int count = 0, n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int n;
        cin >> n;
        j.insert(n);
    }
    for (auto now = j.begin(); now != j.end(); now++){
        count++;
    }
    cout << count << endl;
    return 0;
}
