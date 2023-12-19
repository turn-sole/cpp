#pragma once
#include"RBTree.h"

namespace hyx
{
	template<class K,class V>
	class map
	{
		struct Mapkeyoft
		{
			const K& operator()(const pair<K, V>& kv)
			{
				return kv.first;
			}
		};
	public:
		typedef typename RBTree<K, pair<const K, V>, Mapkeyoft>::iterator iterator;
		typedef typename RBTree<K, pair<const K, V>, Mapkeyoft>::const_iterator const_iterator;
		
		iterator begin()
		{
			return _t.begin();
		}

		iterator end()
		{
			return _t.end();
		}

		const_iterator begin()const
		{
			return _t.begin();
		}

		const_iterator end()const
		{
			return _t.begin();
		}

		V& operator()(const K& key)
		{
			pair<iterator, bool>ret = insert(make_pair(key, V()));
			return ret.first->second;
		}

		pair<iterator, bool> insert(const pair<K, V>& kv)
		{
			return _t.Insert(kv);
		}
	private:
		RBTree<K, pair<const K, V>Mapkeyoft> _t;
	};
}