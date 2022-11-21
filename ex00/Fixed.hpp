/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:55:50 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/18 14:10:12 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
  private:
    int _nb;
    static const int    _bits;
  public:
    Fixed( void );
    Fixed( Fixed const & src );
    ~Fixed();
    Fixed&  operator=( Fixed const & rhs );
    int getRawBits( void ) const;
    void  setRawBits( int const raw );
};

#endif
