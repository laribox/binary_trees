#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
  * binary_tree_balance - Checks to see if the binary tree is balanced
  * @tree: tree to measure
  * Return: if tree is weighted left, return positive
  *         if tree is weighted right, return negative.
  *         if tree is balanced, return 0
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left)
		- binary_tree_height(tree->right));
}
