#include <iostream>
#include <string>

typedef unsigned long long ull;
typedef long long ll;

std::string long_arithmetic(std::string sum, std::string value){
    std::string answer = "";
    for (size_t i = 0; i < std::max(sum.size(), value.size()); ++i){
        std::string temp;
        temp = "";
    }
    return answer;
}

std::string value(std::string a[], short i, short jump){
    std::string sum = 0;
    for (ll j = i - 1; j >= 0 && j + jump >= i; --j)
        sum += long_arithmetic(sum, a[j]);
    return sum;
}

int main()
{
    std::ios::sync_with_stdio(false);
    short jump = 0;
    short stairs = 0;
    std::cin >> jump >> stairs;
    std::string a[stairs + 1] = {"1"};
    //for (short i = 1; i < stairs + 1; ++i)
     //   a[i] = value(a, i, jump);
    std::cout << a[stairs] << std::endl;
    std::string te = "123";
    std::string t = "45";
    std:: cout << te[2] << ' ' << t[1] << std::endl;
    std::cout << (te[2] + t[1]);
    return 0;
}
