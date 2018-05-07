#include <iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n && n>=1 && n<=4)
	{
		int x, temp = 0;
		for(int i= 0; i<5; i++)
		{
			cin >> x;
			if (x == n)
				temp++; 
		}
		cout << temp << endl;
	}
	return 0;
}


