#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert right child
 * Description: Inserts node as right child of a parent. If the parent already
 *		has a right child, then that child becomes the right child of
 *		the new node.
 * @parent: Pointer to parent node
 * @value: Integer value the new node will have
 * Return: Pointer to the new node, or NULL in failure.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;

	/* Move parent's right node to right child of new node if it exists */
	if (parent->right != NULL)
	{
		parent->right->parent = node;
		node->right = parent->right;
	}

	parent->right = node;

	return (node);

}
