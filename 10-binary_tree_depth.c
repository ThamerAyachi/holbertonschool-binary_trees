#include "binary_trees.h"

/**
 * second_method - for recursion
 * @tree: binary_tree_t
 * Return: size_t
 */
size_t second_method(const binary_tree_t *tree)
{
	size_t result;

	if (!tree)
		return (0);

	result = second_method(tree->parent);

	return (result + 1);
}

/**
 * binary_tree_depth - count
 * @tree: binary_tree_t
 * Return: size_t
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t result;

	if (!tree)
		return (0);

	result = second_method(tree);

	return (result == 0 ? result : result - 1);
}
