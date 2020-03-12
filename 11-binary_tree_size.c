#include "binary_trees.h"
/**
 * binary_tree_size - the size of lefth + right + 1
 * @tree: binary tree
 * Return: size of tree or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));

}
