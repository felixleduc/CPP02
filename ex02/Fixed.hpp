/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:55:50 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/20 17:04:18 by fleduc           ###   ########.fr       */
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
    Fixed( const Fixed& src );
    Fixed( const int nb );
    Fixed( const float nb );
    ~Fixed();

    Fixed&  operator=( const Fixed& rhs );
    bool    operator>( const Fixed& rhs ) const;
    bool    operator<( const Fixed& rhs ) const;
    bool    operator>=( const Fixed& rhs ) const;
    bool    operator<=( const Fixed& rhs ) const;
    bool    operator==( const Fixed& rhs ) const;
    bool    operator!=( const Fixed& rhs ) const;
    Fixed  operator+( const Fixed& rhs ) const;
    Fixed  operator-( const Fixed& rhs ) const;
    Fixed  operator*( const Fixed& rhs ) const;
    Fixed  operator/( const Fixed& rhs ) const;
    Fixed&  operator++( void );
    Fixed   operator++( int );
    Fixed&  operator--( void );
    Fixed   operator--( int );

    int     getRawBits( void ) const;
    void    setRawBits( const int raw );
    float   toFloat( void ) const;
    int     toInt( void ) const;

    static Fixed min( Fixed& nb_1, Fixed& nb_2 );
    static const Fixed min( const Fixed& nb_1, const Fixed& nb_2 );
    static Fixed max( Fixed& nb_1, Fixed& nb_2 );
    static const Fixed max( const Fixed& nb_1, const Fixed& nb_2 );
};

std::ostream& operator<<(std::ostream & o, const Fixed& aff_fixed );

#endif
