#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowest common ancestor node
 *         of the two given nodes, or NULL if none found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	const binary_tree_t *f, *s;

	if (!first || !second)
		return (NULL);

	f = first;
	while (f)
	{
		s = second;
		while (s)
		{
			if (f == s)
				return ((binary_tree_t *)f);
			s = s->parent;
		}
		f = f->parent;
	}
	return (NULL);
}
