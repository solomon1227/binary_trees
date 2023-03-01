#include "binary_trees.h"
/**
  * binary_tree_balance - measures the balance factor of a binary tree
  * @tree:  pointer to the root node of the tree to measure the balance factor
  * Return: number of nodes with at least one child.
  * if tree is NULL, the function must return 0
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree)
	{
		left_height = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
		right_height = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
	}
	return (left_height - right_height);
}
