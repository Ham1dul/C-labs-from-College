
#include "HashTable.h"

template <typename DataType, typename KeyType>
HashTable<DataType, KeyType>::HashTable(int initTableSize) : tableSize(initTableSize)
{
	dataTable = new BSTree<DataType, KeyType>[tableSize];
}

template <typename DataType, typename KeyType>
HashTable<DataType, KeyType>::HashTable(const HashTable& other)
{
	copyTable(other);
}

template <typename DataType, typename KeyType>
void HashTable<DataType, KeyType>::copyTable(const HashTable& source)
{
	tableSize = source.tableSize;
	for (int i = 0; i < tableSize; i++)
	{
		dataTable[i] = source.dataTable[i];
	}
}


template <typename DataType, typename KeyType>
HashTable<DataType,KeyType>& HashTable<DataType, KeyType>::operator=(const HashTable& other)
{
	if (this != other)
	{
		delete[] dataTable;
		copyTable(other);
	}
	return this;
}

template <typename DataType, typename KeyType>
HashTable<DataType, KeyType>::~HashTable()
{
	delete[] dataTable;
}

template <typename DataType, typename KeyType>
void HashTable<DataType, KeyType>::insert(const DataType& newDataItem)
{
	unsigned int loc = DataType::hash(newDataItem.getKey()) % tableSize;
	dataTable[loc].insert(newDataItem);
}

template <typename DataType, typename KeyType>
bool HashTable<DataType, KeyType>::remove(const KeyType& deleteKey)
{
	unsigned int loc = DataType::hash(deleteKey) % tableSize;
	return dataTable[loc].remove(deleteKey);
}

template <typename DataType, typename KeyType>
bool HashTable<DataType, KeyType>::retrieve(const KeyType& searchKey, DataType& returnItem) const
{
	unsigned int loc = DataType::hash(searchKey) % tableSize;
	return dataTable[loc].retrieve(searchKey, returnItem);
}

template <typename DataType, typename KeyType>
void HashTable<DataType, KeyType>::clear()
{
}

template <typename DataType, typename KeyType>
bool HashTable<DataType, KeyType>::isEmpty() const
{
	return true;
}

#include "show10.cpp"

template <typename DataType, typename KeyType>
double HashTable<DataType, KeyType>::standardDeviation() const
{
}

