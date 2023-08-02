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
	return (get_balance(tree));
}

/**
 * get_balance - recursive method that measures the balance factor of a tree
 * @tree: head node of the tree
 * Return: the balance factor of a tree (int)
 */
int get_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);
	return (get_balance(tree->left) - get_balance(tree->right));
}

