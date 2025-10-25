#include "binary_trees.h"

/**
 * binary_tree_print - Prints a binary tree
 * @tree: Pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
	int i;
	static int depth;

	if (!tree)
		return;

	depth++;
	binary_tree_print(tree->right);

	for (i = 0; i < depth - 1; i++)
		printf("       ");
	printf("(%03d)\n", tree->n);

	binary_tree_print(tree->left);
	depth--;
}
