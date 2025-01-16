#ifndef MOVIES_H
#define MOVIES_H
#include <vector> 
class Movie;


class Movies
{

private:
	std::vector <Movie> movieCollection;
public:
	Movies();
	~Movies();
	
	void Add_Movie(Movie movie);
	void Display_Movies();
	
	std::vector<Movie> get_movie_collection();

};

#endif // MOVIES_H
