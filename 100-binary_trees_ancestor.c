#include "binary_trees.h"

/**
  * binary_trees_ancestor - finds the lowest common ancestor of two nodes
  * @first: is a pointer to the first node
  * @second: is a pointer to the second node
  * Return: pointer to lowest common ancestor node
  */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				const binary_tree_t *second)
{
	const binary_tree_t *node2;

	if (first == NULL || second == NULL)
		return (NULL);
	while (first)
	{
		node2 = second;
		while (node2)
		{
			if (first == node2)
				return ((binary_tree_t *) first);
			node2 = node2->parent;
		}
		first = first->parent;
	}
	return (NULL);
}
