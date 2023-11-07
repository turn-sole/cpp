#pragma once

#include<iostream>
using namespace std;

enum Colour
{
	Red,
	Black
};

template<class K, class V>
struct RBTreeNode
{
	RBTreeNode<K, V>* _left;
	RBTreeNode<K, V>* _right;
	RBTreeNode<K, V>* _parent;

	pair<K, V>_kv;
	Colour _col;

	RBTreeNode(const pair<K, V>& kv)
		:_left(nullptr)
		,_right(nullptr)
		,_parent(nullptr)
		,_kv(kv)
		,_col(Red)
	{}
};

template<class K,class V>
struct RBTree
{
	typedef RBTreeNode<K, V>Node;
public:
	bool Insert(const pair<K, V>& kv)
	{
		if (_root == nullptr)
		{
			_root = new Node(kv);
			_root->_col = Black;
			return true;
		}

		Node* parent = nullptr;
		Node* cur = _root;
		while (cur)
		{
			if (cur->_kv.first < kv.first)
			{
				parent = cur;
				cur = cur->_right;
			}
			else if (cur->_kv.first > kv.first)
			{
				parent = cur;
				cur = cur->_left;
			}
			else
			{
				return false;
			}
		}

		cur = new Node(kv);
		cur->_col = Red;
		if (parent->_kv.first < kv.first)
		{
			parent->_right = cur;
		}
		else
		{
			parent->_left = cur;
		}

		cur->_parent = parent;

		while (parent&& parent->_col == Red)
		{
			Node* grandfather = parent->_parent;
			if (parent == grandfather->_left)
			{
				Node* uncle = grandfather->_right;
				if (uncle&& uncle->_col == Red)
				{
					parent->_col = uncle->_col = Black;
					grandfather->_col = Red;

					cur = grandfather;
					parent = cur->_parent;
				}
				else
				{
					if (cur == parent->_left)
					{
						rrotation(grandfather);
						parent->_col = Black;
						grandfather->_col = Red;
					}
					else
					{
						lrotation(parent);
						rrotation(grandfather);
						cur->_col = Black;
						grandfather->_col = Red;
					}
					break;
				}
			}
			else
			{
				Node* uncle = grandfather->_left;
				if (uncle && uncle->_col == Red)
				{
					parent->_col = uncle->_col = Black;
					grandfather->_col = Red;

					cur = grandfather;
					parent = cur->_parent;
				}
				else
				{
					if (cur == parent->_left)
					{
						rrotation(parent);
						lrotation(grandfather);
						cur->_col = Black;
						grandfather->_col = Red;
					}
					else
					{
						lrotation(grandfather);
						parent->_col = Black;
						grandfather->_col = Red;
					}
					break;
				}
			}
		}
		_root->_col = Black;
		return true;
	}

	void lrotation(Node* parent)
	{
		++_rotateCount;
		Node* cur = parent->_right;
		Node* curleft = cur->_left;

		parent->_right = curleft;
		if (curleft)
		{
			curleft->_parent = parent;
		}
		cur->_left = parent;
		Node* ppnode = parent->_parent;
		parent->_parent = cur;

		if (parent == _root)
		{
			_root = cur;
			cur->_parent = nullptr;
		}
		else
		{
			if (ppnode->_left == parent)
			{
				ppnode->_left = cur;
			}
			else
			{
				ppnode->_right = cur;
			}

			cur->_parent = ppnode;
		}
	}

	void rrotation(Node* parent)
	{
		++_rotateCount;
		Node* cur = parent->_left;
		Node* curright = cur->_right;

		parent->_left = curright;
		if (curright)
		{
			curright->_parent = parent;
		}
		cur->_right = parent;
		Node* ppnode = parent->_parent;
		parent->_parent = cur;
		if (ppnode == nullptr)
		{
			_root = cur;
			cur->_parent = nullptr;
		}
		else
		{
			if (ppnode->_left == parent)
			{
				ppnode->_left = cur;
			}
			else
			{
				ppnode->_right = cur;
			}
			cur->_parent = ppnode;
		}
	}

	bool CheckColour(Node* root, int blacknum, int benchmark)
	{
		if (root == nullptr)
		{
			if (blacknum != benchmark)
			{
				return false;
			}
			return true;
		}

		if (root->_col == Black)
		{
			++blacknum;
		}

		if (root->_col == Red && root->_parent && root->_parent->_col == Red)
		{
			cout << root->_kv.first << "appear successive red dots" << endl;
			return false;
		}

		return CheckColour(root->_left, blacknum, benchmark) && CheckColour(root->_right, blacknum, benchmark);
	}

	bool IsBlance()
	{
		return IsBlance(_root);
	}

	bool IsBlance(Node* root)
	{
		if (root == nullptr)
			return true;
		
		if (root->_col != Black)
		{
			return false;
		}

		int benchmark = 0;
		Node* cur = _root;
		while (cur)
		{
			if (cur->_col == Black)
				++benchmark;

			cur = cur->_left;
		}
		
		return CheckColour(root, 0, benchmark);
	}

	int Height()
	{
		return Height(_root);
	}

	int Height(Node* root)
	{
		if (root == nullptr)
			return 0;
		int leftheight = Height(root->_left);
		int rightheight = Height(root->_right);

		return leftheight > rightheight ? leftheight + 1 : rightheight + 1;
	}

private:
	Node* _root = nullptr;

public:
	int _rotateCount = 0;
};