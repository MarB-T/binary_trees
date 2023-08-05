#include "binary_trees.h"
#include "9-binary_tree_height.c"

void print_level(const binary_tree_t *tree, int level, void (*func)(int));

/**
 * binary_tree_levelorder - goes throu a binary tree using level orde traversal
 * @tree: pointer to the tree to traverse
 * @func: pointer to function to handle node data
 * Return: nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, i;

	if (tree == NULL || func == NULL)
		return;

	height = binary_tree_height(tree);

	for (i = 1; i <= height + 1; i++)
		print_level(tree, i, func);
}

/**
 * print-level - prints the data of nodes in one level
 * @tree: pointer to tree
 * @level: the current level
 * @func: pointer to funtion to print
 * Return: nothing
 */
void print_level(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (tree == NULL)
		return;

	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		print_level(tree->left, level - 1, func);
		print_level(tree->right, level - 1, func);
	}
}
