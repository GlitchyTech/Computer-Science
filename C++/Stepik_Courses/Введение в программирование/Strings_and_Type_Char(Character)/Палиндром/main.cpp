#include <iostream>
#include <string>

/* �� ������ ������ ����������, �������� �� ��� ����������� (�� ����, �������� ��������� ��� �����-�������, ��� � ������-������).
������� ������

�� ���� �������� 1 ������ ��� ��������.
�������� ������

���������� ������� yes, ���� ������ �������� �����������, � no � ��������� ������.

Sample Input:
kayak
Sample Output:
yes
*/

using namespace std;
#include <cstdio>
int main()
{
    string g;
    cin >> g;
    int size = (int)g.size() - 1, count = 0;
    for (int i = 0; i < (int)g.size() / 2; i++){
        if (g[i] == g[size]){
            count++;
            size--;
        } else {
            break;
        }
    }
    if (count == (int)g.size() / 2){
        cout << "yes";
    } else {
        cout << "no";
    }
}
