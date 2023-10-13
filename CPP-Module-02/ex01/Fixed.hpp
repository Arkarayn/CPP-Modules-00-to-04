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

        int getRawBits(void) const; // Returns the raw value of the fixed point value

        void setRawBits(int const raw); // Sets the raw value of the fixed point value

        float toFloat(void) const; // Converts the fixed point value to a floating point value

        int toInt(void) const; // Converts the fixed point value to an integer value

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed); // Overloads the << operator to output the fixed point value