#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the tree to measure
 * Return: height of binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree)
	{
		left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((left_height > right_height) ? left_height : right_height);
	}
	return (0);
}
