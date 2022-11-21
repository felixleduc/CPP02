/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:55:54 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/18 14:12:06 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _nb( 0 ) {
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed( Fixed const & src ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

Fixed &  Fixed::operator=( Fixed const & rhs ) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_nb = rhs.getRawBits();
    return (*this);
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_nb);    
}

void  Fixed::setRawBits( int const raw ) {
    this->_nb = raw;
    return ;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
    return ;
}

const int Fixed::_bits = 8;