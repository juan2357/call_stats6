/* 


*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;


class call_record
{
public:
	string firstname;
	string lastname;
	string cell_number;
	int relays;
	int call_length;
	double net_cost;
	double tax_rate;
	double call_tax;
	double total_cost;
};

class call_class
{
public:
	call_class();
	~call_class(); //de-allocates all memory allocate to call_DB by operator new.
	bool is_empty(); //inline implementation
	bool is_full();//inline implementation
	int search(const string key);//returns location if item in listl; otherwise return -1
	void add( ); //adds a call record to call_DB
	void remove(const string key); //removes an item from the list
	void double_size();
	void process();
	void print(); //prints all the elements in the list to the screen
private:
	int count;
	int size;
	call_record *call_DB;
};




/************************************************************************************************************************************/
//Name: default constructor
//Precondition: 
//Postcondition: 
//Decription: Reads the data file of call information (cell number, relays and call length) into the dynamic array of call record, 
//call_DB. If the count because equal to the size the function double_size is called and the memory allocated to call_DB is doubled.
/************************************************************************************************************************************/
call_class::call_class()
{
	

}

/***********************************************************************************************************************************/
//Name: is_empty
//Precondition: 
//Postcondition: 
//Decription: returns true if call_DB is empty
/**********************************************************************************************************************************/
bool call_class::is_empty()
{
	return count == 0;
}

/**********************************************************************************************************************************/
//Name: is_full 
//Precondition: 
//Postcondition: 
//Decription: returns true if call_DB is full
/*********************************************************************************************************************************/
bool call_class::is_full()
{
	return count == size;
}

/**********************************************************************************************************************************/
//Name: search
//Precondition: 
//Postcondition: 
//Decription: locates key in call_DB if it is there; otherwise -1 is returned
/*********************************************************************************************************************************/
int call_class::search(const string key)
{
	return -1;
}

/*********************************************************************************************************************************/
//Name: add
//Precondition: 
//Postcondition: 
//Decription: adds a call_record to call_DB; if call_DB is full, double_size is called to increase the size of call_DB. The user 
//            is prompted to enter the firstname, lastname, cell number, relays and call length. 
/********************************************************************************************************************************/
void call_class::add( )
{
}

/********************************************************************************************************************************/
//Name: remove
//Precondition: 
//Postcondition: 
//Decription: remove key from call_DB if it is there.
/*******************************************************************************************************************************/
void call_class::remove(const string key)
{
}

/******************************************************************************************************************************/
//Name: double_size
//Precondition: 
//Postcondition: 
//Decription: doubles the size (capacity) of call_DB
/******************************************************************************************************************************/
void call_class::double_size( )
{
	size *=2;
	call_record *temp = new call_record[size];

	for(int i=0; i<count; i++)
	{
		temp[i] = call_DB[i];
	}

	delete [ ] call_DB;
	call_DB = temp;
}


/******************************************************************************************************************************/
//Name: process
//Precondition: 
//Postcondition: 
//Decription: calculate the net cost, tax rate, call tax and total cost for every call record in call_DB.
/*****************************************************************************************************************************/
void call_class::process()
{
}


/****************************************************************************************************************************/
//Name: print
//Precondition: 
//Postcondition: 
//Decription: prints every field of every call_record in call_DB formatted to the screen.
/***************************************************************************************************************************/
void call_class::print()
{
	for(int i=0; i<count; i++)
	{
		cout<<call_DB[i].firstname<<"  "<<call_DB[i].lastname
			<<"  "<<call_DB[i].relays<<"  "<<call_DB[i].cell_number
			<<"  "<<call_DB[i].call_length<<endl;
	}
}

/****************************************************************************************************************************/
//Name: destructor
//Precondition: 
//Postcondition: 
//Decription: de-allocates all memory allocated to call_DB.  This should be the last function to be called before the program
//            is exited.
/***************************************************************************************************************************/
call_class::~call_class()
{
}


//driver to test the functionality of your class.
int main()
{
	call_class MyClass;

	MyClass.print();

	
	return 0;
}
