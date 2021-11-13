#include<iostream>
using namespace std;
int main() {
	int N;
	int zarb=1;

	cout << "adad ra vared konid:";
	cin >> N;

		for (int i = 1; i < 10; i++)
		{
			zarb = zarb * i;
			if (zarb == N)
			{
				cout << "YES!";
				break;
			}
		}
		if (zarb != N) {
			cout << "NO!";
		}
}