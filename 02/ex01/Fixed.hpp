# include <iostream>
# include <cmath>

class Fixed
{
public:
	// Constructors/Destructors
	Fixed(void);
	Fixed(int const val);
	Fixed(float const val);
	Fixed(const Fixed& fixed);
	~Fixed(void);

	Fixed& operator=(const Fixed& factor);

	// Getters
	int getRawBits(void) const;

	// Setters
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;

private:
	static int const portion = 8;
	int fixed_point;
};

std::ostream& operator<<(std::ostream& ret, const Fixed& fixed);