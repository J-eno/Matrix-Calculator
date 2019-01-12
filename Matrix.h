#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
#include <iostream>

using namespace std;

//Each 'Node' functions as a row in our matrix
struct Node{
  Node *m_prev;
  Node *m_next;
  //holds the actual row in the matrix
  vector<int> m_row;
  //holds the position of the leading entry in the row
  int leadingEntry;

};

class Matrix{
public:
  //default constructor
  Matrix();

  //overloaded constuctor
  Matrix(int row, int col);

  //destructor
  ~Matrix();

  Node* CreateNode();

  //Inserts a node at the end 
  void InsertNode();

  void PrintMatrix();
  
private:
  Node *m_head;
  Node *m_tail;
  int m_row;
  int m_col;
};

#endif
