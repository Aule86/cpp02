#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

class Fixed {

	private:
		int	nbr;
		static const int bit = 8;

	public:
		Fixed();
		Fixed(const Fixed &obj);
		Fixed &operator=(const Fixed &obj);
		~Fixed();
		int	getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif