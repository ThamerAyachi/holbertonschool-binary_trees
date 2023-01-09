#include "binary_trees.h"

/**
 * binary_tree_node - create new binary tree node
 * @parent: pointer of parent
 * @value: value for node
 * Return: pointer of new binary tree
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = malloc(sizeof(binary_tree_t));

	if (tmp == NULL)
		return (NULL);

	tmp->parent = parent;
	tmp->left = NULL;
	tmp->right = NULL;
	tmp->n = value;

	return (tmp);
}
