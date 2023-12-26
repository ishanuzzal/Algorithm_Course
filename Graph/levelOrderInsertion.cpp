#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define ppb pop_back
#define F first
#define S second
#define fr(a, b)  		for(ll i = a; i < b; i++)

typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

const int N=1e5+10;
vector<int> visited(7,0);
void init();

struct TreeNode {
    string val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(string x) : val(x), left(nullptr), right(nullptr) {}
};



// Function to perform inorder traversal of the binary tree
void inorderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}

void insertInLevelOrder(TreeNode* root, string value) {
    if (!root) {
        root = new TreeNode(value);
        return;
    }

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();

        if (current->left == nullptr) {
            current->left = new TreeNode(value);
            break; // Node inserted, exit the loop
        } else {
            q.push(current->left);
        }

        if (current->right == nullptr) {
            current->right = new TreeNode(value);
            break; // Node inserted, exit the loop
        } else {
            q.push(current->right);
        }
    }
}

int main() {
    init();
    // Input the inorder traversal as a space-separated string
    cout << "Enter inorder traversal (space-separated, -1 for null nodes): ";
    string input;
    getline(cin, input);

    // Parse the input string to get individual node values
    istringstream iss(input);
    vector<int> inorder;
    int k=0;
    string value;
    iss>>value;
    TreeNode* root=new TreeNode(value);

    while (iss >> value) {
        insertInLevelOrder(root,value);
    }

    inorderTraversal(root);

    return 0;
}

void init() {
  //int i, j, n, m;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    #endif 
}