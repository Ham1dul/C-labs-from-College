
#include "Heap.h"

template < typename DataType, typename KeyType, typename Comparator >
Heap<DataType,KeyType,Comparator>::Heap ( int maxNumber = DEFAULT_MAX_HEAP_SIZE ):maxSize(maxNumber), size(0)
{
	dataItems = new DataType[maxSize];
}

template < typename DataType, typename KeyType, typename Comparator >
Heap<DataType,KeyType,Comparator>::Heap ( const Heap& other ): maxSize(other.maxSize),size(other.size)
{
	dataItems = new DataType[maxSize];
	for (int i = 0; i < size; i++)
	{
		dataItems[i] = other.dataItems[i];
	}
}

template < typename DataType, typename KeyType, typename Comparator >
Heap<DataType,KeyType,Comparator>& Heap<DataType,KeyType,Comparator>::operator= ( const Heap& other )
{
	if (this != other)
	{
		dataItems = new DataType[maxSize];
		for (int i = 0; i < size; i++)
		{
			dataItems[i] = other.dataItems[i];
		}
	}
	return this;
}

template < typename DataType, typename KeyType, typename Comparator >
Heap<DataType,KeyType,Comparator>::~Heap ()
{
	delete[] dataItems;
}

template < typename DataType, typename KeyType, typename Comparator >
void Heap<DataType,KeyType,Comparator>::insert ( const DataType &newDataItem )
    throw ( logic_error )
{
	if (isFull())
		throw logic_error("heap is full");
		int j, pj;
		for (j = size, pj = (j - 1) / 2; j > 0 && comparator(newDataItem.getPriority(), dataItems[pj].getPriority()); j = pj, pj = (j - 1) / 2)
		{
			dataItems[j] = dataItems[pj];
		}
		dataItems[j] = newDataItem;
		size++;
}

template < typename DataType, typename KeyType, typename Comparator >
DataType Heap<DataType,KeyType,Comparator>::remove () throw ( logic_error )
{
	if (isEmpty())
		throw logic_error("heap is empty");
	DataType temp = dataItems[size-1];
	dataItems[0] = dataItems[size - 1];
	DataType place;
	int j = 0;
	bool flag = true;
	int r = 2 * j + 2;
	int l = 2 * j + 1;
	while (flag)
	{
		
		if (comparator(dataItems[r].getPriority(), dataItems[j].getPriority()))
		{
			place = dataItems[j];
			dataItems[j] = dataItems[r];
			dataItems[r] = place;
			j = r;
			r = 2 * j + 2;
		}
		else if (comparator(dataItems[l].getPriority(), dataItems[j].getPriority()))
		{
			place = dataItems[j];
			dataItems[j] = dataItems[l];
			dataItems[l] = place;
			j = l;
			l = 2 * j + 1;
		}
		else
			flag = false;
	}
	size--;
	return temp;
}

template<typename DataType, typename KeyType, typename Comparator>
void Heap<DataType, KeyType, Comparator>::writeLevels() const
{
	if (isEmpty())
		cout << "heap is empty" << endl;
	int i, a = 2;
	cout << dataItems[0].getPriority() << endl;
	for (i = 1; i < size; i++)
	{
		cout << dataItems[i].getPriority() << " ";
		if (i == a)
		{
			i = a;
			a = a * 2;
			cout << endl;
		}
	}
}


template < typename DataType, typename KeyType, typename Comparator >
void Heap<DataType,KeyType,Comparator>::clear ()
{
	size = 0;
}

template < typename DataType, typename KeyType, typename Comparator >
bool Heap<DataType,KeyType,Comparator>::isEmpty () const
{
	return size == 0;
}

template < typename DataType, typename KeyType, typename Comparator >
bool Heap<DataType,KeyType,Comparator>::isFull () const
{
	return size == maxSize;
}

#include "show11.cpp"