// stack.cpp
//
// Function definitions for stack class
//
// Andrew Tennant


#include "stack.hpp"

// Default Constructor
//////////////////////
template <typename T>
stack<T>::stack() {
  tos = 0;
}

// Copy Constructor
//////////////////////
template <typename T>
stack<T>::stack (const stack<T>& actual) {
  node<T> *temp = actual.tos,
          *bottom = 0;
  tos = 0;
  while (temp != 0){
    if (tos == 0){
      tos = new node<T>(temp->data);
      bottom = tos;
    }else{
      bottom->next = new node<T>(temp->data);
      bottom = bottom->next;
    }
    temp = temp->next;
  }
}

// Destructor
/////////////
template <typename T>
stack<T>::~stack () {
  while (tos != 0) {
    node<T> *temp;
    temp = tos;
    tos = tos->next;
    delete temp;
  }
}

// Swap
///////
template <typename T>
void stack<T>::swap (stack<T>& rhs) {
  node<T> * temp = tos;
  tos = rhs.tos;
  rhs.tos = temp;
}

// operator =
/////////////
template <typename T>
stack<T>& stack<T>::operator= (stack<T> rhs) {
  swap(rhs);
  return *this;
}

// isEmpty
/////////
template <typename T>
bool stack<T>::empty () {
  return tos == 0;
}

// isFull
/////////
template <typename T>
bool Stack<T>::isFull() const
{
  Node<T> *temp = new() Node<T> ();

  if (temp == 0) {
    return true;
  }

  delete temp;
  return false;
}

// push
////////////
template <typename T>
void stack<T>::push (const T& item) {
  assert(!isFull());
  node<T> *temp = new node<T>(item);
  temp->next = tos;
  tos = temp;
}

// pop
//////////
template <typename T>
T stack<T>::pop () {
  assert(!isEmpty());
  node<T> *temp = tos;
  T result = tos->next;
  tos = tos->next;
  delete temp;
  return result;
}

// top
//////////
template <typename T>
T stack<T>::top () const {
  return tos->data;
}
