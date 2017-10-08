#include <iostream>

using namespace std;

int main()
{
    setlocale (LC_ALL,"Russian");
    int a,b,c,d;
    cout << "Write down a b d c" << endl;
    //Elephant (x;y)=(b;a), another figure (x;y)=(c;d)
    cin>>a>>b>>d>>c;
    if ((((((((b%2==0) && (a%2==1)) || ((b%2==1) && (a%2==0))) && (((c%2==0) && (d%2==1)) || ((c%2==1) && (d%2==0)))) && (1<=a<=8)) && (1<=b<=8)) && (1<=d<=8)) && (1<=c<=8))
    {
        cout<<"YES"<<endl;
    }
    else if ((((((((b%2==1) && (a%2==1)) || ((b%2==0) && (a%2==0))) && (((c%2==1) && (d%2==1)) || ((c%2==0) && (d%2==0)))) && (1<=a<=8)) && (1<=b<=8)) && (1<=d<=8)) && (1<=c<=8))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
