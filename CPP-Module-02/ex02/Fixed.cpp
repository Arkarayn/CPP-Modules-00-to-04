#include "Fixed.hpp"

// CONTRUCTORS / DESTRUCTORS

Fixed::Fixed() : fixedPointValue(0){}

Fixed::~Fixed(){}

Fixed::Fixed(const Fixed &fixed)
{
    *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    this->fixedPointValue = fixed.getRawBits();
    return *this;
}

Fixed::Fixed(const int value)
{
    this->fixedPointValue = value << this->fractionalBits;
}

Fixed::Fixed(const float value)
{
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

// EX02

bool Fixed::operator>(const Fixed &fixed) const
{
    return this->fixedPointValue > fixed.getRawBits();
}

bool Fixed::operator<(const Fixed &fixed) const
{
    return this->fixedPointValue < fixed.getRawBits();
}

bool Fixed::operator>=(const Fixed &fixed) const
{
    return this->fixedPointValue >= fixed.getRawBits();
}

bool Fixed::operator<=(const Fixed &fixed) const
{
    return this->fixedPointValue <= fixed.getRawBits();
}

bool Fixed::operator==(const Fixed &fixed) const
{
    return this->fixedPointValue == fixed.getRawBits();
}

bool Fixed::operator!=(const Fixed &fixed) const
{
    return this->fixedPointValue != fixed.getRawBits();
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
    return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
    return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
    return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
    return Fixed(this->toFloat() / fixed.toFloat());
}

Fixed &Fixed::operator++()
{
    this->fixedPointValue++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed &Fixed::operator--()
{
    this->fixedPointValue--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return a < b ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return a < b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return a > b ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return a > b ? a : b;
}

