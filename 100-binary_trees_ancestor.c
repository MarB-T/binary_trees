#include "binary_trees.h"

/**
 * binary_trees_ancestor - locate the lowest minimum ancestor
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: the pointer to ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *fp, *sp;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	fp = first->parent;
	sp = second->parent;
	if (first == fp || !sp || (!sp->parent && fp))
		return (binary_trees_ancestor(first, fp));
	else if (sp == second || !fp || (!fp->parent && sp))
		return (binary_trees_ancestor(sp, second));
	return (binary_trees_ancestor(sp, fp));
}
