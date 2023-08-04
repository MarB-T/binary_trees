#include "binary_trees.h"

/**
 * binary_tree_depth - gets the depth of a binary tree
 * @tree: pointer to the tree
 * Return: tree depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		depth += 1;
		tree = tree->parent;
	}
	return (depth);
}
