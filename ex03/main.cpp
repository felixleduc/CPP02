/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:12:06 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/21 16:14:24 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
    Point   a( 0, 0 );
    Point   b( 0, 5 );
    Point   c( 5, 0 );
    Point   point( 0, 2.5 );

    bool answer = bsp( a, b, c, point );
    if ( answer )
        std::cout << "The point is in the triangle";
    else
        std::cout << "The point is not in the triangle";
    return 0;
}
