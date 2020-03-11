#include "binary_trees.h"
/**
 * binary_tree_postorder - Print the binary tree in postorder
 * @tree: binary tree to be printed
 * @func: function pointer print function
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
