#include "DepthFirstTraversal.hpp"

void pre_order_traversal(BinaryTreeNode* node, Vector& ret) {
    // base
    if (nullptr == node) {
        return;
    }

    // recurse
    pre_order_traversal(node->left, ret);
    pre_order_traversal(node->right, ret);

    // post
    ret.push_back(node->val);
}

void post_order_traversal(BinaryTreeNode* node, Vector& ret){
    // base
    if (nullptr == node) {
        return;
    }

    // pre
    ret.push_back(node->val);

    // recurse
    post_order_traversal(node->left, ret);
    post_order_traversal(node->right, ret);

}

void in_order_traversal(BinaryTreeNode* node, Vector& ret){
    // base
    if (nullptr == node) {
        return;
    }

    // recurse
    post_order_traversal(node->left, ret);
    ret.push_back(node->val);
    post_order_traversal(node->right, ret);

}
