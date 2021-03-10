#include <iostream>
using namespace std;
int PasacalI(int i, int j)
{
	if (i == 1 || j == 0)
		return 1;
	else
		return i * PasacalI(i - 1, j - 1);
}
int PasacalJ(int i, int j)
{
	if (i == 1 || j == 0)
		return 1;
	else
		return j * PasacalJ(i, j - 1);
}
int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	cout << "请输入一个n值：";
	cin >> n;
	for (i = 0; i < n+1; i++)
	{
		for (j = 0; j <= i; j++)
		{
			cout << PasacalI(i, j)/PasacalJ(i, j) << ' ';
		}
		cout << '\n';
	}
	return 0;
}
