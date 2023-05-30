#include <cmath>
#include <iostream>

class Fixed
{
public:
	// Constructors & Destructors
	Fixed   ( void );							//Constructor
	Fixed   ( int const val );
	Fixed   ( float const val );
	Fixed   ( const Fixed& fixed );				//Copy constructor
	~Fixed  ( void );							//Destructor

	Fixed& operator= ( const Fixed& factor );

	//Comparison operators
	bool operator>  ( const Fixed& factor );
	bool operator<  ( const Fixed& factor );
	bool operator>= ( const Fixed& factor );
	bool operator<= ( const Fixed& factor );
	bool operator== ( const Fixed& factor );
	bool operator!= ( const Fixed& factor );

	// Math Operators
	Fixed operator+ ( const Fixed& factor );
	Fixed operator- ( const Fixed& factor );
	Fixed operator* ( const Fixed& factor );
	Fixed operator/ ( const Fixed& factor );

	// Uptick and Downtick Operators
	Fixed& operator++   ( void );
	Fixed& operator--   ( void );
	Fixed operator++    ( int );
	Fixed operator--    ( int );

	// Getters
	int             getRawBits  ( void ) const;

	// Setters
	void            setRawBits  ( int const raw );

	float           toFloat     ( void ) const;
	int             toInt       ( void ) const;
	
	// Min-Max Procedures
	static			Fixed& min  ( Fixed& a, Fixed& b );
	static const	Fixed& min  ( const Fixed& a, const Fixed& b );
	static			Fixed& max  ( Fixed& a, Fixed& b );
	static const	Fixed& max  ( const Fixed& a, const Fixed& b );

private:
    int fixed_point;
    static int const portion = 8;
};

// Output stream overload
std::ostream& operator<<(std::ostream& ret, const Fixed& fixed);