/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_iter_infix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 19:40:06 by grass-kw          #+#    #+#             */
/*   Updated: 2016/07/23 19:42:03 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "btree.h"

void	btree_iter_infix(t_btree *a, void (*f)(t_btree *))
{
	if nonVide(gauche(A))
       btree_iter_infix(gauche(A))
    visiter(A)
    Si nonVide(droite(A))
       btree_iter_infix(droite(A))
}
