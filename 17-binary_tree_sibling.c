#include "binary_trees.h"
/**
  * binary_tree_sibling - finds the sibling of a node
  * @node: node to check
  * Return: pointer to the sibling
  */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	else
		return (node->parent->right);
}
