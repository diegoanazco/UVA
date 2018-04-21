#include <iostream>
using namespace std;

int main()
{
	int izq[1000];
	int der[1000];
	int s;
	int b;
	int l; 
	int r;
	while(cin>>s>>b)
	{
		for(int i=0; i<=s;i++)
		{
			izq[i]=i-1;
			der[i]=i+1;
		}
		while(b--)
		{
			cin>>l>>r;
			if(izq[l]<1)
			{
				cout<<"*"<<" ";
			}
			else
			{
				cout<<izq[l]<<" ";
			}
			if(der[r]>s) cout<<"*"<<endl;
			else cout<<der[r]<<endl;
			izq[der[r]]=izq[l];
			der[izq[l]]=der[r];
			
			
		}
		cout<<"-"<<endl;
	}
	
	
	return 0;
}
