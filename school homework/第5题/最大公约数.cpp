#include <iostream>
using namespace std;

//保证n为较小的数
void Swag(int& a, int& b)
{
    int temp = 0;
    if(a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
}

//迭代
int Iteration(int n, int m)
{
    Swag(n, m);
    int temp = 0;
    while(m%n != 0)
    {
        temp = m%n;
        m = n;
        n = temp;
    }
    return n;
}

//穷举
int Complete(int n, int m)
{
    Swag(n, m);
    int i = 0;
    int flag;
    for(i = 1; i <= n; i++)
    {
        if(n%i==0 && m%i==0)
            flag = i;
    }
    return flag;
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << Iteration(n, m) << endl;
    cout << Complete(n, m);
    return 0;
}
