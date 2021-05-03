// Chapter 13, Tally Counter
#include <iostream>
using namespace std;

class TallyCounter
{
	private:
		int tally; // private variable used in the class to hold the count value 
	public:
		void count(); // void function to increments the counter by one
		void clear(); // void function to clear the tally to zero
		int get_value() const; // function to return the current tally value
		
		TallyCounter(); // Constructor
};

TallyCounter::TallyCounter()
{
	tally = 0;
}

void TallyCounter::count()
{
	tally++;
}

void TallyCounter::clear()
{
	tally = 0;
}

int TallyCounter::get_value() const
{
	return tally;
}


int main()
{
   // Create a tally counter
   TallyCounter tallyObject;
   tallyObject.clear();
   tallyObject.get_value();
   
   // Count the three people that get on the bus
   tallyObject.count();
   tallyObject.count();
   tallyObject.count();
   
   // Display the current count - COMPLETE THE STATEMENT!!!
   cout << "Current count is " <<  tallyObject.get_value() << endl;

   // Two more people get on the bus
   tallyObject.count();
   tallyObject.count();
   
   // Display the new count - COMPLETE THE STATEMENT!!!
   cout << "Current count is " << tallyObject.get_value() << endl;
   
   // Clear the counter - bus is empty
   tallyObject.clear();
   
   // Count the four people that get on the bus
   tallyObject.count();
   tallyObject.count();
   tallyObject.count();
   tallyObject.count();

   // Display the current count - COMPLETE THE STATEMENT!!!
   cout << "Current count is " << tallyObject.get_value() << endl;
	
	return 0;
}
