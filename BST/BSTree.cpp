//By Hamidul Islam
#include "BSTree.h"

template <typename DataType, class KeyType>
BSTree<DataType, KeyType>::BSTreeNode::BSTreeNode ( const DataType &nodeDataItem, BSTreeNode *leftPtr, BSTreeNode *rightPtr ): dataItem(nodeDataItem), left(leftPtr), right(rightPtr)
{
}

template < typename DataType, class KeyType >
BSTree<DataType, KeyType>::BSTree (): root(0)
{
	root = NULL;
}

template < typename DataType, class KeyType >
BSTree<DataType, KeyType>::BSTree ( const BSTree<DataType,KeyType>& other ): root(nullptr)
{
	root = clone(other.root, root);
}

template<typename DataType, class KeyType>
void BSTree<DataType, KeyType>::clone(BSTreeNode * p, BSTreeNode *& t)
{
	if (p == NULL)
		t = NULL;
	else
	{
		t = new ExprTreeNode(p->dataItem, 0, 0);
		clone(p->left, t->left);
		clone(p->right, t->right);
	}
}


template < typename DataType, class KeyType >
BSTree<DataType, KeyType>& BSTree<DataType, KeyType>:: operator= ( const BSTree<DataType,KeyType>& other )
{
	if (this != &other)
	{
		clear();
		clone(other.root, root);
	}
	return *this;
}

template < typename DataType, class KeyType >
BSTree<DataType, KeyType>::~BSTree ()
{
	clear();
}

template < typename DataType, class KeyType >
void BSTree<DataType, KeyType>::insert ( const DataType& newDataItem )
{
	insertHelper(root, newDataItem);
}

template < typename DataType, class KeyType >
void BSTree<DataType, KeyType>::insertHelper(BSTreeNode *&p,const DataType& newDataItem)
{
	if (p == 0)
		p = new BSTreeNode(newDataItem, 0, 0);
	else if (p->dataItem.getKey() > newDataItem.getKey()) //search left
		insertHelper(p->left, newDataItem);
	else if (p->dataItem.getKey() < newDataItem.getKey()) //search right
		insertHelper(p->right, newDataItem);
	else
		p->dataItem = newDataItem;
}

template < typename DataType, class KeyType >
bool BSTree<DataType, KeyType>::retrieve ( const KeyType& searchKey, DataType& searchDataItem ) const
{
	return retrieveHelper(root,searchKey,searchDataItem);
}
template < typename DataType, class KeyType >
bool BSTree<DataType, KeyType>::retrieveHelper(BSTreeNode *p,const KeyType& searchKey, DataType& searchDataItem) const
{
	bool result;

	if (p == 0)
		result = false;
	else if (searchKey < p->dataItem.getKey()) //search left
		result = retrieveHelper(p->left, searchKey, searchDataItem);
	else if (searchKey >  p->dataItem.getKey()) //search right
		result = retrieveHelper(p->right, searchKey, searchDataItem);
	else
	{
		searchDataItem = p->dataItem;
		result = true;
	}
	return result;
}

template < typename DataType, class KeyType >
bool BSTree<DataType, KeyType>::remove ( const KeyType& deleteKey )
{
	return removeHelper(root,deleteKey);
}

template < typename DataType, class KeyType >
bool BSTree<DataType, KeyType>::removeHelper(BSTreeNode *&p,const KeyType& deleteKey)
{
	bool result;
	if (p == NULL)
		result = false;
	else if (deleteKey < p->dataItem.getKey()) //search left
			result = removeHelper(p->left, deleteKey);
	else if (deleteKey >  p->dataItem.getKey()) //search right
			result = removeHelper(p->right, deleteKey);
	else
		{
		if (p->left == NULL && p->right == NULL)
		{
			delete p;
			p = NULL;
			result = true;
		}
		else if (p->left ==NULL)
		{
			BSTreeNode *temp = p;
			p = p->right;
			delete temp;
			result = true;
		}
		else if (p->right == NULL)
		{
			BSTreeNode *temp = p;
			p = p->left;
			delete temp;
			result = true;
		}
		else
		{
			BSTreeNode *temp = p->right;
			min(temp);
			p->dataItem = temp->dataItem;
			removeHelper(p->right, temp->dataItem.getKey());
			result = true;
		}
		}
	return result;
}

template<typename DataType, class KeyType>
void BSTree<DataType, KeyType>::min(BSTreeNode *& p)
{ 
	while (p->left != NULL)
	{
		p = p->left;
	}
}

template < typename DataType, class KeyType >
void BSTree<DataType, KeyType>::writeKeys () const
{
	writeHelper(root);
}

template<typename DataType, class KeyType>
void BSTree<DataType, KeyType>::writeHelper(BSTreeNode * p) const
{
	if (root == NULL)
	{
		cout << "empty tree" << endl;
	}
	if (p != NULL)
	{
		writeHelper(p->left);
		cout << p->dataItem.getKey() << " ";
		writeHelper(p->right);
	}
}
template < typename DataType, class KeyType >
void BSTree<DataType, KeyType>::clear ()
{
	makeEmpty(root);
}
template<typename DataType, class KeyType>
void BSTree<DataType, KeyType>::makeEmpty(BSTreeNode *& p)
{
	if (p != NULL)
	{
		makeEmpty(p->left);
		makeEmpty(p->right);
		delete p;
	}
	p = NULL;
}

template < typename DataType, class KeyType >
bool BSTree<DataType, KeyType>::isEmpty () const
{
	return (root == NULL);
}

template < typename DataType, class KeyType >
int BSTree<DataType, KeyType>::getHeight () const
{
	return getHeightHelper(root);
}

template<typename DataType, class KeyType>
int BSTree<DataType, KeyType>::getHeightHelper(BSTreeNode * p) const
{
	
	if (p == NULL)
		return 0;
	else
	{
		int l = getHeightHelper(p->left);
		int r = getHeightHelper(p->right);
		if (l > r)
			return (++l);
		else 
			return (++r);
	}
}

template < typename DataType, class KeyType >
int BSTree<DataType, KeyType>::getCount() const
{
	
	return getCountHelper(root);
}

template<typename DataType, class KeyType>
int BSTree<DataType, KeyType>::getCountHelper(BSTreeNode * p) const
{
	int  i = 1;
	if (p != NULL)
	{
		if (p->left != NULL)
			i += getCountHelper(p->left);
		if (p->right != NULL)
			i += getCountHelper(p->right);
		return i;
	}
	else
		return 0;
}

template < typename DataType, class KeyType >
void BSTree<DataType, KeyType>::writeLessThan(const KeyType& searchKey) const
{
	writeLessHelper(root, searchKey);
}

template<typename DataType, class KeyType>
void BSTree<DataType, KeyType>::writeLessHelper(BSTreeNode * p, const KeyType & searchKey) const
{
	if (searchKey < p->dataItem.getKey()) //if you go left just go left and leave printing to else function
	{
		writeLessHelper(p->left, searchKey);
	}
	else if (searchKey > p->dataItem.getKey()) //if you go right print the root and the left subtree before going right
	{//search right
		cout << p->dataItem.getKey() << " ";
		writeHelper(p->left); //i use my writekeyhelper to print
		writeLessHelper(p->right, searchKey);
	}
	else writeHelper(p->left); //i used my right key helper to print
}



#include "show9.cpp"