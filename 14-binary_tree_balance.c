#include "binary_trees.h"

/**
 * binary_tree_height_recursion - for recursion
 * @tree: binary_tree_t
 * Return: size_t
 */
int binary_tree_height_recursion(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (-1);

	left_height = binary_tree_height_recursion(tree->left);
	right_height = binary_tree_height_recursion(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_balance - for counting
 * @tree: binary_tree_t
 * Return: size_t
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height_recursion(tree->left);
	right_height = binary_tree_height_recursion(tree->right);

	return (left_height - right_height);
}
