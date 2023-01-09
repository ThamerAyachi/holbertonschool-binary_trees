#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert new binary tree in right
 * @parent: pointer of parent
 * @value: value for node
 * Return: pointer of new binary tree
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (parent == NULL)
		return (NULL);

	if (parent->right)
	{
		tmp = parent->right;
		parent->right = binary_tree_node(parent, value);
		parent->right->right = tmp;
		tmp->parent = parent->right;
	}
	else
		parent->right = binary_tree_node(parent, value);

	return (parent->right);
}
