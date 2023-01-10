#include <string>

class Song {
	// Attributes
	std::string title;
	std::string artist;

public:
	// Constructor Declaration
	Song(std::string new_title, std::string new_artist);

	// Destructor Declaration
	~Song();

	// Functions Declaration
	std::string get_title();
	std::string get_artist();
};