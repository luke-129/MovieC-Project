#include "Movie.h"
#include "Movies.h"
#include <iostream>
Movie::Movie(std::string m_title, std::string m_rating)
{
	title = m_title;
	rating = m_rating;
	watch_count = 0;
}

Movie::~Movie()
{
}

std::string Movie::get_rating() { return rating;}

std::string Movie::get_title() {return title;}

int Movie::get_watch_count() {return watch_count;}


void Movie::watch_movie(Movies movies_obj)
{
	bool bIsMovieInCollection = false;
	for(auto i: movies_obj.get_movie_collection())
	{
		if(i.get_title() == this->get_title())
			bIsMovieInCollection = true;
	}
	
	if(bIsMovieInCollection)
		{	watch_count++;
			std::cout << "watched movie" << std::endl;
		}
		
	else
		std::cout << "movie not in collection, can't watch" << std::endl;
}