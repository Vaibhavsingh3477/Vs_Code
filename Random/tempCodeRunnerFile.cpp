// C++ code to implement the approach

#include <bits/stdc++.h>
using namespace std;

// Structure of a tree node
class Node {
public:
	int data;
	vector<Node*> children;
	Node(int val) { data = val; }
};

// Function to run dfs
string dfs(Node* root, unordered_map<string, int>& f)
{
	// Base condition
	if (root == 0)
		return "";
	string s = "(";
	s += to_string(root->data);
	// Dfs call for all children
	for (auto child : root->children) {
		s += dfs(child, f);
	}
	s += ')';
	f[s]++;

	// Return answer string
	return s;
}

// Function to count number of duplicate substrings
int duplicateSubtreeNaryTree(Node* root)
{
	// Declare a map
	unordered_map<string, int> f;

	// DFS call
	dfs(root, f);
	int ans = 0;

	// Loop for traversing the map
	for (auto p : f)
		if (p.second > 1)
			ans++;

	// Return the count of duplicate subtrees
	return ans;
}

// Driver code
int main()
{
	// Building a tree
	Node* root = new Node(1);
	root->children.push_back(new Node(2));
	root->children.push_back(new Node(2));
	root->children.push_back(new Node(3));
	root->children[0]->children.push_back(new Node(4));
	root->children[1]->children.push_back(new Node(4));
	root->children[1]->children.push_back(new Node(4));
	root->children[1]->children.push_back(new Node(3));

	// Function call
	cout << duplicateSubtreeNaryTree(root);

	return 0;
}
