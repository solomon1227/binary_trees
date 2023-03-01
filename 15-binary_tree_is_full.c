#include "binary_trees.h"
/**
  * binary_tree_is_full - checks if a binary tree is full
  * @tree:  a pointer to the root node of the tree to check
  * Return: 1 if full 0 0therwise. if tree is NULL, the function must return 0
  */
int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (tree->left && tree->right)
	{
	return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	};
	if ((tree->left == NULL && tree->right == NULL) ||
		(tree->left != NULL && tree->right != NULL))
		return (1);
	else
		return (0);
}
