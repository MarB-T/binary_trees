#include "binary_trees.h"

/**
 * binary_tree_node - Function to create a binary tree node
 * @parent: pointer to the perant node to create
 * @value: the value of data to store in the node
 * Return: pointer to the created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root;
	if (!parent)
		return (NULL);

	root = malloc(sizeof(binary_tree_t));
	if (!root)
		return (NULL);
	root->n = value;
	root->left = NULL;
	root->right = NULL;
	root->parent = parent;

	return (root);
}
