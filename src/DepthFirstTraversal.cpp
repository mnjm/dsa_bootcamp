#include "DepthFirstTraversal.hpp"
#include "BinaryTree.hpp"
#include <stack>

void pre_order_traversal(BinaryTreeNode* root, Vector& ret) {
    std::stack<BinaryTreeNode*> s;
    BinaryTreeNode* node;

    s.push(root);
    while(false == s.empty()) {
        node = s.top();
        s.pop();
        if (nullptr == node) {
            continue;
        }
        ret.push_back(node->val);
        s.push(node->right);
        s.push(node->left);
    }
}

void post_order_traversal(BinaryTreeNode* root, Vector& ret){
    std::stack<BinaryTreeNode*> s;
    BinaryTreeNode* node = root;
    BinaryTreeNode* prev_node = nullptr;
    BinaryTreeNode* peek_node;

    while (nullptr != node || false == s.empty()) {
        /*go to the left leaf node*/
        if (nullptr != node) {
            s.push(node);
            node = node->left;
        }
        else {
            peek_node = s.top();
            /* consider right sub tree */
            if (nullptr != peek_node->right && prev_node != peek_node->right) {
                node = peek_node->right;
            }
            else {
                ret.push_back(peek_node->val);
                prev_node = peek_node;
                s.pop();
            }
        }
    }
}
void in_order_traversal(BinaryTreeNode* root, Vector& ret){
    std::stack<BinaryTreeNode*> s;
    BinaryTreeNode* node = root;
    BinaryTreeNode* peek_node;

    while (nullptr != node || false == s.empty()) {
        /*go to the left leaf node*/
        if (nullptr != node) {
            s.push(node);
            node = node->left;
        }
        else {
            peek_node = s.top();
            s.pop();
            ret.push_back(peek_node->val);
            if (nullptr != peek_node->right) {
                node = peek_node->right;
            }
        }
    }
}
