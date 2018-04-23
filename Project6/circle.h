#pragma once
const double pi = 3.14;

class circle {
private:
	double radius;
public:
	circle() = default;
	circle(double radius)
	{
		this->radius = radius;
	}

	double  area()
	{
		return pi*radius*radius;
	}

	double dl() {
		return 2 * pi*radius;
	}

	//accessors

	double getRadius() { return radius; }

	//operators
	double operator+(circle obj) { // перегрузили оператор сложения
		return this->area() + obj.area();
	}

	double operator-(circle obj) {
		return this->area() - obj.area();
	}

	double operator*(circle obj) {
		return this->area()*obj.area();
	}

	double operator/(circle obj) {
		return this->area() / obj.area();
	}

	circle operator+(double d) {
		this->radius += d;
		return *this;
	}

	bool operator==(circle obj) {
		return this->radius== obj.radius;
	}

	double operator==(double k) {
		return this->radius == k;
	}

	bool operator>(circle obj) {
		return this->dl() > obj.dl();
	}

	circle operator+=(double k) {
		 this->radius += k;
		 return *this;
	}

	circle operator-=(double k) {
		this->radius -= k;
		return *this;
	}
};