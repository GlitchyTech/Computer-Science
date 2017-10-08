#include <iostream>

using namespace std;

int main()
{
    setlocale (LC_ALL,"Russian");
    int n,m,k;
    cout << "Write down n m k " << endl;
    cin>> n >> m >> k;
    if (((k%n==0 || k%m==0) && (k<n*m)) && (n*m<30000))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
