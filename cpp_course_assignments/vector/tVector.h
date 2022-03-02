#pragma once
using namespace std;

template <typename T> struct tVector
{
	int capacity{ 0 };
	int count{ 0 };
	T* data = nullptr;

	tVector () : data (new T[capacity])
	{
	}

	tVector (const tVector& other) : capacity (other.capacity), count (other.count)
	{
		if (data != nullptr)
		{
			delete[] data;
		}
		data = new T[capacity];

		for (int i = 0; i < capacity; ++i)
		{
			data[i] = other.data[i];
		}
	}

	tVector& operator=(const tVector& other)
	{
		if (&other != this)
		{
			capacity = other.capacity;
			count = other.count;
			data = other.data;
		}

		return *this;
	}

	~tVector ()
	{
		delete[] data;
	}

	T& operator[](int i)
	{
		if (i < 0 || i > count)
		{
			try
			{
				throw out_of_range ("Index was out of bounds of the vector, bro :(");
			}
			catch (const out_of_range& error)
			{
				cout << "Out of range exception:" << error.what () << endl;
			}
		}

		return *(data + i);
	}

	void custom_add (T add)
	{
		if (count == capacity)
		{
			set_capacity (capacity + 5);
		}

		data[count] = add;
		count++;
	}

	void set_capacity (const int new_capacity)
	{
		T* old_data = data;
		data = new T[new_capacity];
		if (old_data)
		{
			for(int i = 0; i < capacity; ++i)
			{
				data[i] = old_data[i];
			}
			
			delete[] old_data;
		}

		memmove (&capacity, &new_capacity, sizeof(int));
	}

	void custom_remove (T value)
	{
		const int index = find(value);

		if (index == -1)
			return;

		for (int i = index + 1; i < count; ++i)
		{
			data[i - 1] = data[i];
		}

		count--;
	}

	int get_size () const
	{
		return count;
	}

private:
	int find(T value)
	{
		for (int i = 0; i < count; ++i)
		{
			if (data[i] == value)
			{
				return i;
			}

			if (i == count - 1 && data[i] != value)
			{
				std::cout << "Value was not found inside the vector." << std::endl;
				return -1;
			}
		}

		return -1;
	}
};