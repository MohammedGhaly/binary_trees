#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: head node of the tree
 * Return: 1 if is perfecet, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) == binary_tree_size(tree->right));
}

/**
 * binary_tree_size - claculates the size of a tree
 * @tree: head node of the tree
 * Return: the size of a binary tree (number of nodes)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
