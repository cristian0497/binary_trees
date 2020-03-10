#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - A new node to the structure
 * @parent: the parent node of the new node or NULL
 * @value: Value int of Node
 * Return: A new node, or NULL if fails
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
