#include "Numbers.h"

NUMBER::NUMBER()
{

}

NUMBER::NUMBER(const NUMBER& a)
{
	n = a.n;
	data = new char[n];
	for (int i = 0; i < n; i++)
	{
		data[i] = a.data[i];
	}
}

NUMBER::NUMBER(int k)
{
	n = k;
	data = new char[k];

}

NUMBER NUMBER::operator+(const NUMBER& a)
{
	int x = 0;
	for (int i = 0; i < n; i++)
	{
		x = x * 10;
		x = x + data[i] - 48;
	}
	int y = 0;
	for (int i = 0; i < a.n; i++)
	{
		y = y * 10;
		y = y + a.data[i] - 48;
	}

	int z = x + y;
	string s;
	s.push_back(z%10 + 48);
	z = z / 10;

	while (z != 0)
	{
		s.push_back(z % 10 + 48);
		z = z / 10;
	}

	NUMBER b(s.length());
	
	for (int i = 0; i < s.length(); i++)
	{
		b.data[i] = s[s.length() - i - 1];
	}

	return b;
}

NUMBER NUMBER::operator-(const NUMBER& a)
{
	int x = 0;
	for (int i = 0; i < n; i++)
	{
		x = x * 10;
		x = x + data[i] - 48;
	}
	int y = 0;
	for (int i = 0; i < a.n; i++)
	{
		y = y * 10;
		y = y + a.data[i] - 48;
	}

	int z = x - y;
	string s;
	if (z >= 0)
	{
		s.push_back(z % 10 + 48);
		z = z / 10;
		while (z != 0)
		{
			s.push_back(z % 10 + 48);
			z = z / 10;
		}
	}
	else 
	{
		z = z * (-1);
		s.push_back(z % 10 + 48);
		z = z / 10;
		while (z != 0)
		{
			s.push_back(z % 10 + 48);
			z = z / 10;
		}
		s.push_back('-');
	}
	
	NUMBER b(s.length());

	for (int i = 0; i < s.length(); i++)
	{
		b.data[i] = s[s.length() - i - 1];
	}

	return b;
}

NUMBER& NUMBER::operator=(const NUMBER& a)
{
	if (this == &a)
	{
		return *this;
	}
	else
	{
		this->n = a.n;
		for (int i = 0; i < n; i++)
		{
			this->data[i] = a.data[i];
		}
		return *this;
	}

}

bool NUMBER::operator==(const NUMBER& a)
{
	int mark;
	for (int i = 0; i < this -> n; i++)
	{
		if (this->data[i] == a.data[i])
		{
			mark = 1;
		}
		else
		{
			mark = 0;
			break;
		}
	}
	return mark;
}

ostream& operator<< (ostream& out, const NUMBER& a)
{
	for (int i = 0; i < a.n; i++)
		cout << a.data[i];
	return out;
}

istream& operator>> (istream& in, NUMBER& a)
{
	string s;
	in >> s;
	a.n = s.length();

	a.data = new char[a.n];
	for (int i = 0; i < a.n; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
			a.data[i] = s[i];
	}
	return in;
}

void NUMBER::Print()
{
	for (int i = 0; i < n; i++)
	{
		cout<< data[i];
	}
	cout << endl;
}





