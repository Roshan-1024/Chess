#pragma once
#include <SFML/Graphics.hpp>

#define MAX_WIDTH sf::VideoMode::getDesktopMode().width
#define MAX_HEIGHT sf::VideoMode::getDesktopMode().height
class FrontPage{
public:
	FrontPage(sf::RenderWindow& window) : m_window(window) {}
	void display();
	void display_heading();
	void display_logo();
	void display_options();

private:
	sf::RenderWindow& m_window;
};