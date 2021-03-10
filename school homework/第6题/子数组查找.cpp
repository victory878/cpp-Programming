#include <iostream>
using namespace std;
/*根据题干分析子数组必定连续，且有正数有负数，那么子数组的首位数字一定大于0*/

int main()
{
    int num[] = {3, 2, -6, 4, 7, -3, 5, -2};
    int n = sizeof(num)/sizeof(int);
    int* p = new int[n];

    int i, j;
    int maxx = 0;
    int sum = 0;
    int flag = 0;
    for(i = 0; i < n; i++)
    {
        sum += num[i];
        if(sum > 0)
        {
            if(num[i] > 0)
                p[i] = 1;
            if(maxx < sum)
                maxx = sum;
            else
            {
                if(i > flag+1)  //除了首数字外，遇到maxx<sum的情况统统为零
                    p[i] = 0;
            }
        }
        else
        {
            sum = 0;
            flag = i;
            for(j = 0; j < i; j++)
                p[j] = 0;
        }
    }
    int left = 0;
    int right = 0;
    for(i = 0; i < n; i++)
    {
        if(p[i] == 1)
        {
            left = i;
            break;
        }
    }
    for(i = n-1; i >= 0; i--)
    {
        if(p[i] == 1)
        {
            right = i;
            break;
        }
    }

    for(i = left; i <= right; i++)
        cout << num[i] << ' ';
    delete [] p;
    return 0;
}
