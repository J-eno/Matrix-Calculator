//Implementation of the methods for the Matrix class

#include "Matrix.h"

Matrix::Matrix(int row, int col)
{
  m_head = NULL;
  m_tail = NULL;

  m_row = row;
  m_col = col;

  int counter = 0;

  while(counter < m_row)
    {
      cout << "Row " << counter + 1 << ":" << endl;
      InsertNode();
      counter++;
    }

  PrintMatrix();
}

Matrix::~Matrix()
{}

Node* Matrix::CreateNode()
{
  //Create a new node
  Node* newNode = new Node;
  
  //set it's pointers to null
  newNode->m_prev = NULL;
  newNode->m_next = NULL;

  //populate columns
  int entry;
  for(int i=0; i < m_col; i++)
    {
      cout << "Enter number " << i+1 << ": ";
      cin >> entry;
      newNode->m_row.push_back(entry);
    }
  
  return newNode;
}

void Matrix::InsertNode()
{
  Node *newNode = CreateNode();
  //if m_head isn't pointing to anything
  if(m_head == NULL)
    {
      //set head and tail to the new node
      m_head = newNode;
      m_tail = newNode;
    }
  else
    {
      //have the current tail point to the new node
      m_tail->m_next = newNode;
      //have the new node be the new tail
      m_tail = newNode;
    }
}

void Matrix::PrintMatrix()
{
  cout << "Your matrix is:" << endl;
  //Set iterator to the head
  Node *curr = m_head;

  while(curr != NULL)
    {
      //print each item in our vector
      for(int i=0; i < m_col; i++)
	{
	  cout << curr->m_row[i] << " ";
	}
      cout << endl;
      //Go to next node(row)
      curr = curr->m_next;
    }
  
}
