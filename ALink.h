#include <iostream>
using namespace std ;

struct node 
{
	double input ;
	node *next ;
};

class list 
{
	private : 
	node *head , *tail ;
	
	public :
	list () ;
	void creating_node (double) ;
	void display () ;
	void insert_at_start (double) ;
	void insert_at_position ( int , double ) ;
	void delete_first () ;
	void delete_last () ;
	void delete_position (int) ;
	
} ;