#include "CircularInt.hpp"

//constructor
CircularInt::CircularInt()
{
	this->min = 1;
	this->max = 12;
	this->mid = 1;
}

CircularInt::CircularInt(int a, int b)
{
	this->min = a;
	this->max = b;
	this->mid = min;
}
//copy constructor
CircularInt::CircularInt(CircularInt & other)
{
	this->min = other.min;
	this->max = other.max;
	this->mid = other.mid;
}



CircularInt & CircularInt::operator+=(CircularInt & other)
{
	this->mid = this->mid + other.mid;
	if (this->mid > this->max) {
		this->mid = this->mid % this->max;
	}
	return *this;
}

CircularInt & CircularInt::operator+=(int num)
{
	this->mid = this->mid + num;
	if (this->mid > this->max) {
		this->mid = this->mid % this->max;
	}
	return *this;

}

CircularInt & CircularInt::operator-=(CircularInt & other)
{
	this->mid = this->mid - other.mid;
	if (this->mid < this->min) {
		this->mid = this->mid + this->max;
	}
	return *this;
}

CircularInt & CircularInt::operator-=(int num)
{
	this->mid = this->mid - num;
	if (this->mid < this->min) {
		this->mid = this->mid + this->max;
	}
	return *this;
}

CircularInt & CircularInt::operator++()
{
	this->mid = this->mid + 1;
	if (this->mid > this->max) {
		this->mid = this->mid % this->max;
	}
	return *this;

}

CircularInt CircularInt::operator++(int)
{
	CircularInt temp(*this);
	this->mid = this->mid + 1;
	if (this->mid > this->max) {
		this->mid = this->mid % this->max;
	}

	return temp;
}

CircularInt & CircularInt::operator--()
{
	this->mid = this->mid - 1;
	if (this->mid < this->min) {
		this->mid = this->mid + this->max;
	}
	return *this;
}

CircularInt CircularInt::operator--(int)
{
	CircularInt temp(*this);
	this->mid = this->mid - 1;
	if (this->mid < this->min) {
		this->mid = this->mid + this->max;
	}
	return temp;
}


CircularInt CircularInt::operator+(int num)
{
	CircularInt temp(*this);
	temp.mid += num;
	if (this->mid > this->max) {
		this->mid = this->mid % this->max;
	}
	return temp;
}

CircularInt CircularInt::operator+(CircularInt & other)
{
	CircularInt temp(other);
	temp.mid += other.mid;
	if (temp.mid > this->max) {
		temp.mid = temp.mid % this->max;
	}
	return temp;
}

CircularInt CircularInt::operator-(CircularInt other)
{
	CircularInt temp(*this);
	this->mid = this->mid - other.mid;
	if (this->mid < this->min) {
		this->mid = this->mid + this->max;
	}
	return temp;
}

CircularInt CircularInt::operator-(int num)
{
	CircularInt temp(*this);
	this->mid = this->mid - num;
	if (this->mid < this->min) {
		this->mid = this->mid + this->max;
	}
	return temp;
}

CircularInt CircularInt::operator-()
{
	CircularInt temp(*this);
	temp.mid = max - this->mid;
	return temp;
}

CircularInt & CircularInt::operator*=(int num)
{
	CircularInt temp(*this);
	this->mid = (mid*num) % max;
	return temp;
}

CircularInt CircularInt::operator/(const int num)
{
	CircularInt temp(*this);
	temp.mid = this->mid / num;
	return temp;
}

CircularInt & operator-(int num, CircularInt other)
{
	CircularInt temp(other);
	temp.mid = num;
	temp -= other.mid;
//	int ans = temp.mid;
	return temp;
}

ostream& operator<< (ostream& os, const CircularInt& c)
{
		os << c.mid;
		return os;
}


