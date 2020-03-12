#include "binary_trees.h"
/**
 * binary_tree_sibling - check if the node has a brother node
 * @node: node to check
 * Return: a pointer to node brother
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp;

	if (!node || !node->parent)
		return (NULL);
	tmp = node->parent;
	if (tmp->left && tmp->right)
	{
		if (tmp->left == node)
			return (tmp->right);
		else if (tmp->right == node)
			return (tmp->left);
	}
	return (NULL);
}
