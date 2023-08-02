#include "binary_trees.h"

/**
 * binary_tree_depth - calculates the depth of a node (starts the recursion)
 * @tree: pointer to a node from the tree
 * Return: the calculated depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (get_depth(tree));
}

/**
 * get_depth - a recursive method to calculate the depth of a node
 * @tree: the node to get its depth
 * Return: the depth of a node (integer)
 */
size_t get_depth(const binary_tree_t *tree)
{
	if (!tree->parent)
		return (0);
	return (1 + get_depth(tree->parent));
}
