#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: head node of the tree
 * Return: (integer)
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || binary_tree_is_leaf(tree))
		return (0);
	else
		return (1 + (binary_tree_nodes(tree->left)) +
		binary_tree_nodes(tree->right));
}

/**
 * binary_tree_is_leaf - checks of the passed node is a leaf
 * @node: head node of the tree
 * Return: 1 if is leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
