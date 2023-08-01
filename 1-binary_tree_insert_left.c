#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: parent node
 * @value: value carried by the node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = binary_tree_node(parent, value);

	if (!parent)
		return (NULL);
	if (!new)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left = new;
	}
	else
		parent->left = new;

	return (new);
}
