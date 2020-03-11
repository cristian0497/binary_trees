#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - insert at left a new node
 * @parent: parent of the new node
 * @value: value to assign in the new node
 * Return: New node at left
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	if (!parent->left)
	{
		parent->left = binary_tree_node(parent, value);
		return (parent->left);
	}
	else
	{
		node = binary_tree_node(parent, value);
		node->left = parent->left;
		parent->left->parent = node;
		parent->left = node;
		return (node);
	}
}
