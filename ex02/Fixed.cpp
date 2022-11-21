/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:55:54 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/20 17:10:56 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _nb( 0 ) {
    return ;
}

Fixed::Fixed( const Fixed& src ) {
     *this  = src;
    return ;
}

Fixed::Fixed( const int nb ) : _nb( nb << _bits ) {
    return ;
}

Fixed::Fixed( const float nb ) : _nb( ( int )roundf( nb * ( 1 << _bits ) ) ) {
    return ;
}

Fixed&  Fixed::operator=( const Fixed& rhs ) {
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
    return ( this->_nb );
}

void  Fixed::setRawBits( const int raw ) {
    this->_nb = raw;
    return ;
}

Fixed::~Fixed() {
    return ;
}

bool  Fixed::operator>( const Fixed& rhs ) const {
    return ( this->toFloat() > rhs.toFloat() );    
}

bool    Fixed::operator<( const Fixed& rhs ) const {
    return ( this->toFloat() < rhs.toFloat() );    
}

bool    Fixed::operator>=( const Fixed& rhs ) const {
    return ( this->toFloat() >= rhs.toFloat() );
}

bool    Fixed::operator<=( const Fixed& rhs ) const {
    return ( this->toFloat() <= rhs.toFloat() );
}

bool    Fixed::operator==( const Fixed& rhs ) const {
    return ( this->toFloat() == rhs.toFloat() );
}

bool    Fixed::operator!=( const Fixed& rhs ) const {
    return ( this->toFloat() != rhs.toFloat() );
}

Fixed  Fixed::operator+( const Fixed& rhs ) const {
    return ( Fixed( rhs.toFloat() + this->toFloat() ) );
}

Fixed  Fixed::operator-( const Fixed& rhs ) const {
    return ( Fixed( rhs.toFloat() - this->toFloat() ) );
}

Fixed  Fixed::operator*( const Fixed& rhs ) const {
    return ( Fixed( rhs.toFloat() * this->toFloat() ) );
}

Fixed  Fixed::operator/( const Fixed& rhs ) const {
    return ( Fixed( rhs.toFloat() / this->toFloat() ) );
}

Fixed&  Fixed::operator++( void ) {
    ++(this->_nb);
    return (*this);
}
Fixed   Fixed::operator++( int n ) {
    Fixed   cp( *this );
    if ( n < 0 )
        for ( int i = 0; i > n; --i )
            --*this;
    else
        for ( int i = 0; i < n; ++i )
            ++*this;
    return ( cp );
}
Fixed&  Fixed::operator--( void ) {
    --(this->_nb);
    return (*this);    
}
Fixed   Fixed::operator--( int n ) {
    Fixed   cp( *this );
    if ( n < 0 )
        for ( int i = 0; i > n; --i )
            ++*this;
    else
        for ( int i = 0; i < n; ++i )
            --*this;
    return ( cp );
}

Fixed Fixed::min( Fixed& nb_1, Fixed& nb_2 ) {
    if ( nb_1 > nb_2 )
        return ( Fixed ( nb_2 ) );
    return ( Fixed( nb_1 ) );
}

Fixed const Fixed::min( const Fixed& nb_1, const Fixed& nb_2 ) {
    if ( nb_1 > nb_2 )
        return ( Fixed( nb_2 ) );
    return ( Fixed( nb_1 ) );
}

Fixed Fixed::max( Fixed& nb_1, Fixed& nb_2 ) {
    if ( nb_1 > nb_2 )
        return ( Fixed( nb_1 ) );
    return ( Fixed( nb_2 ) );
}

Fixed const Fixed::max( const Fixed& nb_1, const Fixed& nb_2 ) {
    if ( nb_1 > nb_2 )
        return ( Fixed( nb_1 ) );
    return ( Fixed( nb_2 ) );
}

std::ostream& operator<<(std::ostream & o, const Fixed& rhs ) {
    o << rhs.toFloat();
    return ( o );
}

const int Fixed::_bits = 8;
