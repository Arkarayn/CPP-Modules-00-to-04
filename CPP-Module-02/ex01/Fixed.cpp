#include "Fixed.hpp"

// CONTRUCTORS / DESTRUCTORS

Fixed::Fixed() : fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixedPointValue = fixed.getRawBits();
    return *this;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixedPointValue = value << this->fractionalBits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixedPointValue = roundf(value * (1 << this->fractionalBits));
}

// MEMBER FUNCTIONS

int Fixed::getRawBits(void) const
{
    return this->fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
    this->fixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
    return (float)this->fixedPointValue / (float)(1 << this->fractionalBits);
}

int Fixed::toInt(void) const
{
    return this->fixedPointValue >> this->fractionalBits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}