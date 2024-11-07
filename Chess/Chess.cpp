#include <SFML/Graphics.hpp>
#include <iostream>

#define MAX_WIDTH sf::VideoMode::getDesktopMode().width
#define MAX_HEIGHT sf::VideoMode::getDesktopMode().height


int main(){
	sf::RenderWindow window(sf::VideoMode(MAX_WIDTH, MAX_HEIGHT), "Roshan's Chess Game");
	sf::Event event;
	while (window.isOpen()) {
		//Check for events
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}

		window.clear();
		window.display();
	}
}