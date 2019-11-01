#include <iostream>
#include "ALink.h"
using namespace std ;

void main ()
{
	list object ;
	object.creating_node(25);
	object.creating_node(50);
	object.creating_node(90);
	object.creating_node(40);
	object.creating_node(55);
		
	cout << endl ;
	cout << "------------------------------------------" ;
	cout << endl ;
	cout << "-----------Displaying all nodes-----------" ;
	cout << endl ;
	cout << "------------------------------------------" ;
	cout << endl ;
		
	object.display () ;
		
	cout << endl ;
	cout << "------------------------------------------" ;
	cout << endl ;
	cout << "-------------Inserting at End-------------" ;
	cout << endl ;
	cout << "------------------------------------------" ;
	cout << endl ;
		
	object.creating_node ( 15 ) ;
	cout << endl ;
	object.display () ;
	
	cout << endl ;
	cout << "------------------------------------------" ;
	cout << endl ;
	cout << "------------Inserting At Start------------" ;
	cout << endl ;
	cout << "------------------------------------------" ;
	cout << endl ;
	
	object.insert_at_start ( 10 ) ;
	cout << endl ;
	object.display () ;
	
	cout << endl ;
	cout << "------------------------------------------" ;
	cout << endl ;
	cout << "-------------Deleting At Start------------" ;
	cout << endl ;
	cout << "------------------------------------------" ;
	cout << endl ;
	
	object.delete_first () ;
	cout << endl;
	object.display () ;
	
	cout << endl ;
	cout << "------------------------------------------" ;
	cout << endl ;
	cout << "--------------Deleting At End-------------" ;
	cout << endl ;
	cout << "------------------------------------------" ;
	cout << endl ;
	
	object.delete_last () ;
	cout << endl ;
	object.display () ;
		
	cout << endl ;
	cout << "------------------------------------------" ;
	cout << endl ;
	cout << "---------Deleting at 4th Position---------" ;
	cout << endl ;
	cout << "------------------------------------------" ;
	cout << endl ;
	
	object.delete_position ( 4 ) ;
	cout << endl ;
	object.display () ;
	
	cout << endl ;
	cout << "------------------------------------------" ;
	cout << endl ;
	cout << "--------Inserting At 3rd Position---------" ;
	cout << endl ;
	cout << "------------------------------------------" ;
	cout << endl ;
	
	object.insert_at_position ( 3 , 35 ) ;
	cout << endl ;
	object.display () ;
	
	system ("pause");
}
