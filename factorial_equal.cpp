#include <cstring>
#include <iostream>
using namespace std;
int a[4];
void agregar(int x, int y)
{
	for(int i=2;x/i;i*=2)
		a[0]+=y*(x/i);
	for(int i=3;x/i;i*=3)
		a[1]+=y*(x/i);
	for(int i=5;x/i;i*=5)
		a[2]+=y*(x/i);
	for(int i=7;x/i;i*=7)
		a[3]+=y*(x/i);
}

int main()
{
	int N,M;
	while(cin>> N>>M && N!= 0 && M!=0)
	{
		memset(a,0,sizeof(a));
		for(int i=0;i<N;i++)
		{
			int x;
			cin >> x;
			agregar(x,1);
		}
		for(int i=0;i<M;i++)
		{
			int x;
			cin >> x;
			agregar(x,-1);
		}
		if(a[0]==0 && a[1]==0 && a[2]==0&& a[3]==0 )
			cout << "YES" <<endl;
		else
			cout << "NO" <<endl;
	}
	return 0;			
}
