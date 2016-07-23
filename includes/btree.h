/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 16:52:44 by grass-kw          #+#    #+#             */
/*   Updated: 2016/07/23 19:37:16 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTREE_H
# define BTREE_H
# include <stdlib.h>

typedef struct		s_btree
{
	void			*content;
	size_t			content_size;
	struct s_btree	*left;
	struct s_btree	*right;
}					t_btree;

t_btree				*btree_new(void *content, size_t content_size);
t_btree				*btree_add_node(t_btree *root, t_btree *new_node,
	int (*cmp)());
void				btree_iter_suffix(t_btree *root, void (*f)(t_btree *));
void				btree_iter_postfix(t_btree *root, void (*f)(t_btree *));
void				btree_iter_infix(t_btree *root, void (*f)(t_btree *));

void				btree_delone(t_btree *root, void (*del)(t_btree *));
void				btree_del(t_btree **root, void (*del)(t_btree *),
	void (*parcour)(t_btree *root, void (*f)(t_btree *)));

#endif
