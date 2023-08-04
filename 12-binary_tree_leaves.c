#include "binary_trees.h"

/**
 * binary_tree_leaves - Calulates the number of leaf nodes of a binary tree
 * @tree: pointer to the tree in question
 * Return: Number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		if (!tree->left && !tree->right)
			leaves++;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
