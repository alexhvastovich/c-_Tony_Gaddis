// Chapter 13, Bug
#include <iostream>
using namespace std;

class Bug
{
	private:
		int position;
		bool right;
	public:
		void turn();
		void move();
		int get_position();
		Bug(int initial_position);	
};

Bug::Bug(int initial_position)
{
	position = initial_position;
}

void Bug::turn()
{
	if(right == true){
		right = false;
	} else {
		right = true;
	}
}

void Bug::move()
{
	if(right)
	{
		position--;
	} else 
	{
		position++;
	}
}

int Bug::get_position()
{
	return position;
}

int main()
{
 
  // Declare a bug and set the initial position at 5
  Bug bugsy(5);
  
  // Bugsy moves right 2 positions
  bugsy.move();
  bugsy.move();
  //cout << bugsy.get_position() << endl;
  
  // Bugsy turns
  bugsy.turn(); 
  
  // Bugsy moves left 4 positions
  bugsy.move();
  bugsy.move();
  bugsy.move();
  bugsy.move();
  //cout << bugsy.get_position() << endl;
  
  // Bugsy turns
  bugsy.turn();
  
  // Bugsy moves left 3 positions
  bugsy.move();
  bugsy.move();
  bugsy.move(); 
 
  // Display Bugsy's current position - COMPLETE THE STATEMENT!!!
  cout << "Bugsy's current position is " << bugsy.get_position() << endl;
  
  return 0;
}
