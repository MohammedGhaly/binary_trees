#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses the tree in preorder
 * @tree: root node of the tree
 * @func: pointer to the function that will process the nodes
 * Return: Success
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
