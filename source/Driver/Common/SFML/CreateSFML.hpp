#ifndef DATA_SFML_HPP
#define DATA_SFML_HPP

#include <SFML/Window.hpp>

#include <string>

namespace SuperHaxagon {
	void initializePlatform(std::string& sdmc, std::string& romfs, bool& platformBackslash);
	void osSpecificWindowSetup(sf::Window& window);
}

#endif //DATA_SFML_HPP
