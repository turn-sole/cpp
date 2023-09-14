#pragma once

#include<assert.h>

#include"Reverselterator.h"

namespace hyx
{
	template<class T>
	class vector
	{
	public:
		typedef T* iterator;
		typedef const T* const_iterator;

		typedef ReverseIterator<iterator, T&, T*>reverse_iterator;
		typedef ReverseIterator<const_iterator, const T&, const T*>const_reverse_iterator;

		reverse_iterator rebegin()
		{
			return reverse_iterator(end());
		}

		reverse_iterator rend()
		{
			return reverse_iterator(begin());
		}

		iterator begin()
		{
			return _start;
		}

		iterator end()
		{
			return _finish;
		}

	private:
		iterator _start = nullptr;
		iterator _finish = nullptr;
		iterator _endofstorage = nullptr;
	};
}