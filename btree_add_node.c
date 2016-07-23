/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_add_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 19:36:24 by grass-kw          #+#    #+#             */
/*   Updated: 2016/07/23 19:39:29 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "btree.h"

t_btree		*btree_add_node(t_btree *root, t_btree *new_node, int (*cmp)())
{
	if (!root)
		return (new_node);
	if (cmp(new_node, root) == 1)
		root->left = btree_add_node(root->left, new_node, cmp);
	else
		root->right = btree_add_node(root->right, new_node, cmp);
	return (root);
}
