#include <iostream>
#include <string>
#include "Linked_list.hpp"

using namespace std ;

int main() {
  Linked_list*head = new Linked_list("foo");
  Linked_list*n1 , *n2 ;
  n1 = new Linked_list("bar");
  n2 = new Linked_list("bim");
  head->insert_at_index(1 , n1);
  head-> insert_at_index(2, n2);
  string n1_str = head->next()->get();
  string n2_str = head->next()-> get();
  cout << n1_str << endl ;
  cout << n2_str << endl ;
	return 0;
}
