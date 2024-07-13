#ifndef DEPTHFIRSTTRAVERSAL_HPP
#define DEPTHFIRSTTRAVERSAL_HPP

#include "BinaryTree.hpp"

#include <vector>
typedef std::vector<int> Vector;

void pre_order_traversal(BinaryTreeNode* node, Vector& ret);
void post_order_traversal(BinaryTreeNode* node, Vector& ret);
void in_order_traversal(BinaryTreeNode* node, Vector& ret);

#endif
