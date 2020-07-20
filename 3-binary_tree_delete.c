#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a binary tree
 * @tree: Pointer to root node of the tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_delete(tree->left);

	if (tree->right != NULL)
		binary_tree_delete(tree->right);

	free(tree);
}
