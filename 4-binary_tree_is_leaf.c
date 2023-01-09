#include "binary_trees.h"

/**
 * binary_tree_is_leaf - binary_tree_is_leaf
 * @node: pointer
 * Return: integer
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (!node->left && !node->right)
		return (1);

	return (0);
}
