#include <iostream>
using namespace std;
int main()
{
	int i, j;
	int flag = 0;
	for (i = 0; i <= 100; i++)
	{
		for (j = 0; j <= 50; j++)
		{
			if ((100-i-2*j)%5==0 && (100-i-2*j)/5 >= 0)
				flag++;
		}
	}
	cout << flag;
	return 0;
}
