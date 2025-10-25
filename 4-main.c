#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_insert_left(root, 12);
    root->right = binary_tree_insert_right(root, 128);
    root->left->right = binary_tree_insert_right(root->left, 54);
    root->right->right = binary_tree_insert_right(root->right, 402);
    binary_tree_print(root);

    printf("Is 98 a leaf: %d\n", binary_tree_is_leaf(root));
    printf("Is 128 a leaf: %d\n", binary_tree_is_leaf(root->right));
    printf("Is 402 a leaf: %d\n", binary_tree_is_leaf(root->right->right));
    return (0);
}
