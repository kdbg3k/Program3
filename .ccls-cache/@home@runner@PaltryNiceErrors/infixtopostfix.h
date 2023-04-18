#include <stack>
#include <string>
#include <iostream>


bool is_balanced(std::string expression);

std::string infixToPostfix(std::string s);

bool is_operator(char c);

int get_precedence(char c);