/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 17:03:04 by grass-kw          #+#    #+#             */
/*   Updated: 2016/07/23 17:50:19 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "btree.h"

static void	btree_bzero(void *s, size_t n)
{
	char	*tmp;

	tmp = (char *)s;
	while (n--)
	{
		*tmp = (unsigned char)0;
		tmp++;
	}
}

static void	*btree_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp_src;
	unsigned char	*tmp_dst;

	tmp_src = (unsigned char *)src;
	tmp_dst = (unsigned char *)dst;
	while (len--)
	{
		*tmp_dst = *tmp_src;
		tmp_src++;
		tmp_dst++;
	}
	return ((void *)tmp_dst);
}

static void	*btree_memalloc(size_t size)
{
	void	*ret;

	if (!size || !(ret = malloc(size)))
		return (NULL);
	btree_bzero(ret, size);
	return (ret);
}

t_btree				*btree_new(void *content, size_t content_size)
{
	t_btree		*new_node;

	if ((new_node = (t_btree *)malloc(sizeof(t_btree))) == NULL)
		return (NULL);
	new_node->content = btree_memalloc(content_size);
	if (!content)
		new_node->content = NULL;
	else
		btree_memcpy(new_node->content, content, content_size);
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
