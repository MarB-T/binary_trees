#include "binary_trees.h"

int check_if_full(const binary_tree_t *tree);

/**
 * binary_tree_is_full - Checks if binary tree is full
 * @tree: Pointer to the tree in question
 * Return: 1 if full 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (check_if_full(tree));
}

/**
 * check_if_full - checks if tree is full
 * @tree: pointer to tree
 * Return: 1 = full, 0 = Not full
 */
int check_if_full(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
			(tree->left == NULL && tree->right != NULL) ||
			check_if_full(tree->left) == 0 ||
			check_if_full(tree->right) == 0)
			return (0);
	}
	return (1);
}
