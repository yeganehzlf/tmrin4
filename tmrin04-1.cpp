#include<iostream>
using namespace std;
int main() {
	int m, n;
	cout << "m ra vared konid:";
	cin >> m;
	cout << "n ra vared konid:";
	cin >> n;
	for (int i = 1; i <= m; i++)
	{
		cout << "*";
		for (int j = 1; j <= n; j++)
		{
			cout << "#";
			break;
		}
	}
}