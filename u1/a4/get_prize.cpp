#include "get_prize.hpp"
unsigned int get_prize(unsigned int whole , Queue q, string runner)  {


  int counter = 0 , place = -1 ;
  while(q.has_next()) {
	  string _name = q.pop();
	  counter++;
	  if(_name == runner) {
		  place = counter ;
		  break;
	  }
  }


  unsigned int res = 0 ;
   switch(place) {
   case 1: res = whole ;
   break;
   case 2: res = whole/2 ;
   break;
   case 3: res = whole/4 ;
   break;
   default:
	   res = 0 ;
   }

   return res ;
}
