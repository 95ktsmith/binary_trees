#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert left child
 * Description: Inserts node as left child of a parent. If the parent already
 *		has a left child, then that child becomes the left child of
 *		the new node.
 * @parent: Pointer to parent node
 * @value: Integer value the new node will have
 * Return: Pointer to the new node, or NULL in failure.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->right = NULL;

	/* Move parent's left node to left child of new node if it exists */
	if (parent->left != NULL)
	{
		parent->left->parent = node;
		node->left = parent->left;
	}
	else
		node->left = NULL;

	parent->left = node;

	return (node);

}
