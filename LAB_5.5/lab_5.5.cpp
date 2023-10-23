#include <iostream>
#include <cmath>

using namespace std;

double S(int p, int q);
double f1(int n);
double f2(int n);
double f3(int n, int level, int &depth);

int main()
{
	int p;
	int q;
	cout << "p = "; cin >> p;
	cout << "q = "; cin >> q;

	cout << "S(p, q) = " << S(p, q) << endl;

}

double S(int p, int q)
{
	double s = 0;

	for (int i = p; i <= q; i++)
	{
		if (i == 0)
			s += f1(i);
		if (i % 10 > 0)
			s += f2(i);
		if ((i != 0) && (i % 10 == 0)) 
		{
			int depth = 0;
			s += f3(i, 1, depth);
			cout << " depth = " << depth << endl;
		}
	}
	return s;
}
double f1(int n)
{
	return 0;
}

double f2(int n)
{
	return n % 10;
}

double f3(int n, int level, int &depth)
{
	if (level > depth)
		depth = level;
	cout << " level = " << level << endl;
	if (n % 10 == 0)
	{
		
		return f3(n / 10, level + 1, depth);
		
	}
	
	if (n % 10 != 0)
		return n % 10;
}

