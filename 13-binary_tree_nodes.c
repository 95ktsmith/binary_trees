#include "binary_trees.h"

/**
 * binary_tree_nodes - Count all nodes with atleast one child
 * @tree: The tree to count
 *
 * Return: # of nodes with >= 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If its a leaf return 0 */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* Otherwise keep recursive traveling the bt */
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
