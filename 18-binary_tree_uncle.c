#include "binary_trees.h"

/**
 * binary_tree_sibling - search for sibling
 * @node: binary_tree_t
 * Return: binary_tree_t
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp;

	if (!node || !node->parent)
		return (NULL);

	tmp = node->parent->left == node ? node->parent->right : node->parent->left;

	if (!tmp)
		return (NULL);

	return (tmp);
}

/**
 * binary_tree_uncle - search for uncle
 * @node: binary_tree_t
 * Return: binary_tree_t
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
