#include <iostream>
#include <set>

/* �� ������� ������ �������� ������������������ ����� ����� ������. ��� ������� ����� �������� ����� YES (� ��������� ������), ���� ��� ����� ����� ����������� � ������������������ ��� NO, ���� �� �����������.

������� ������

�������� ����� N - ���������� ��������� ������, � ����� N �����.

�������� ������

�������� ����� �� ������.

Sample Input:
6
1 2 3 2 3 4
Sample Output:
NO
NO
NO
YES
YES
NO
*/

using namespace std;

int main()
{
    set <int> r;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int y;
        cin >> y;
        if (r.find(y) == r.end()){
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
        r.insert(y);
    }
    return 0;
}
