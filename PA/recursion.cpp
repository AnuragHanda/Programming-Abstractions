#include <iostream>
using namespace std;
void output(int start)
{
    if (start == 0)
    {
        return;
        cout << start << endl;
        output:start - 1;
        
    }
}
int main()
{
    int val=0;
    cin>>val;
    output:val;
    return 0;
}
