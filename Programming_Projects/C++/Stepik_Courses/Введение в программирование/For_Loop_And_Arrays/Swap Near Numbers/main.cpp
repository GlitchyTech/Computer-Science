#include <iostream>
#include <vector>

/* ����������� �������� �������� ������� (A[0] c A[1], A[2] c A[3] � �.�.). ���� ��������� �������� �����, �� ��������� ������� �������� �� ����� �����.
������ ������� ������
� ������ ������ �������� ���������� ��������� � �������. �� ������ ������ �������� �������� �������.
������ �������� ������
�������� ����� �� ������.
Sample Input:
5
1 2 3 4 5
Sample Output:
2 1 4 3 5
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
    //Treatment
    for (int i = 0; i < n; i += 2)
    {
        if (i == n - 1)
        {
            break;
        }
        //Swap Places
        int temp;
        temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
    }
    //Output
    for (auto now : a){
        cout << now <<" ";
    }
    return 0;
}
