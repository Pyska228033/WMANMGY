#ifndef NUMBERS_H
#define NUMBERS_H

#include <iostream>
#include <string>

using namespace std;
class NUMBER
{
private:
	char* data;
	int n;

public:
	NUMBER();
	NUMBER(int k);
	NUMBER(const NUMBER& a);
	NUMBER operator+(const NUMBER& a);
	NUMBER operator-(const NUMBER& a);
	NUMBER& operator=(const NUMBER& a);
	bool operator==(const NUMBER& a);
	friend ostream& operator<< (ostream& out, const NUMBER& a);
	friend istream& operator>> (istream& in, NUMBER& a);
	void Print();
};


#endif // !NUMBERS_H
