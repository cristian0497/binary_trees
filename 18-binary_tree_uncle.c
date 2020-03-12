#include "binary_trees.h"
/**
 * binary_tree_uncle - define the uncle for the binary_tree
 * @node: binary tree
 * Return: NULL or Node uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent;

	if (!node)
		return (NULL);
	if (node->parent)
		parent = node->parent;
	else
		return (NULL);
	if (parent->parent)
		grandparent = parent->parent;
	else
		return (NULL);
	if (grandparent->left == parent)
		return (grandparent->right);
	if (grandparent->right == parent)
		return (grandparent->left);
	return (NULL);

}
