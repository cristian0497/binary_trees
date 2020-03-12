#include "binary_trees.h"
/**
 * binary_tree_is_perfect - recursive function
 * @tree: binary tree
 * Return: 1 if node are perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if ((int)binary_tree_leaves(tree) == is_perfect(2, binary_tree_height(tree)))
		return (1);
	else
		return (0);
}
/**
 * is_perfect - first filter to define a binary tree
 * @d: depth value
 * @level: level of node in Binary tree
 * Return: 1 if binary tree is perfect, 0 if not
 */
int is_perfect(int d, int level)
{
	if (level > 0)
		return (d * is_perfect(d, level - 1));
	else if (level < 0)
		return (-1);
	else
		return (1);
}
/**
 * binary_tree_leaves - leaves of nodes
 * @tree: binary tree
 * Return: count of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
/**
 * binary_tree_height - the height of binary tree
 * @tree: binary tree to check height
 * Return: hight of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	if (l > r)
		return (l + 1);
	else
		return (r + 1);
}
