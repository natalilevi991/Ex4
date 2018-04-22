#include <iostream>
using namespace std;
#include<string>

class CircularInt {

public:
	int min;
	int max;
	int mid;

	CircularInt();
	CircularInt(int a, int b);
	CircularInt(CircularInt& other);
	CircularInt& operator+=(CircularInt& other);
	CircularInt& operator+=(int num);
	CircularInt& operator-=(CircularInt& other);
	CircularInt& operator-=(int num);
	CircularInt& operator++();
	CircularInt operator++(int);
	CircularInt& operator--();
	CircularInt operator--(int);
	CircularInt operator+ (int num);
	CircularInt operator+ (CircularInt& other);
	CircularInt operator-(CircularInt other);
	CircularInt operator-(int num);
	CircularInt operator-();
	friend CircularInt& operator- (int num, CircularInt other);
	CircularInt& operator*= (int num);
	CircularInt operator/ (const int other);
	friend ostream& operator<< (ostream& os, const CircularInt& c);




};































