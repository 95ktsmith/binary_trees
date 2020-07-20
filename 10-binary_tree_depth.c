#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of given node
 * @tree: Pointer to the node to measure depth
 * Return: Depth of the node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
