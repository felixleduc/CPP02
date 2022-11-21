/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:41:14 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/21 15:22:18 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
  private:
    const Fixed _x;
    const Fixed _y;
  public:
    Point( void );
    Point( const float x, const float y );
    Point( const Point& cp );
    ~Point();

    Point&  operator=( const Point& rhs );

    Fixed   getX( void ) const;
    Fixed   getY( void ) const;
};

std::ostream&   operator<<( std::ostream& o, const Point& rhs );
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif