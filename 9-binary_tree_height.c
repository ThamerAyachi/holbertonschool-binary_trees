#include "binary_trees.h"

/**
 * second_method - for recursion
 * @tree: binary_tree_t
 * Return: size_t
 */
size_t second_method(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	left_height = second_method(tree->left);
	right_height = second_method(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_height - count
 * @tree: binary_tree_t
 * Return: size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t final_result = second_method(tree);

	return ((final_result == 0) ? final_result : final_result - 1);
}
