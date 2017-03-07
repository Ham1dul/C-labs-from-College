//--------------------------------------------------------------------
//
//  Laboratory 12                                    WeightedGraph.cpp
//
//--------------------------------------------------------------------
//programmed by hamidul islam
#ifndef WEIGHTEDGRAPH_CPP
#define WEIGHTEDGRAPH_CPP

using namespace std;

#include "WeightedGraph.h"
#include "config.h"


//--------------------------------------------------------------------

WeightedGraph::WeightedGraph(int maxNumber) : maxSize(maxNumber), size(0)

// Creates an empty graph. Allocates enough memory for maxNumber
// vertices (defaults to defMaxGraphSize).
{ 
	vertexList = new Vertex[maxSize];
	adjMatrix = new int[maxSize * maxSize];
}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

WeightedGraph::WeightedGraph(const WeightedGraph& other) : maxSize(other.maxSize), size(other.size)

// Creates an empty graph. Allocates enough memory for maxNumber
// vertices (defaults to defMaxGraphSize).
{
	vertexList = new Vertex[maxSize];
	adjMatrix = new int[maxSize * maxSize];
	for (int i = 0; i < size; i++)
	{
		vertexList[i] = other.vertexList[i];
	}
	for (int row = 0; row < size; row++)
	{
		for (int col = 0; col < size; col++)
		{
			adjMatrix[maxSize*row + col] = other.adjMatrix[maxSize*row + col];
		}
	}
}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

WeightedGraph& WeightedGraph:: operator= ( const WeightedGraph& other )

// Copies from another WeightedGraph. 
{
	
		vertexList = new Vertex[maxSize];
		adjMatrix = new int[maxSize * maxSize];
		for (int i = 0; i < size; i++)
		{
			vertexList[i] = other.vertexList[i];
		}
		for (int row = 0; row < size; row++)
		{
			for (int col = 0; col < size; col++)
			{
				adjMatrix[maxSize*row + col] = other.adjMatrix[maxSize*row + col];
			}
		}
	return *this;
}

//--------------------------------------------------------------------

WeightedGraph:: ~WeightedGraph ()

// Frees the memory used by a graph.
{
	delete[] vertexList;
	delete[] adjMatrix;
}

//--------------------------------------------------------------------

void WeightedGraph:: insertVertex ( const Vertex& newVertex ) throw ( logic_error )

// Inserts newVertex into a graph. If a vertex with the same label
// as newVertex already exists in the graph, then updates that
// vertex's data with newVertex's data.
{
	if (isFull())
		throw logic_error("the graph is full");
	int pos;
	pos = getIndex(newVertex.getLabel());
	if (pos == size)
	{
		size++;
		for (int i = 0; i < size; i++)
		{
			//setEdge(int row, int col, int wt);
			setEdge(size - 1, i, INFINITE_EDGE_WT);
			setEdge(i, size - 1, INFINITE_EDGE_WT);
		}
	}
}

//--------------------------------------------------------------------

void WeightedGraph:: insertEdge ( const string& v1, const string& v2, int wt )
    throw ( logic_error )

// Insert an edge with the specified weight between vertices
// v1 and v2.
//complete this, check if ther eis E,F,26, check using index size to see if it is in the list
{
	int indexV1 = getIndex(v1);
	int indexV2 = getIndex(v2);

	if (indexV1 >= size)
		throw logic_error("v1 is out of range");
	if (indexV2 >= size)
		throw logic_error("v2 is out of range");


	setEdge(indexV1, indexV2, wt);
	setEdge(indexV2, indexV1, wt);
}

//--------------------------------------------------------------------

bool WeightedGraph:: retrieveVertex ( const string& v, Vertex &vData ) const

// Searches a graph for vertex v. If the vertex is found, then copies
// the vertex data to vData and returns 1. Otherwise, returns 0 with
// vData undefined. check list and return
{
	bool flag = false;
	for (int i = 0; i < size; i++)
	{
		if (vertexList[i].getLabel() == v)
		{
			vData.setLabel(v);
			flag = true;
		}
	}
	return flag;
}

//--------------------------------------------------------------------

bool WeightedGraph:: getEdgeWeight ( const string& v1, const string& v2, int &wt ) const
    throw ( logic_error )

// If there is an edge connecting vertices v1 and v2, then returns 1
// with wt returning the weight of the edge. Otherwise, returns 0
// with wt undefined.
{
	int indexV1 = getIndex(v1);
	int indexV2 = getIndex(v2);

	if (indexV1 >= size)
		throw logic_error("v1 is out of range");
	if (indexV2 >= size)
		throw logic_error("v2 is out of range");
	
	if (getEdge(indexV1, indexV2) != 0)
	{
		return true;
	}
	if (getEdge(indexV2, indexV1) != 0)
	{
		return true;
	} 
	return false;
}

//--------------------------------------------------------------------

void WeightedGraph:: removeVertex ( const string& v ) throw ( logic_error )

// Removes vertex v from a graph.
{
	string temp;
	for (int i = 0; i < size; i++)
	{
		if (vertexList[i].getLabel() == v)
		{
			temp = vertexList[size-1].getLabel(); //create temp string for last entry
			vertexList[size-1] = vertexList[i]; // set item to be delelted to the last slot
			vertexList[i].setLabel(temp); // set i as the item in last slot
			size--; //decrease size
		}
	}
}

//--------------------------------------------------------------------

void WeightedGraph:: removeEdge ( const string& v1, const string& v2 ) throw ( logic_error )

// Removes the edge between vertices v1 and v2 from a graph.

{
	int indexV1 = getIndex(v1);
	int indexV2 = getIndex(v2);

	if (indexV1 >= size)
		throw logic_error("v1 is out of range");
	if (indexV2 >= size)
		throw logic_error("v2 is out of range");

	setEdge(indexV1, indexV2, INFINITE_EDGE_WT);
	setEdge(indexV2, indexV1, INFINITE_EDGE_WT);
}

//--------------------------------------------------------------------

void WeightedGraph:: clear ()

// Removes all the vertices and edges from a graph.

{ 
	size = 0;
}

//--------------------------------------------------------------------

bool WeightedGraph:: isEmpty () const

// Returns 1 if a graph is empty. Otherwise, returns 0.

{
	return size==0;
}

//--------------------------------------------------------------------

bool WeightedGraph:: isFull () const

// Returns 1 if a graph is full. Otherwise, returns 0.

{
	return size == maxSize;
}

//--------------------------------------------------------------------

void WeightedGraph:: showStructure () const

// Outputs a graph's vertex list and adjacency matrix. This operation
// is intended for testing/debugging purposes only.

{
    if ( size == 0 ) {
       cout << "Empty graph" << endl;
    } else {
       cout << endl << "Vertex list : " << endl;
       for ( int row = 0 ; row < size ; row++ ) {
           cout << row << '\t' << vertexList[row].getLabel();
#if LAB12_TEST2
	   cout << '\t' << vertexList[row].getColor();
#endif
	   cout << endl;
       }

       cout << endl << "Edge matrix : " << endl << '\t';
       for ( int col = 0 ; col < size ; col++ )
           cout << col << '\t';
       cout << endl;
       for ( int row = 0 ; row < size ; row++ )
       {
           cout << row << '\t';
           for ( int col = 0 ; col < size ; col++ )
           {
               int wt = getEdge(row,col);
               if ( wt == INFINITE_EDGE_WT )
                  cout << "- \t";
               else
                  cout << wt << '\t';
           }
           cout << endl;
       }
    }
}




//--------------------------------------------------------------------
//
//  Facilitator functions
//

int WeightedGraph:: getIndex ( const string& v ) const

// Returns the adjacency matrix index for vertex v. Returns size if
// the vertex does not exist.

{
	int i;
	for (i = 0; i < size; i++)
	{
		if (vertexList[i].getLabel() == v)
			break;
	}

	
	return i;
}
       
//--------------------------------------------------------------------

int WeightedGraph:: getEdge ( int row, int col ) const

// Gets adjMatrix[row][col].

{
	int wt;
	wt = adjMatrix[maxSize*row + col];
	return wt;
}

void WeightedGraph:: setEdge ( int row, int col, int wt )

// sets adjMatrix[row][col].

{
	adjMatrix[maxSize*row + col] = wt;
}


#endif