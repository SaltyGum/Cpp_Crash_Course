# include "Fixed.hpp"

Fixed::Fixed( void ) : fixed_point( 0 )
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=( const Fixed& factor )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_point = factor.getRawBits();
	return ( *this );
}

Fixed::Fixed( const Fixed& fixed )
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixed_point = fixed.getRawBits();
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
	return ( this->fixed_point );
}

void Fixed::setRawBits( int const raw )
{
	this->fixed_point = raw;
}
