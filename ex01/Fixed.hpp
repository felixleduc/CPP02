/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:55:50 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/18 22:37:32 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
  private:
    int _nb;
    static const int    _bits;
  public:
    Fixed( void );
    Fixed( Fixed const & src );
    Fixed( int const nb );
    Fixed( float const nb );
    ~Fixed();
    Fixed&  operator=( Fixed const & rhs );
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    float   toFloat( void ) const;
    int     toInt( void ) const;
};

std::ostream& operator<<(std::ostream & o, Fixed const & aff_fixed );

#endif
