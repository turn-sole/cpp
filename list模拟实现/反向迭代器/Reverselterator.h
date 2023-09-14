#pragma once

namespace bit
{
	// ÊÊÅäÆ÷ -- ¸´ÓÃ
	template<class Iterator, class Ref, class Ptr>
	struct Reverse_iterator
	{
		typedef ReverseIterator<Iterator, Ref, Ptr>ri;
		Iterator _it;

		Reverse_iterator(Iterator it)
			:_it(it)
		{}

		Ref operator*()
		{
			Iterator tmp = _it;
			return *(--tmp);
		}

		Ref operator->()
		{
			return &(operator*());
		}

		ri& operator++()
		{
			--_it;
			return *this;
		}

		ri& operator--()
		{
			++_it;
			return *this;
		}

		bool operator!=(const ri& s)const
		{
			return _it != s._it;
		}
	};
}