#include "binary_trees.h"

/**
 * binary_tree_height - height of a binary tree
 * @tree: The tree to measure
 *
 * Return: Height or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int right = 0, left = 0;

	if (tree == NULL)
		return (-1);

	right = binary_tree_height(tree->right);
	left = binary_tree_height(tree->left);

	if (right > left)
		return (right + 1);
	return (left + 1);
}
