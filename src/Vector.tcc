/*
 * Vector.tpp
 *
 *  Created on: Nov 20, 2015
 *      Author: twiemann
 */

#include "Vector.hpp"

using namespace jumper;

namespace jumper
{

template <typename T>
Vector2<T>::Vector2(T x, T y)
    :   m_x(x), m_y(y)
{
}

template <typename T>
Vector2<T>::Vector2(const Vector2<T>& other)
{
    m_x = other.m_x;
    m_y = other.m_y;
}

template <typename T>
Vector2<T>::~Vector2<T>()
{
    // TODO Auto-generated destructor stub
}

template <typename T>
Vector2<T> Vector2<T>::operator =(const Vector2<T>& other)
{
    if(this != &other)
    {
        
        m_x = other.m_x;
        m_y = other.m_y;
    }
}

template <typename T>
Vector2<T> Vector2<T>::operator +(const Vector2<T>& other) const
{
    
    Vector2<T> v(*this);
    v += other;
    return v;
}

template <typename T>
void Vector2<T>::operator +=(const Vector2<T>& other)
{
    
    m_x += other.m_x;
    m_y += other.m_y;
}

template <typename T>
Vector2<T> Vector2<T>::operator-(const Vector2<T>& other) const
{
    
    Vector2<T> v(*this);
    v -= other;
    return v;  
}

template <typename T>
void Vector2<T>::operator-=(const Vector2<T>& other)
{
    
    m_x -= other.m_x;
    m_y -= other.m_y;
}

template <typename T>
T Vector2<T>::operator*(const Vector2<T>& other) const
{
    return (m_x * other.m_x + m_y * other.m_y);
}

template <typename T>
Vector2<T> Vector2<T>::operator*(T factor) const
{
    
    Vector2<T> v(*this);
    v *= factor;
    return v;  
}

template <typename T>
void Vector2<T>::operator*=(T factor)
{
    
    m_x *= factor;
    m_y *= factor;
}

template <typename T>
bool Vector2<T>::operator==(const Vector2<T>& other) const
{
    if ( m_x != other.m_x || fabs(m_x - other.m_x) > epsilon) 
    {
        return false;
    }
    return true;
}

template <typename T>
bool Vector2<T>::operator!=(const Vector2<T>& other) const
{
    return !(*this == other);
}


template <typename T>
T& Vector2<T>::operator[](unsigned int index)
{
    if (index != 0 && index != 1)
    {
        throw std::out_of_range("Index is neither 0 nor 1!");
    }
    if (index == 0)
    {
        return m_x;
    }
    return m_y;
}

template <typename T>
T Vector2<T>::x() const
{
    return m_x;
}

template <typename T>
void Vector2<T>::setX(T x)
{
    m_x = x;
}

template <typename T>
T Vector2<T>::y() const
{
    return m_y;
}

template <typename T>
void Vector2<T>::setY(T y)
{
    m_y = y;
}
} /* namespace jumper */
