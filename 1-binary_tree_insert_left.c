#include "binary_trees.c"

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
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (!newNode)
	{
		return (NULL);
	}

	if (parent->left)
	{
		parent->left->left = createNode(value);
		return (parent->left);
	}

	parent->left = createNode(value);
	return (parent->left);
}
