#ifndef CS2_STACK_HPP_
#define CS2_STACK_HPP_
////////////////////////////////////////////////////////////////////////////
//
// File: stack.hpp
//
// Programmer: Andrew Tennant
// Updated:     10/2017
//
//
//
//

#include <new>
#include <cassert>

////////////////////////////////////////////////////////////////////////////
//           
template<typename T> 
class node {
public:
  node ()           : next(0)           {};
  node (const T& x) : data(x), next (0) {};
  T        data;
  node<T> *next;
};


////////////////////////////////////////////////////////////////////////////
// CLASS INV:
//
//    
template <typename T>
class stack {
public:
              stack     ();
              stack     (const stack<T>&);
              ~stack    ();
    void      swap      (stack<T>&);
    stack<T>& operator= (stack<T>);

	bool      empty     () const;
	bool      full      () const;
	T         top       () const;
	T         pop       ();
	void      push      (const T&);

private:
	node<T>   *tos;
};

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
bool stack<T>::empty () const {
  return tos == 0;
}

// isFull                                                 
/////////                                                 
template <typename T>
bool stack<T>::full() const
{
  node<T> *temp = new node<T> ();

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
  assert(!full());
  node<T> *temp = new node<T>(item);
  temp->next = tos;
  tos = temp;
}

// pop                                                    
//////////                                                
template <typename T>
T stack<T>::pop () {
  assert(!empty());
  node<T> *temp = tos;
  T result = tos->data;
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



#endif

