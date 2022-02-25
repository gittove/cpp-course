#pragma once

template <typename T> struct tVector
{
	int capacity{ 0 };
	int count{ 0 };
	T* end;
	T* data = nullptr;

	tVector ()
	{
		data = new T[capacity];
	}

	~tVector ()
	{
		delete[] data;
	}

	T& operator[](int i)
	{
		if (i >= count)
		{
			return *data;
		}
		return *(data + i);
	}

	template <typename T> void custom_add (T add)
	{
		if (count == capacity)
		{
			set_capacity (capacity + 1);
		}

		data[count] = add;
		count++;
	}

	void set_capacity (int newCapacity)
	{
		int* oldData = data;
		data = new int[newCapacity];
		if (oldData)
		{
			memcpy (data, oldData, capacity * sizeof (T));
			delete[] oldData;
		}

		capacity = newCapacity;
	}

	void custom_remove (int value)
	{
		int index = -1;

		for (int i = 0; i < count; i++)
		{
			if (data[i] == value)
			{
				index = i;
				break;
			}

			if (i == count - 1 && data[i] != value)
			{
				std::cout << "Value was not found inside the vector." << std::endl;
			}
		}

		if (index == -1)
			return;

		for (int i = index + 1; i < count; i++)
		{
			data[i - 1] = data[i];
		}

		count--;
	}

	int* get_size ()
	{
		return &count;
	}
};