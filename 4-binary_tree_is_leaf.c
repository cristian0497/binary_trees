#include "binary_trees.h"
/**
 * binary_tree_is_leaf - is node is leaf (no left - no right) NO CHILDRENS ;)
 * @node: node to check
 * Return: (1) if not leaf, (0) other case
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	else
		return (0);
}
