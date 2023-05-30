#include "Fixed.hpp"


// Constructors & Destructors
Fixed::Fixed( void ) : fixed_point(0)
{
}

Fixed::Fixed( int const val ) : fixed_point( val )
{
}

Fixed::Fixed( float const val ) : fixed_point( roundf((val *(1 << portion))) )
{
}

Fixed::Fixed( const Fixed& fixed ) : fixed_point( fixed.fixed_point )
{
}

Fixed::~Fixed( void )
{
}

//Output stream overload
std::ostream& operator<<(std::ostream& ret, const Fixed& fixed)
{
	ret << fixed.toFloat();
	return ( ret );
}

// Comparison Operators
// "=" Operator

Fixed& Fixed::operator=( const Fixed& factor )
{
    this->fixed_point = factor.fixed_point;
    return ( *this );
}

// ">" Operator


bool Fixed::operator>( const Fixed& factor )
{
    return ( this->fixed_point > factor.fixed_point );
}

// "<" Operator

bool Fixed::operator<( const Fixed& factor )
{
    return ( this->fixed_point < factor.fixed_point );
}

// ">=" Operator

bool Fixed::operator>=( const Fixed& factor )
{
    return ( this->fixed_point >= factor.fixed_point );
}

// "<=" Operator

bool Fixed::operator<=( const Fixed& factor )
{
    return ( this->fixed_point <= factor.fixed_point );
}

// "==" Operator

bool Fixed::operator==( const Fixed& factor )
{
    return ( this->fixed_point == factor.fixed_point );
}

// "!=" Operator

bool Fixed::operator!=( const Fixed& factor )
{
    return ( this->fixed_point != factor.fixed_point );
}

// Math Operators
// "+" Operator

Fixed Fixed::operator+( const Fixed& factor )
{
	Fixed ret;

	ret.setRawBits( this->fixed_point + factor.fixed_point );
	return ( ret );
}

// "-" Operator

Fixed Fixed::operator-( const Fixed& factor )
{
	Fixed ret;

	ret.setRawBits(this->fixed_point - factor.fixed_point);
	return ( ret );
}

// "*" Operator

Fixed Fixed::operator*( const Fixed& factor )
{
	Fixed ret;

	ret.setRawBits(this->fixed_point * factor.fixed_point);
	return ( ret );
}

// "/" Operator

Fixed Fixed::operator/( const Fixed& factor )
{
	Fixed ret;

	ret.setRawBits(this->fixed_point / factor.fixed_point);
	return ( ret );
}

// Uptick and Downtick Operators
// PreTick "++" Operator

Fixed& Fixed::operator++( void )
{
	this->fixed_point++;
	return ( *this );
}

// PreTick "--" Operator

Fixed& Fixed::operator--( void )
{
	this->fixed_point--;
	return ( *this );
}

//  PosTick "++" Operator

Fixed Fixed::operator++( int )
{
    Fixed aux = *this;
    ++*this;
    return ( aux );
}

// PostTick "--" Operator

Fixed Fixed::operator--( int )
{
	Fixed aux = *this;
    --*this;
    return ( aux );
}

// Procedure Funtions
int Fixed::getRawBits( void ) const
{
	return ( this->fixed_point );
}

void Fixed::setRawBits( int const raw )
{
	this->fixed_point = raw;
}

float Fixed::toFloat( void ) const
{
	return ( float( this->fixed_point)  / ( 1 << portion ) );
}

int Fixed::toInt( void ) const
{
	return ( this->fixed_point >> portion );
}

// Min-Max Procedures
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a > b)
		return ( b );
	return ( a );
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a < b)
		return ( b );
	return ( a );
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.fixed_point > b.fixed_point)
		return ( b );
	return ( a );
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.fixed_point < b.fixed_point)
		return ( b );
	return ( a );
}
