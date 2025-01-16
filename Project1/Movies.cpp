#include "Movies.h"
#include "Movie.h"
#include <iostream>
#include <vector>
Movies::Movies()
{
	
}

Movies::~Movies()
{
}

void Movies::Add_Movie(Movie movie)
{
	for(Movie i: movieCollection)
	{
		if(movie.get_title() == i.get_title())
			return;
	}
	movieCollection.push_back(movie);
}

void Movies::Display_Movies()
{
	for(Movie i: movieCollection)
	{
		std::cout << i.get_title() << std::endl;
	} 
}

std::vector<Movie> Movies::get_movie_collection()
{
	return movieCollection;
}