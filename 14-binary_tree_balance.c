#include "binary_trees.h"

/**
  * binary_tree_height - measures the height of a binary tree
  * @tree: a pointer to the root node of the tree to measure the height.
  * Return: height of a tree
  */
size_t binary_tree_height(const binary_tree_t *tree)
{	size_t l = 0, r = 0;
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
			r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		}
		return ((l > r) ? l : r);
	}
}

/**
  * binary_tree_balance - measures the balance factor of a binary tree
  * @tree:  pointer to the root node of the tree to measure the balance factor
  * Return: number of nodes with at least one child.
  * if tree is NULL, the function must return 0
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0, balance_factor = 0;

	if (tree)
	{
		left_height = ((int)binary_tree_height(tree->left));
		right_height = ((int)binary_tree_height(tree->right));
		balance_factor = left_height - right_height;
	}
	return (balance_factor);
}
