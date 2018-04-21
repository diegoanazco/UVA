#include <iostream>
#include <cmath>
using namespace std;

int p,q,r,s,t,u;

double funcion(double x)
{
	return p* exp(-x) + q * sin(x) + r*cos(x) + s*tan(x) + t * x * x + u;
}

double bisection()
{
	double lo = 0, hi = 1;
	while (lo + (1e-7) < hi)
	{
		double x = (lo+hi)/2;
		if(funcion(lo)*funcion(x)<=0)
			hi = x;
		else
			lo = x;
	}
	return (lo+hi)/2;
}
int main()
{
	while(cin >> p >> q >> r >> s >> t >> u)
	{
		if(funcion(0)*funcion(1)>0)
			cout << "No tiene solucion" <<endl;
		else
			cout << bisection() <<endl;
	}
}
