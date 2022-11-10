#include <iostream>
using namespace std;
int main()
{

    string a;
    cin >> a;
    int s = 0, e = a.length() - 1, c = 0; // let count c, end postion string = e , start pos of string = s

    while (s <= e)
    {
        if (a[s] != a[e])
        {
            cout << " \nthis is not palindrome" << endl;
            break;
        }
        else
        {

            c++;
            s++;
            e--;
        }
    }
    if (c != 0)
        cout << "this is palindrome" << endl;
}