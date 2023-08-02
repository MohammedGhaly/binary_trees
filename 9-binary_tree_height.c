#include "binary_trees.h"

/**
 * binary_tree_height - calculates the height of the node
 * @tree: node from the tree
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (get_height(tree));
}

/**
 * get_height - a recursive method that calculates the height of a tree
 * @tree: node to get its height
 * Return: height of the node
 */
size_t get_height(const binary_tree_t *tree)
{
	size_t lh;
	size_t rh;

	rh = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	lh = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	return (lh > rh ? lh : rh);
}
