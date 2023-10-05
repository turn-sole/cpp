#pragma once
#include<iostream>
using namespace std;

namespace key
{
	template<class K>
	struct BSTreeNode
	{
		BSTreeNode<K>* _left;
		BSTreeNode<K>* _right;
		K _key;

		BSTreeNode(const K& key)
			:_left(nullptr)
			, _right(nullptr)
			, _key(key)
		{}
	};

	template<class K>
	class BSTree
	{
		typedef BSTreeNode<K>Node;
	public:
		BSTree()
			:_root(nullptr)
		{}

		BSTree(const BSTree<K>& t)
		{
			_root = Copy(t._root);
		}

		BSTree<K>&operator=(BSTree<K>t)
		{
			swap(_root, t._root);
			return *this;
		}

		~BSTree()
		{
			Destroy(_root);
		}

		bool Insert(const K& key)
		{
			if (_root == nullptr)
			{
				_root = new Node(key);
				return true;
			}

			Node* parent = nullptr;
			Node* cur = _root;
			while (cur)
			{
				if (cur->_key < key)
				{
					parent = cur;
					cur = cur->_right;
				}
				else if (cur->_key > key)
				{
					parent = cur;
					cur = cur->_left;
				}
				else
				{
					return false;
				}
			}

			cur = new Node(key);
			if (parent->_key < key)
			{
				parent->_right = cur;
			}
			else
			{
				parent->_left = cur;
			}

			return true;
		}

		bool Find(const K& key)
		{
			Node* cur = _root;
			while (cur)
			{
				if (cur->key < key)
				{
					cur = cur->_right;
				}
				else if (cur->_key > key)
				{
					cur = cur->_left;
				}
				else
				{
					return true;
				}
			}

			return false;
		}

		bool Erase(const K& key)
		{
			Node* parent = nullptr;
			Node* cur = _root;

			while (cur)
			{
				if (cur->_key < key)
				{
					parent = cur;
					cur = cur->_right;
				}
				else if (cur->_key > key)
				{
					parent = cur;
					cur = cur->_left;
				}
				else
				{
					if (cur->_left == nullptr)
					{
						if (cur == _root)
						{
							_root = cur->_right;
						}
						else
						{
							if (parent->_right == cur)
							{
								parent->_right = cur->_right;
							}
							else
							{
								parent->_left = cur->_right;
							}
						}
					}
					else if (cur->_right == nullptr)
					{
						if (cur == _root)
						{
							_root = cur->_left;
						}
						else
						{
							if (parent->_right == cur)
							{
								parent->_right = cur->_left;
							}
							else
							{
								parent->_left = cur->_left;
							}
						}
					}
					else
					{
						Node* parent = cur;
						Node* leftmax = cur->_left;
						while (leftmax->_right)
						{
							parent = leftmax;
							leftmax = leftmax->_right;
						}

						swap(cur->_key, leftmax->_key);

						if (parent->_left == leftmax)
						{
							parent->_left = leftmax->_left;
						}
						else
						{
							parent->_right = leftmax->_left;
						}

						cur = leftmax;
					}

					delete cur;
					return true;
				}
			}
			return false;
		}

		void Inorder()
		{
			_Inorder(_root);
			cout << endl;
		}

		void FindR(const K& key)
		{
			return _FindR(_root, key);
		}

		bool InsertR(const K& key)
		{
			return _InsertR(_root, key);
		}

		bool EraseR(const K& key)
		{
			return _EraseR(_root, key);
		}

	private:

		Node* Copy(Node* root)
		{
			if (root == nullptr)
				return nullptr;

			Node* copyroot = new Node(root->_key);
			copyroot->_left = Copy(root->_left);
			copyroot->_right = Copy(root->_right);
			return copyroot;
		}

		void Destroy(Node* root)
		{
			if (root == nullptr)
				return;
			Destroy(root->_left);
			Destroy(root->_right);
			delete root;
			root = nullptr;
		}

		bool _EraseR(Node*& root, const K& key)
		{
			if (_root == nullptr)
				return false;

			if (root->_key < key)
			{
				return _EraseR(root->_right, key);
			}
			else if (root->_key > key)
			{
				return _EraseR(root->_left, key);
			}
			else
			{
				Node* del = root;

				if (root->_left == nullptr)
				{
					root = root->_right;
				}
				else if (root->_right == nullptr)
				{
					root = root->_left;
				}
				else
				{
					Node* leftMax = root->_left;
					while (leftMax->_right)
					{
						leftMax = leftMax->_right;
					}

					swap(root->_key, leftMax->_key);
					return _EraseR(root->_left, key);
				}

				delete del;
				return true;
			}	
		}

		bool _InsertR(Node*& root, const K& key)
		{
			if (root == nullptr)
			{
				root = new Node(key);
				return true;
			}

			if (root->_key < key)
			{
				return _InsertR(root->_right, key);
			}
			else if (root->_key > key)
			{
				return _InsertR(root->_left, key);
			}
			else
			{
				return false;
			}
		}

		bool _FindR(Node* root, const K& key)
		{
			if (root == nullptr)
				return false;

			if (root->_key < key)
			{
				return _FindR(root->_right, key);
			}
			else if (root->_key > key)
			{
				return _FindR(root->_left, key);
			}
			else
			{
				return true;
			}
		}
		void _Inorder(Node* root)
		{
			if (root == nullptr)
			{
				return;
			}

			_Inorder(root->_left);
			cout << root->_key << " ";
			_Inorder(root->_right);
		}
	private:
		Node* _root;
	};

	void TestBSTree1()
	{
		int a[] = { 1,2,3,4,7,5,8,6,9,12 };
		BSTree<int>t;
		for (auto e : a)
		{
			t.Insert(e);
		}

		t.Inorder();

		t.Erase(4);
		t.Inorder();

		t.Erase(6);
		t.Inorder();

		t.Erase(7);
		t.Inorder();

		t.Erase(3);
		t.Inorder();

		for (auto e : a)
		{
			t.EraseR(e);
		}
		t.Inorder();
	}

	void TestBSTree2()
	{
		int a[] = { 3,2,4,1,5,6,7,9,8 };
		BSTree<int>t;
		for (auto e : a)
		{
			t.InsertR(e);
		}

		BSTree<int>t1(t);

		t.Inorder();
		t1.Inorder();
	}
}

namespace key_value
{
	template<class K,class V>
	struct BSTreeNode
	{
		BSTreeNode<K, V>* _left;
		BSTreeNode<K, V>* _right;
		K _key;
		V _value;

		BSTreeNode(const K&key,const V&value)
			:_left(nullptr)
			,_right(nullptr)
			,_key(key)
			,_value(value)
		{}
	};

	template<class K,class V>
	class BSTree
	{
		typedef BSTreeNode<K, V>Node;
	public:
		BSTree()
			:_root(nullptr)
		{}

		void InOrder()
		{
			_InOrder(_root);
			cout << endl;
		}

		Node* FindR(const K& key)
		{
			return _FindR(_root, key);
		}

		bool InsertR(const K& key, const V& value)
		{
			return _InsertR(_root, key, value);
		}

		bool EraseR(const K& key)
		{
			return _EraseR(_root, key);
		}

	private:
		bool _EraseR(Node*& root, const K& key)
		{
			if (root == nullptr)
				return false;

			if (root->_key < key)
			{
				return _EraseR(root->_right, key);
			}

			else if (root->_key > key)
			{
				return _EraseR(root->_left, key);
			}
			else
			{
				Node* del = root;

				if (root->_left == nullptr)
				{
					root = root->_right;
				}
				else if (root->_right == nullptr)
				{
					root = root->_left;
				}
				else
				{
					Node* leftMax = root->_left;
					while (leftMax->_right)
					{
						leftMax = leftMax->_right;
					}

					swap(root->_key, leftMax->_key);

					return _EraseR(root->_left, key);
				}

				delete del;
				return true;
			}
		}

		bool _InsertR(Node*& root, const K& key, const V& value)
		{
			if (root == nullptr)
			{
				root = new Node(key, value);
				return true;
			}

			if (root->_key < key)
			{
				return _InsertR(root->_right, key, value);
			}
			else if (root->_key > key)
			{
				return _InsertR(root->_left, key, value);
			}
			else
			{
				return false;
			}
		}

		Node* _FindR(Node* root, const K& key)
		{
			if (root == nullptr)
				return nullptr;

			if (root->_key < key)
			{
				return _FindR(root->_right, key);
			}
			else if (root->_key > key)
			{
				return _FindR(root->_left, key);
			}
			else
			{
				return root;
			}
		}

		void _InOrder(Node* root)
		{
			if (root == NULL)
			{
				return;
			}

			_InOrder(root->_left);
			cout << root->_key << ":" << root->_value << endl;
			_InOrder(root->_right);
		}
	private:
		Node* _root;
	};

	void TestBSTree1()
	{
		BSTree<string, string>d;
		d.InsertR("insert", "²åÈë");
		d.InsertR("sort", "ÅÅÐò");
		d.InsertR("find", "²éÕÒ");
		d.InsertR("delete", "É¾³ý");

		string str;
		while (cin >> str)
		{
			BSTreeNode<string, string>* ret = d.FindR(str);
			if (ret)
			{
				cout << ret->_value << endl;
			}
			else
			{
				cout << "not find" << endl;
			}
		}
	}

	void TestBSTree2()
	{
		string arr[] = {"apple","banana","watermelon","apple","watermelon"};
		BSTree<string, int>countTree;
		for (auto& str : arr)
		{
			auto ret = countTree.FindR(str);
			if (ret == nullptr)
			{
				countTree.InsertR(str, 1);
			}
			else
			{
				ret->_value++;
			}
		}

		countTree.InOrder();
	}
}

