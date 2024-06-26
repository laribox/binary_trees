#include "binary_trees.h"
/**
  * binary_tree_size - returns the size of a binary tree
  * @tree: tree to measure
  * Return: size of the tree
  */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int size;

	if (!tree)
		return (0);

	size = binary_tree_size(tree->left) + binary_tree_size(tree->right);

	return (size + 1);
}
