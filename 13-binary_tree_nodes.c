#include "binary_trees.h"

/**
 * binary_tree_nodes - returns non-leaf nodes
 * @tree: the pointer to the node
 * Return: number of 0 if NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t non_leaf_nodes = 0;

	if (tree)
	{
		non_leaf_nodes += (tree->left || tree->right) ? 1 : 0;
		non_leaf_nodes += binary_tree_nodes(tree->left);
		non_leaf_nodes += binary_tree_nodes(tree->right);
	}
	return (non_leaf_nodes);
}
