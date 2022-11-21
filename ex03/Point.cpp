/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:41:59 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/21 15:20:45 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x( 0 ), _y( 0 ) {
    return ;
}

Point::Point( const float x, const float y ) : _x( x ), _y( y ) {
    return ;
}

Point::Point( const Point& cp ) : _x( cp._x ), _y( cp._y ) {
    return ;
}

Point::~Point() {
    return ;
}

Point&  Point::operator=( const Point& rhs ) {
    //you can't modify a const value in a CPP class, so this overload operator is useless
    ( void )rhs;
    return ( *this );
}

Fixed   Point::getX( void ) const {
    return ( this->_x );
}

Fixed   Point::getY( void ) const {
    return ( this->_y );
}

std::ostream&   operator<<( std::ostream& o, const Point& rhs ) {
    o << "(" << rhs.getX() << ", " << rhs.getY() << ")";
    return ( o );
}