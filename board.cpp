#include <iostream>
#include <map> 
#include <algorithm>  
#include <string>
#include <vector>
using namespace std;
int main()
{
	map <char,int> m;
	string str;
	vector<int> v;
	int value[36]={2,3,3,4,4,4,5,5,5,5,6,6,6,6,6,7,7,7,7,7,7,8,8,8,8,8,9,9,9,9,10,10,10,11,11,12};
	getline(cin,str);
	for(int i=0; i<str.length(); i++)
	{
		if(str[i]!= ' ')
			m[str[i]]++;
	}
	for(auto p:m)
	{
		v.push_back(p.second);
		sort(v.begin(),v.end());
	}
	int cost = 0, j=0;
	for(int i=v.size()-1;i>=0;i--)
	{
		cost+=v[i]*(value[j++]);
	}
	cout << cost <<endl;
	return 0;
}
