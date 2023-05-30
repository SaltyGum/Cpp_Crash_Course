# include <iostream>
# include <cmath>

class Fixed
{
public:
	// Constructors/Destructors
	Fixed(void);
	Fixed(const Fixed& fixed);
	~Fixed(void);

	Fixed& operator=(const Fixed& factor);

	// Getters
	int getRawBits(void) const;

	// Setters
	void setRawBits(int const raw);

private:
	static int const portion = 8;
	int fixed_point;
};
