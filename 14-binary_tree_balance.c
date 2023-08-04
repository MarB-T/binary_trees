#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the tree in question
 * Return: Balance factor or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}
