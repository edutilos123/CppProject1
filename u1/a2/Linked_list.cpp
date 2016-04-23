#include "Linked_list.hpp"

using std::cout ;
using std::cerr ;
using std::endl ;

//Linked_list::
	Linked_list::Linked_list(string name):
	  _name(name),  _next(NULL)
	{

	}
    void Linked_list::set(string name) {
      this-> _name = name;
    }
    string Linked_list::get() {
        return this-> _name;
    }
    Linked_list* Linked_list::next() {
      return this-> _next ;
    }

    Linked_list* Linked_list::insert_at_index(unsigned int index , Linked_list* node) {
    	unsigned int _size = size();
    	if(index >= _size) {
          cerr << "Einfügen hinter das Ende der Liste" << endl;
          return NULL ;
    	}
    	if(node->next() != NULL) {
    		cerr << "Der einzufügende Knoten ist kein einzelner Knoten, sondern selbst eine Liste mit mehreren Elementen" << endl ;
    		return NULL ;
    	}
        Linked_list* head = this ;
        Linked_list* temp = this, *temp2 ;
        unsigned int counter = 0 ;
        while(counter< index) {
        	temp2 = temp ;
        	temp = temp-> next();
            counter++;
        }

        if(temp == head) {
        	node-> _next = temp ;
        	return node ;
        } else {
        	temp2-> _next = node ;
        	node-> _next = temp ;
        	return head ;
        }
    	return NULL ;
    }

    unsigned int Linked_list::size() {
     unsigned int counter = 0 ;
     for(Linked_list* temp = this; temp!= NULL; temp= temp->next()) {
    	 counter++;
     }
     return counter ;

    }
      Linked_list* Linked_list::remove_at_index(unsigned int index) {
          unsigned int _size = size();
          if(index >= _size) {
        	  cerr << "Es existiert kein " << index <<"-ter Knoten" << endl;
        	  return this ;
          }

          Linked_list* head = this ;
          if(index == 0) {
        	  Linked_list* temp = head;
        	  head = head->_next;
        	 // this =  head ;
        	  return temp ;
          } else {
             unsigned int counter = 0 ;
             Linked_list*temp = this, *temp2 ;
             while(counter <index) {
            	 temp2 = temp;
            	 temp = temp-> _next;
            	 counter ++;
             }
             temp2-> _next = temp-> _next ;
             temp = NULL ;
             return head ;
          }
      }
    //-> Linked_list
