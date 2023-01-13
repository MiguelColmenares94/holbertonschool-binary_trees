#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to
 * measure the balance factor.
 *
 * Return: Balance factor of the tree, 0 if failure.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t heightL, heightR, BF;

	if (!tree)
	{
		return (0);
	}

	if (tree->left)
	{
		heightL = 1 + binary_tree_height(tree->left);
	}

	if (tree->right)
	{
		heightR = 1 + binary_tree_height(tree->right);
	}

	BF = (heightL - heightR);
	return (BF);
}
