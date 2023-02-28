#include "binary_trees.h"
/**
  * binary_tree_node - create a node
  * @parent: a pointer to the parent node of the node to create
  * @value: the value to put in the new node
  * Return: a pointer to the new node, or NULL on failure
  */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new.value = value;
	new->parent = parent;
	new->right = NULL;
	new->left = NULL;

	return (new);
}
