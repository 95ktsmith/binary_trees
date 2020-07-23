#include "binary_trees.h"

/**
 * binary_tree_sibling - The sibling of a binary tree node
 * @node: The node to find the sibling of
 *
 * Return: The node itself or NULL on failure
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *origin = node;

	if (node == NULL)
		return (NULL);

	if (node->parent->right == origin)
		return (node->parent->left);
	else if (node->parent->left == origin)
		return (node->parent->right);

	return (NULL);
}
