#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: Pointer to the parent of the node
 * @value: Integer value the node will contain
 * Return: Pointer to the new node, or NULL in failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	/* If the parent exists and is full */
	if (parent != NULL && (parent->left != NULL && parent->right != NULL))
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	/* If parent exists, add child to left, or right if left exists */
	if (parent != NULL)
	{
		if (parent->left == NULL)
			parent->left = node;
		else
			parent->right = node;
	}

	return (node);
}
