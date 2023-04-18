#pragma once
#include <list>

template <typename item_type>
struct Node {
  item_type data;
  Node* next;
};

template <typename item_type>
class Queue {
private:
  Node<item_type>* front;
  Node<item_type>* rear;
  int size;
public:
  Queue(); //creates empty queue
  void enqueue (item_type item); //inserts new element at end of queue
  item_type dequeue(); //removes item from front of queue and returns it
  item_type peek(); //returns the item at the front of the queue
  bool is_empty(); //checks is queue is empty
  int get_size();
};