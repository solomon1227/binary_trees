#include "binary_trees.h"
/**
  * binary_tree_insert_left - inserts a node as the left-child of another node
  * @parent:  a pointer to the node to insert the left-child in
  * @value: the value to put in the new node
  * Return: a pointer to the new node, or NULL on failure
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *tmp;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new.value = value;
	new->parent = parent;
	new->right = NULL;
	new->left = NULL;

	if (parent->left == NULL)
		parent->left = new;
	else
	{
		tmp = parent->left;
		parent->left = new;
		new->left = tmp;
	}
	return (new);
}
