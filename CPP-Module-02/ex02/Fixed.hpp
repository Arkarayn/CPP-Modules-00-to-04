#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int					fixedPointValue;
        static const int	fractionalBits = 8;
    public:
        Fixed(); // Default constructor
        ~Fixed(); // Destructor
        Fixed(const Fixed &fixed); // Copy constructor
        Fixed &operator=(const Fixed &fixed); // Copy assignment operator
        Fixed(const int value); // Int constructor
        Fixed(const float value); // Float constructor

        //ex00
        int getRawBits(void) const; // Returns the raw value of the fixed point value
        void setRawBits(int const raw); // Sets the raw value of the fixed point value
        //ex01
        float toFloat(void) const; // Converts the fixed point value to a floating point value
        int toInt(void) const; // Converts the fixed point value to an integer value
        //ex02
        bool operator>(const Fixed &fixed) const; // Overloads the > operator to compare two fixed point values
        bool operator<(const Fixed &fixed) const; // Overloads the < operator to compare two fixed point values
        bool operator>=(const Fixed &fixed) const; // Overloads the >= operator to compare two fixed point values
        bool operator<=(const Fixed &fixed) const; // Overloads the <= operator to compare two fixed point values
        bool operator==(const Fixed &fixed) const; // Overloads the == operator to compare two fixed point values
        bool operator!=(const Fixed &fixed) const; // Overloads the != operator to compare two fixed point values
        Fixed operator+(const Fixed &fixed) const; // Overloads the + operator to add two fixed point values
        Fixed operator-(const Fixed &fixed) const; // Overloads the - operator to subtract two fixed point values
        Fixed operator*(const Fixed &fixed) const; // Overloads the * operator to multiply two fixed point values
        Fixed operator/(const Fixed &fixed) const; // Overloads the / operator to divide two fixed point values
        Fixed &operator++(); // Overloads the pre-increment operator to increment the fixed point value by 1
        Fixed operator++(int); // Overloads the post-increment operator to increment the fixed point value by 1
        Fixed &operator--(); // Overloads the pre-decrement operator to decrement the fixed point value by 1
        Fixed operator--(int); // Overloads the post-decrement operator to decrement the fixed point value by 1
        static Fixed &min(Fixed &a, Fixed &b); // Returns the minimum of two fixed point values
        static const Fixed &min(const Fixed &a, const Fixed &b); // Returns the minimum of two fixed point values
        static Fixed &max(Fixed &a, Fixed &b); // Returns the maximum of two fixed point values
        static const Fixed &max(const Fixed &a, const Fixed &b); // Returns the maximum of two fixed point values
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed); // Overloads the << operator to output the fixed point value