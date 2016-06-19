/*
 * TVector.hpp
 *
 *  Created on: Dec 4, 2015
 *      Author: twiemann
 */

#ifndef SRC_VECTOR_HPP_
#define SRC_VECTOR_HPP_

#include <ostream>
#include <cmath>
#include <stdexcept>

namespace jumper
{

/// TODO: Implement Vector2 class and add typedefs !!!

template <typename T>
class Vector2
{
public:

    /**
     * Constructor
     * @param x     x position of the Vector2<T>
     * @param y     y position of the Vector2<T>
     */
    Vector2(T x = 0, T y = 0);

    /***
     * Copy constructor
     *
     * @param other to be copied Vector2<T> 
     */
    Vector2(const Vector2<T>& other);

    /***
     * Destructor
     */
    virtual ~Vector2();

    /***
     * Assignment operator
     *
     * @param other to be assigned Vector2<T>
     * @return      other.
     */
    Vector2<T> operator=(const Vector2<T>& other);

    /***
     * returns sum of other and this
     *
     * @param other A Vector2<T> offset 
     * @return      Vector2<T> sum of this and other
     */
    Vector2<T> operator+(const Vector2<T>& other) const;

    /***
     * Adds other to this 
     *
     * @param other to be added vector
     */
    void operator+=(const Vector2<T>& other);

    /***
     * returns diff of this and other
     *
     * @param other A Vector2<T> offset 
     * @return      Vector2<T> diff of this and other
     */
    Vector2<T> operator-(const Vector2<T>& other) const;

    /***
     * Substracts other from this
     *
     * @param other to be subtracted vector
     */
    void operator-=(const Vector2<T>& other);

    /***
    * Calculates scalar product of this and other
    *
    * @param other to be multiplied vector
    * @return       scalar product
    */
    T operator*(const Vector2<T>& other) const;

    /***
    * Multiplies a factor to this
    *
    * @param factor to be multiplied factor
    * @return       the product vector    
    */
    Vector2<T> operator*(T factor) const;

    /***
    * Multiplies a factor to this
    *
    * @param factor multiplier
    */
    void operator*=(T factor);

    /***
    * checks equalty
    *
    * @param other  another vector
    * @return       true if equal
    */
    bool operator==(const Vector2<T>& other) const;

    /***
    * checks unequalty
    * 
    * @param other  another vector
    * @return       true if unequal
    */
    bool operator!=(const Vector2<T>& other) const;

    /***
    * returns member
    *
    * @param index
    * @return       value at index
    */
    T& operator[](unsigned int index);

    /// Returns  x 
    T x() const;

    /***
     * Sets a new x value
     *
     * @param x     A new x value
     */
    void setX(T x);

    /// Returns y
    T y() const;

    /***
     * Sets a new y value
     *
     * @param y     A new y value
     */
    void setY(T y);

    /***
    * prints x and y
    *
    * @param stream     outputstrtream
    * @param v          vector to be printed
    */
    template <typename U>
    friend std::ostream& operator<<(std::ostream& stream, const Vector2<U> &v);

private:

    /// x coordinate
    T m_x;

    /// y coordinate
    T m_y;

    static const double epsilon = 0.00001;
};

template <typename V>
std::ostream& operator<<(std::ostream& stream, const Vector2<V> &v)
{
    stream  << "Vektor Koordinaten: " 
            << v.x() 
            << ", " 
            << v.y();
    return stream;
}

typedef Vector2<float> Vector2f;
typedef Vector2<int> Vector2i;
}


#include "Vector.tcc"


#endif /* SRC_VECTOR_HPP_ */
