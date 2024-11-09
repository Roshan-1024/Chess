#include "../Header Files/FrontPage.h"
#include <SFML/Graphics.hpp>
#include <iostream>

void FrontPage::display() {
	/*
		heading: Chess
		chess game logo
		div (vertical scroll effect as well)
			play a friend
			play bots
			play online
			game review
	*/
	m_window.clear(sf::Color(232, 237, 249));
	display_heading();
	display_logo();
	display_options();	//basically a vertically scrollable div as in css
}

void FrontPage::display_heading() {
	sf::Font font;
	if (!font.loadFromFile("C:/Users/Roshan/source/repos/Chess/Chess/Assets/Fonts/SourGummy-SemiBoldItalic.ttf")) {  // Make sure font.ttf is available
		std::cout << "loading SourGummy-SemiBoldItalic.ttf in frontPage.cpp failed";
		//extern bool gameOver;	linker error here, not able to find it
		//gameOver = true;
		return;
	}
	sf::Text text;
	text.setFont(font);
	text.setString("Chess");
	text.setCharacterSize(70);
	text.setFillColor(sf::Color::Black);
	sf::FloatRect textBounds = text.getLocalBounds();
	text.setOrigin(textBounds.width / 2.0f, 0);
	text.setPosition(m_window.getSize().x / 2.0f, 50);
	m_window.draw(text);
}

void FrontPage::display_logo() {
	sf::Texture game_logo;
	if (!game_logo.loadFromFile("C:/Users/Roshan/source/repos/Chess/Chess/Assets/Images/logo.png")) {
		std::cout << "loading logo.png failed in frontpage.cpp";
		return;
	}
	sf::Sprite sprite;
	sprite.setTexture(game_logo);
	sf::FloatRect spriteBounds = sprite.getLocalBounds();
	sprite.setOrigin(spriteBounds.width / 2.0f, 0);
	sprite.setPosition(m_window.getSize().x / 2.0f, 150);
	sprite.setScale(0.7, 0.7);
	m_window.draw(sprite);
}

void FrontPage::display_options() {
	int width = m_window.getSize().x - 2*50;
	int height = m_window.getSize().y - 400;
	sf::RectangleShape div(sf::Vector2f(width, height));	//size
	div.setFillColor(sf::Color(183, 192, 216));
	div.setPosition(50, 500);
	m_window.draw(div);
}