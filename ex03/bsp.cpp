/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:20:58 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/21 16:12:30 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed   calcArea( Point const p1, Point const p2, Point const p3 ) {
    Fixed   area;
    area = ( p1.getX() * ( p2.getY() - p3.getY() ) ) + ( p2.getX() * ( p3.getY() - p1.getY() ) ) + ( p3.getX() * ( p1.getY() - p2.getY() ) );
    if ( area < 0 )
        area = area * -1;
    return ( area );
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
    float   a1, a2, a3;
    a1 = calcArea( point, a, b ).toFloat();
    a2 = calcArea( point, b ,c ).toFloat();
    a3 = calcArea( point, c, a ).toFloat();
    if ( calcArea( a, b, c ).toFloat() == ( a1 + a2 + a3 ) )
        return ( true );
    return ( false );
}
