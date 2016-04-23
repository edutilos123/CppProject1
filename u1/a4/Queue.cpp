#include "Queue.hpp"


//Queue::

 void Queue::push(string _name) {
   unsigned int _size = node-> size();
   if(_size==0) {
	   node-> insert_at_index(0, new Linked_list(_name));
   } else {
	   node-> insert_at_index(_size-1 , new Linked_list(_name));
   }
 }

 string Queue::get_name(Linked_list* node) {
	// unsigned int _size = node->size();
	 string name("");
	 Linked_list*temp = node;
	 for( ; temp->next()!= NULL ; temp = temp->next()) ;
	 return temp->get();
 }


 string Queue::pop() {
  unsigned int _size = node->size();
  if(_size==0) {
	  cerr << "Warteschlange ist leer!" << endl ;
	  return "" ;
  } else {
     string name = get_name(node);
     node->remove_at_index(_size-1);
     return name;
  }
 }
 bool Queue::has_next() {
 unsigned int _size =  node->size();
   return _size > 0 ;
 }

 //-> Queue
