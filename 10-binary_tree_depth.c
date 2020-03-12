#include "binary_trees.h"
/**
 * binary_tree_depth - print the depth of the binary tree
 * @tree: Binary tree
 * Return: depth lenght
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t l = 0;

	if (!tree || !tree->parent)
		return (0);

	l = binary_tree_depth(tree->parent);
	l++;
	return (l);
}
