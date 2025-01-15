#include "Movies.h"
#include "Movie.h"
#include <iostream>
Movies::Movies()
{
	
}

Movies::~Movies()
{
}

void Movies::Add_Movie(Movie movie)
{
	
	movieCollection.push_back(movie);
}

void Movies::Display_Movies()
{
	for(Movie i: movieCollection)
	{
		std::cout << i.get_title() << std::endl;
	} 
}