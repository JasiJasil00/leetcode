1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    TreeNode* arraytobst(vector<int>val,int low, int high){
15        if(low > high) return NULL;
16        TreeNode * hall = new TreeNode();
17        int mid = low + ((high-low)/2);
18        hall->left = arraytobst(val,low,mid-1);
19        hall->val=val[mid];
20        hall->right = arraytobst(val,mid+1,high);
21        return hall; 
22    }
23    void bsttoarray(TreeNode*root,vector<int>&val){
24        if(!root) return;
25        bsttoarray(root->left,val);
26        val.push_back(root->val);
27        bsttoarray(root->right,val);
28    }
29    TreeNode* balanceBST(TreeNode* root) {
30        vector <int> val;
31        bsttoarray(root,val);
32        
33        TreeNode* hall=arraytobst(val,0,val.size()-1);
34        return hall;
35    }
36};