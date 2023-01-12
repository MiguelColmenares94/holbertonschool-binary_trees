#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure
 * or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	parent->left = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		newNode->parent = parent;
		newNode->left = parent->left;
		parent->left->parent = newNode;
		parent->left = newNode;
	}

	return (newNode);
}
