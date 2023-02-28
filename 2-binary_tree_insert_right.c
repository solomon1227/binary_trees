#include "binary_trees.h"
/**
  * binary_tree_insert_right - inserts node as the right-child of another node
  * @parent:  a pointer to the node to insert the left-child in
  * @value: the value to put in the new node
  * Return: pointer to created node, or NULL on failure or if parent is NULL
  */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	if (parent->right == NULL)
		parent->right = new_node;
	else
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
		parent->right = new_node;
	}
	return (new_node);
}
