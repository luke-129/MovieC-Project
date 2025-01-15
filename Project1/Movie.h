#ifndef MOVIE_H
#define MOVIE_H
#include <string>
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
	

};

#endif // MOVIE_H
