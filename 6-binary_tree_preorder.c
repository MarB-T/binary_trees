#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree usinf preorder traversal
 * @tree: pointer to treen to traverse
 * @func: function to process node data
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree == NULL) || (func == NULL))
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
