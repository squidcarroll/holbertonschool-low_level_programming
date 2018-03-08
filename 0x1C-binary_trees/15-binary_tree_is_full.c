#include "binary_trees.h"

/**
 * binary_tree_is_full - check if binary tree is full
 * @tree: pointer to tree
 * Return: 1 if full otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 1;

	if (!tree)
		return (0);

	if	(!tree->left && !tree->right)
		full = 1;
	else if (tree->left && tree->right)
	{
		full = binary_tree_is_full(tree->left);
		if (full == 0)
			return (full);
		full = binary_tree_is_full(tree->right);
	}
	else
		full = 0;
	return (full);
}
