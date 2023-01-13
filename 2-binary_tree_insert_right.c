#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure
 * or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		binary_tree_t *temp = malloc(sizeof(binary_tree_t));

		temp->right = parent->right;
		parent->right = binary_tree_node(parent, value);
		parent->right->right = temp->right;
		parent->right->right->parent = parent->right;
		free(temp);
	}

	if (!parent->right)
	{
		parent->right = binary_tree_node(parent, value);
	}

	return (parent->right);
}
