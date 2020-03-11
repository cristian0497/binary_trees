#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insert a node at the right of tree
 * @parent: tree structures to insert node
 * @value: value to insert in a new node
 * Return: a new node at the right
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	if (!parent->right)
	{
		parent->right = binary_tree_node(parent, value);
		return (parent->left);
	}
	else
	{
		node = binary_tree_node(parent, value);
		node->right = parent->right;
		parent->right->parent = node;
		parent->right = node;
		return (node);
	}

}
