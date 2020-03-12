#include "binary_trees.h"
/**
 * binary_tree_nodes - count the num of nodes with almost 1 children
 * @tree: binary tree
 * Return: num of nodes with almost 1 children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return ((tree->left || tree->right) ? nodes + 1 : nodes);

}
