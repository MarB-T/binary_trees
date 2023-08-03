#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a right child node
 * @parent: pointer to the parent node
 * @value: value to store in new node
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);
	if (!parent->right)
		parent->right = new;
	else
	{
		new->right = parent->right;
		parent->right->parent = new;
		parent->right = new;
	}
	return (new);
}
