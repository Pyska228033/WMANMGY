#include"Numbers.h"

int main()
{
	NUMBER x;
	
	cin >> x;
	NUMBER y;
	cin >> y;
	NUMBER z = (x + y);
	NUMBER z1 = (x - y);
	z.Print();
	cout << z1<<endl;

	NUMBER k;
	cin >> k;
	if (k == z)
	{
		cout << "right"<< endl;
	}
	else cout << "wrong"<< endl;
	cout << z;
}