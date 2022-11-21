/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:55:54 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/19 13:38:42 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _nb( 0 ) {
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed( const Fixed & src ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

Fixed::Fixed( const int nb ) : _nb( nb << _bits ) {
    std::cout << "Int constructor called" << std::endl;
    return ;
}

Fixed::Fixed( const float nb ) : _nb( ( int )roundf( nb * ( 1 << _bits ) ) ) {
    std::cout << "Float constructor called" << std::endl;
    return ;
}

Fixed &  Fixed::operator=( const Fixed & rhs ) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_nb = rhs.getRawBits();
    return ( *this );
}

float   Fixed::toFloat( void ) const {
    return ( ( float )this->_nb / ( 1 << _bits ) );
}

int     Fixed::toInt( void ) const {
    return ( ( int )( roundf( ( float )this->_nb / ( 1 << _bits ) ) ) );
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return ( this->_nb );
}

void  Fixed::setRawBits( const int raw ) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_nb = raw;
    return ;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
    return ;
}

std::ostream& operator<<(std::ostream & o, const Fixed & rhs ) {
    o << rhs.toFloat();
    return ( o );
}

const int Fixed::_bits = 8;