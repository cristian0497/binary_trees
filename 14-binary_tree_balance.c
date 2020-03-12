#include "binary_trees.h"
/**
 * binary_tree_balance - print the balance
 * @tree: binary Tree
 * Return: int balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int hl, hr;

	if (!tree)
		return (0);
	hl = binary_tree_height(tree->left);
	if (!tree->left)
		hl -= 1;
	hr = binary_tree_height(tree->right);
	if (!tree->right)
		hr -= 1;
	return (hl - hr);
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
