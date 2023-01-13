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
	if (parent == NULL)
	{
		return(NULL);
	}
	
	if (!parent->left)
	{
		parent->left = binary_tree_node(parent, value);
		return (parent->left);
	}

	if (parent->left != NULL)
	{
		binary_tree_t *temp = malloc(sizeof(binary_tree_t));
		temp->left = parent->left;
		parent->left = binary_tree_node(parent, value);
		parent->left->left = temp->left;
		parent->left->left->parent = parent->left;
		free(temp);
		return (parent->left);
	}
}
