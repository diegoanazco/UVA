#include <iostream>
#include <algorithm>
using namespace std;
int books[10000];
int main()
{
	int n,m;
	while(cin >> n)
	{
		for (int i=0; i<n;i++)
			cin>>books[i];
		sort(books, books + n);
		cin >> m;
		int i=0;
		int j= n-1;
		int tempI,tempJ;
		while(i<j)
		{
			if(books[i]+books[j]<m)
				i++;
			else if(books[i]+books[j] == m)
			{
				tempI = i;
				tempJ = j;
				i++;
				j--;
			}
			else
				j--;
		}
		cout << "Peter should buy books whose prices are " << books[tempI] << " and " << books[tempJ] << endl;
	}
}
