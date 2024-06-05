#include "binary_trees.h"
/**
* binary_tree_height - returns the height of a binary tree
* @tree: Tree to measure
* Return: height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left = binary_tree_height(tree->left) + 1;
	if (tree->right)
		right = binary_tree_height(tree->right) + 1;

	if (left > right)
		return (left);
	else
		return (right);
}
