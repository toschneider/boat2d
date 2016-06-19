/*
 * Vector.cpp
 *
 *  Created on: Nov 20, 2015
 *      Author: twiemann
 */

#include "Vector.hpp"

namespace jumper
{
template<typename T>
Vector::Vector()
{
    m_x = 0;
    m_y = 0;
}

Vector::Vector(const Vector& other)
{
	m_x = other.m_x;
	m_y = other.m_y;
}

Vector::~Vector()
{
	// TODO Auto-generated destructor stub
}

Vector Vector::operator =(const Vector& other)
{
	if(this != &other)
	{
		m_x = other.m_x;
		m_y = other.m_y;
	}
}

Vector Vector::operator +(const Vector& other) const
{
	Vector p(*this);
	p += other;
	return p;
}

void Vector::operator +=(const Vector& other)
{
	m_x += other.m_x;
	m_y += other.m_y;
}

Vector Vector::operator -(const Vector& other) const
{
    Vector p(*this);
    p -= other;
    return p;
}

void Vector::operator -=(const Vector& other)
{
    m_x -= other.m_x;
    m_y -= other.m_y;
}

Vector Vector::operator *(const Vector& other) const
{
    Vector p(*this);
    p *= other;
    return p;
}

void Vector::operator *=(const Vector& other)
{
    m_x *= other.m_x;
    m_y *= other.m_y;
}

<T> Vector::operator *(const Vector& other) const
{
    Vector p = (*this)*other;
    return (p.m_x + p.m_y);

}

bool Vector::operator ==(const Vector& other) const
{
    return (((m_x - other.m_x) < epsilon)&&((m_y - other.m_y) < epsilon));
}

bool Vector::operator !=(const Vector& other) const
{
    return !((*this) == other);
}

T& Vector::operator[](T u)
{
    if(u != 0)
    {
        return m_y;
    }
    else
    {
        return m_x;
    }
}


T Vector::x() const
{
	return m_x;
}

void Vector::setX(<T> x)
{
	m_x = x;
}

<T> Vector::y() const
{
	return m_y;
}

void Vector::setY(<T> y)
{
	m_y = y;
}

template<typename U>
friend Vector::operator<<(std::ostream& os, const Vector<U>)
{
    std::os << "x/y("<< m_x << " , " << m_y << ")" << std::endl;
}
template<typename T>
std::ostream& operator<<(std::ostream& os, const Vector<T>& v)
{
    std::os << v << std::endl;
}
} /* namespace jumper */
