#include <iostream>
#include <cmath>

using namespace std;

/*��������� ���� ����� �� ���������. ���� ��� ��������� ������ ��������� �����, ����������, ����� �� ���� ������� � ������ ������ �� ������ ����� �����.
������ ������� ������
��������� �������� �� ���� ������ ����� �� 1 �� 8 ������, �������� ����� ������� � ����� ������ ������� ��� ������ ������, ����� ��� ������ ������.
������ �������� ������
��������� ������ ������� YES, ���� �� ������ ������ ����� ����� ����� ������� �� ������ ��� NO � ��������� ������.
Sample Input:
4
4
5
5
Sample Output:
YES
*/

int main()
{
    int x , y , x1 , y1 ;
    cout << "Write down x y x1 y1" << endl;
    cin >> x >> y >> x1 >> y1;
    if (abs(x-x1)==abs(y-y1))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
