#include <iostream>
#include "queue.h"
#include "infixtopostfix.h"

int main() {

  std::string infix;
  std::cout << "Enter an infix expression: ";
  getline(std::cin, infix);

  std::string postfix = infixToPostfix(infix);

  std::cout << "\nPostfix expression: " << postfix << std::endl;
  

Queue<int> Q;
Q.enqueue(1);
Q.enqueue(2);
Q.enqueue(3);
Q.enqueue(4);
Q.enqueue(5);

std::cout << "Front element: " << Q.peek() << std::endl;

std::cout << "Dequeue: " << Q.dequeue() << std::endl;
std::cout << "Dequeue: " << Q.dequeue() << std::endl;

std::cout << "Is queue empty? " << Q.is_empty() << std::endl;

std::cout << "Total elements in queue: " << Q.get_size() << std::endl;
  
}