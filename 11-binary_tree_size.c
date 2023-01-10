#include "binary_trees.h"

/**
 * binary_tree_size - size of tree
 * @tree: binary_tree_t
 * Return: size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right_size, left_size;

	if (!tree)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return (1 + left_size + right_size);
}
