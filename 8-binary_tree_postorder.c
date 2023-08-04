#include "binary_trees.h"

/**
 * binary_tree_postorder - goes though a binary tree using post-order traversal
 * @tree: pointer to the tree ti be traversed
 * @func: pointer to function that processes node data
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree == NULL) || (func == NULL))
		return;
	if (tree->left)
		binary_tree_postorder(tree->left, func);
	if (tree->right)
		binary_tree_postorder(tree->right, func);
	func(tree->n);
}
