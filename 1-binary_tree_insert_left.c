#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of a given node
 * @parent: pointer to the node to insert
 * @value: value to store in the new node
 * Return: inserted node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = binary_tree_node(parent, value);
	if ((!new) || (!parent))
		return (NULL);
	if (parent->left)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	else
		parent->left = new;
	return (new);
}
