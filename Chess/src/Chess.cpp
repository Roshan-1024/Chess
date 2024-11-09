#include <SFML/Graphics.hpp>
#include "../Header Files/FrontPage.h"

//maximum width and height of the window
#define MAX_WIDTH sf::VideoMode::getDesktopMode().width
#define MAX_HEIGHT sf::VideoMode::getDesktopMode().height

//Global variables
bool gameStarted = false;

int main(){
	sf::RenderWindow window(sf::VideoMode(MAX_WIDTH, MAX_HEIGHT), "Roshan's Chess Game");
	sf::Event event;

	FrontPage frontPage(window);
	while (window.isOpen()) {
		//Check for events
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		
		window.clear(sf::Color::White);
		if (::gameStarted) { } //pass
		else frontPage.display();
		window.display();
	}
}