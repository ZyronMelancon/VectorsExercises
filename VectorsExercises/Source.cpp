#include <math.h>

/* Exercise 1
a. (0,-1)
b. (4,7)
c. 3.61, 4.47
d. (-10,-18)

Exercise 2
a. (0.6,0.8)
b. (0.55,0.83)
c. (0.99, 0.08)
d. (0.21, 0.98)

Exercise 3
(7,-9)

Exercise 4
They do not collide

Exercise 5
*/

class Vector
{
private:
	float m_x;
	float m_y;
	float m_z;
public:
	Vector() {};
	Vector(float, float);
	Vector(float, float, float);
	Vector Add(Vector, Vector);
	Vector Subtract(Vector, Vector);
	Vector ScalarMultiply(Vector, int);
	Vector ScalarDivide(Vector, int);
	float Magnitude(Vector);
	Vector Normalize(Vector);

	Vector operator + (Vector & other)
	{
		return Vector(m_x + other.m_x, m_y + other.m_y, m_z + other.m_z);
	}

	Vector operator - (Vector & other)
	{
		return Vector(m_x - other.m_x, m_y - other.m_y, m_z - other.m_z);
	}

};

Vector::Vector(float x, float y)
{
	m_x = x;
	m_y = y;
	m_z = 0;
}

Vector::Vector(float x, float y, float z)
{
	m_x = x;
	m_y = y;
	m_z = z;
}

Vector Vector::Add(Vector a, Vector b)
{
	return a + b;
}

Vector Vector::Subtract(Vector a, Vector b)
{
	return a - b;
}

Vector Vector::ScalarMultiply(Vector a, int m)
{
	return Vector(a.m_x * m, a.m_y * m, a.m_z * m);
}

Vector Vector::ScalarDivide(Vector a, int d)
{
	return Vector(a.m_x/d, a.m_y/d, a.m_z/d);
}

float Vector::Magnitude(Vector a)
{
	return sqrt((a.m_x*a.m_x) + (a.m_y*a.m_y));
}

Vector Vector::Normalize(Vector a)
{
	float squrot = sqrt((a.m_x*a.m_x) + (a.m_y*a.m_y));
	return Vector(a.m_x / squrot, a.m_y / squrot);
}