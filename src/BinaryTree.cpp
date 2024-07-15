#include "BinaryTree.hpp"
#include <cmath>
#include <iostream>

void _disp_recursive(BinaryTreeNode* node, int lvl=0, char branch = '-') {
    if ( nullptr != node ) {
        _disp_recursive(node->right, lvl+1, '/');
        std::cout << std::string(lvl*4, ' ');
        std::cout << branch << "[" << node->val << "]" << std::endl;
        _disp_recursive(node->left, lvl+1, '\\');
    }
}

void display_tree(BinaryTreeNode* root) {
    _disp_recursive(root);
}
