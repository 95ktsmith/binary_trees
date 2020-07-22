#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: The tree to measure
 *
 * Return: Size (int)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Recursively branch through each node, adding one each node */
	return (binary_tree_size(tree->right) + binary_tree_size(tree->left) + 1);
}
