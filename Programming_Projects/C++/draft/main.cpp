#include <iostream>
#include <typeinfo>
#include <type_traits>

using std::cout;
using std::endl;

int main()
{
    std::string s = "Compiler";

    auto sz = s.size();

    auto c1 = s[0];

    decltype(s[0]) c2 = s[7];

    decltype(s[0] + s[7]) c3 = s[1];

    decltype(s)   sa = s;

    decltype((s)) sb = s;
    cout << std::is_reference<decltype(sz)>::value << endl;
    cout << std::is_reference<decltype(c1)>::value << endl;
    cout << std::is_reference<decltype(c2)>::value << endl;    cout << std::is_reference<decltype(c3)>::value << endl;    cout << std::is_reference<decltype(sa)>::value << endl;    cout << std::is_reference<decltype(sb)>::value << endl;
    return 0;
}
