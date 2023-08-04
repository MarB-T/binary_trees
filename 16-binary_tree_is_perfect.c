#include "binary_trees.h"
#include "14-binary_tree_balance.c"
#include "15-binary_tree_is_full.c"

/**
 * binary_tree_is_perfect - check if binary tree is perfect
 * @tree: pointer to the tree
 * Return: 1 if perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t a, b;

	if (tree == NULL)
	{
		return (0);
	}
	a = binary_tree_is_full(tree) ? 1 : 0;
	b = binary_tree_balance(tree) == 0 ? 1 : 0;
	return (a && b ? 1 : 0);
}
