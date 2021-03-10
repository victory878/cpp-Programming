#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    int m = 0;
    char c = 0;
    cin >> n >> m >> c;
    double res = 1.0*n/m;
    switch(c)
    {
    case '+':
        cout << n << '+' << m << '=' << n+m;
        break;
    case '-':
        cout << n << '-' << m << '=' << n-m;
        break;
    case '*':
        cout << n << '*' << m << '=' << n*m;
        break;
    case '/':
        cout << n << '/' << m << '=' << res;
    }

    return 0;
}
