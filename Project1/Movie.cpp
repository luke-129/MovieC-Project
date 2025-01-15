#include "Movie.h"

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


