#include "Movie.h"
#include "Movies.h"
#include <vector>
#include <iostream>
#include <string>

int main()
	{
		
		
		Movie kill("Kill", "R");
		Movies collection;
		collection.Add_Movie(kill);
		Movie bill("Bill", "R");
		collection.Add_Movie(bill);
		Movie aa("Bill", "R");
		collection.Add_Movie(aa);
		
		collection.Display_Movies();
		
		
		
		
	return 0;
	}