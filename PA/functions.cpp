#include <iostream>
using namespace std;
template<class t>
t add(t a = 0, t b = 0, t c = 0, t d = 0, t e = 0)
{
    return  a + b + c + d + e;
    
}
int main()
{
    cout << add<float>(1.6, 2.6) << endl;
    cout << add<int>(1, 2, 3) << endl;
    cout << add<int>(1, 2, 3, 4) << endl;
    cout << add<int>(1, 2, 3, 4, 5) << endl;
    return 0;
}
