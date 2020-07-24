#include "binary_trees.h"

/**
 * binary_tree_inorder - operates on tree in in-order traversal
 * @tree: Pointer to root node of the tree
 * @func: Pointer to function to call on each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
