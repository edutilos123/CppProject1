0)  Ich musste tests.cpp , von a1, a2 , a3 komplett kommentieren, um tests.cpp in a4 aus-
führen zu können. (weil alle diese tests.cpp #include "catch.cpp" , und in eclipse , 
wir können a1, a2 , a3 , a4 als unterschiedle Modulen nicht kompliieren, aber im Terminal (cmd)  schon.  
Bitte beachten Sie darauf , auskommentieren tests.cpp , im jeweiligen Module. 

1) Ich benutze Windows , deswegen es ist wichtig libstdc++-6.dll von {MINGW_INSTALL_DIR}/bin
here zu hinzuzufügen. 
2) Ich habe einige Sachen in Ihren Makefile und tests.cpp verändert , weil das in meinem Laptop nicht 
funktionierte : 
Veränderungen : 
a) in tests.cpp : 
-> alte Zeile: #include "catch.hpp" 
-> neue Zeile: #include "../a1/catch.hpp"

b) in Makefile : 
-> alte Zeile:
  all: catch.hpp ...
  neue Zeile: 
  all: ...  #catch.hpp weg 

////////////////////////////
-> alte Zeile: 
   catch.hpp:
	cp ../aufgabe1/catch.hpp ./

-> neue Zeile : 
 Diese Zeile ist weg. 
  
////////////////////////////
-> alte Zeile: 
tests.o: catch.hpp tests.cpp
-> neue Zeile: 
tests.o:  tests.cpp


////////////////////////////
-> alte Zeile: 
	rm -f catch.hpp
-> neue Zeile: 
  Diese Zeile ist weg. 	

////////////////////////////
-> und alle `aufgabe` wurde mit `a` ersetzt.
  	
	