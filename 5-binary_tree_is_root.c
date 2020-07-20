#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a root
 * @node: Node to check
 * Return: 1 if node is a root, 0 otherwise.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	/* If node's parent exists, node is not a root */
	if (node->parent != NULL)
		return (0);

	return (1);
}
