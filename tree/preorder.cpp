#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <list>
#include <algorithm>
#include <set>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 }; 

class Solution {
    public:
        vector<int> order;

        vector<int> preorder(TreeNode * root) {
            if (root != NULL) {
                //printf("%d\n", root->val);
                order.push_back(root->val);
                preorder(root->left);
                preorder(root->right);
            }

            return order;
        }
};


int main(int argc, char * argv[]) {
    struct TreeNode * root = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    root->val = 1;
    root->right = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    root->right->val = 2;
    root->right->left = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    root->right->left->val = 3;

    Solution solution;
    vector<int> response = solution.preorder(root);
    for (int &num : response) {
        printf("%d ", num);
    }


    printf("\n");

	return 0;
}
