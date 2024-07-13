#include "BreadthFirstTraversal.hpp"
#include <queue>

Vector breadth_first_traversal(BinaryTreeNode* root){
    Vector ret;
    std::queue<BinaryTreeNode*> q;
    BinaryTreeNode* node;

    q.push(root);
    while(!q.empty()){
        node = q.front();
        q.pop();
        if (nullptr == node) {
            continue;
        }
        ret.push_back(node->val);
        q.push(node->left);
        q.push(node->right);
    }
    return ret;
}
