#include "binary_trees.h"

/**
 * binary_tree_preorder - operates on tree in pre-order traversal
 * @tree: Pointer to root node of the tree
 * @func: Pointer to function to call on each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
