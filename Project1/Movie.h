#ifndef MOVIE_H
#define MOVIE_H
#include <string>
class Movies;
class Movie
{
	
private:
	std::string title;
	std::string rating;
	int watch_count;
	
public:
	Movie(std::string m_title, std::string m_rating);
	~Movie();
	
	std::string get_title();
	std::string get_rating();
	int get_watch_count();
	
	void watch_movie(Movies movies_obj);

};

#endif // MOVIE_H
