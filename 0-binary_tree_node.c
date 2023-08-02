#include "binary_trees.h"

/**
 * binary_tree_node - Function to create a binary tree node
 * @parent: pointer to the perant node to create
 * @value: the value of data to store in the node
 * Return: pointer to the created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	if (!parent)
		return (NULL);

	parent = malloc(sizeof(binary_tree_t));
	if (!parent)
		return (NULL);
	parent->n = value;
	parent->left = NULL;
	parent->right = NULL;
	parent->parent = parent;

	return (parent);
}
