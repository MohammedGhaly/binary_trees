#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: head node of the tree
 * Return: the balance factor of a tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * binary_tree_height - calculates the height of the tree
 * @tree: head node of the tree
 * Return: the height of the root node (int)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh;
	size_t rh;

	if (tree)
	{
		rh = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		lh = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		return (lh > rh ? 1 : rh);
	}
	return (0);
}
