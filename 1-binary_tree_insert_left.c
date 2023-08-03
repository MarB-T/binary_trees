#include "binary_trees.h"

/**
 * binary_tree_insert_left - function to insert a node as the left child of a given node
 * @parent: pointer to the node to insert
 * @value: value to store in the new node
 * Return: inserted node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	if (!parent)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	new->n = value;
	if (parent->left)
	{
		temp = parent->left;
		parent->left = new;
		new->left = temp;
	}
	else
		parent->left = new;
	return (new);
}
