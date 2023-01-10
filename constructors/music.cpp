#include <iostream>
#include "song.hpp"

int main() {
	Song back_to_black("Back to Black", "Amy Winehouse");
	std::cout << "title: " << back_to_black.get_title() << "\n";
	std::cout << "artist: " << back_to_black.get_artist() << "\n";
}