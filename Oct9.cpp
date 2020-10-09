/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string res;
        if(!root)
            return "# ";
        res+=to_string(root->val)+" ";
        res+=serialize(root->left);
        res+=serialize(root->right);
        return res;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        istringstream s(data);
        return decode(s);
    }
private:
    TreeNode * decode(istringstream & s)
    {
        string curr;
        s>>curr;
        if(curr[0]=='#' || curr.empty())
            return NULL;
        TreeNode * root = new TreeNode(stoi(curr));
        root->left = decode(s);
        root->right = decode(s);
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;
