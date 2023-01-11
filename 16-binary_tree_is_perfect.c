#include "binary_trees.h"

/**
 * tree_is_perfect - check if same number
 * @tree: binary_tree_t
 * Return: integer
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree->left && tree->right)
	{
		l = 1 + tree_is_perfect(tree->left);
		r = 1 + tree_is_perfect(tree->right);
		if (r == l && r != 0 && l != 0)
			return (r);
		return (0);
	}
	else if (!tree->left && !tree->right)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_is_perfect - check if perfect
 * @tree: binary_tree_t
 * Return: integer
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (tree == NULL)
		return (0);

	result = tree_is_perfect(tree);

	return (result == 0 ? 0 : 1);
}
