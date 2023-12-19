#pragma once
#include"RBTree.h"

namespace hyx
{
	template<class K>
	class set
	{
		struct Setlkeyoft
		{
			const K& operator()(const K& key)
			{
				return key;
			}
		};
	public:
		typedef typename RBTree<K, K, Setlkeyoft>::const_iterator iterator;
		typedef typename RBTree<K, K, Setlkeyoft>::const_iterator const_iterator;

		const_iterator begin()const
		{
			return _t.begin();
		}

		const_iterator end()const
		{
			return _t.end();
		}
		pair<iterator, bool> insert(const K& key)
		{
			pair<typename RBTree<K, K, Setlkeyoft>::iterator, bool>ret = _t.Insert(key);
			return pair<iterator, bool>(ret.first, ret.second);
		}
	private:
		RBTree<K, K, Setlkeyoft>_t;
	};
}