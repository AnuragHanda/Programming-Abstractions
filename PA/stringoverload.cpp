#include <iostream>
#include <cstring>
using namespace std;
class str
{
public:
    char *p;
    int len;

    str()
    {
        len = 0;
        p = 0;
    }
    str(const char *t)
    {
        len = strlen(t);
        p = new char(len + 1); // NULL "/0"
        strcpy(p, t);
    }
    str(const str &s)
    {
        len = s.len;
        p = new char[len + 1];
        strcpy(p, s.p);
    }

    void printStr()
    {
        cout << "\n The string is::::>>" << p;
    }

    // concat
    friend str operator+(const str &s1, const str &s2);

    //<=
    friend int operator<=(const str &s1, const str &s2);
};

str operator<=(const str &s1, const str &s2)
{
    int m = s1.len;
    int n = s2.len;
    if (m > n)
        return 1;
    else
        return 0;
}

str operator+(const str &s1, const str &s2)
{
    str temp;
    temp.len = s1.len + s2.len;
    temp.p = new char[temp.len + 2];
    strcpy(temp.p, s1.p);
    strcat(temp.p, " ");
    strcat(temp.p, s2.p);
    return temp;
}
int main()
{
    str1 = "abc";
    str2 = "xyz";
    str3 = "lmnop";
    str copy1, copy2, copy3;
    copy1 = s1;
    copy2 = s2;
    copy3 = s3;
    copy1.printStr();
    copy2.printStr();
    copy3.printStr();
    return 0;
}
