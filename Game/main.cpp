#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

using namespace sf;

class Entity{
protected:	
	Texture texture;
	Sprite sprite;
public:
	Entity(std::string path){}

	Sprite getSprite() {}
	void setPosition(float x, float y) {}
};

class Player:public Entity{
	int hp;
public:
	Player(std::string path):Entity(path){}
	void move(){}
	void attack(){}
};

int main(){
	sf::VideoMode desktop = sf::VideoMode::getDesktopMode();
	sf::RenderWindow window(sf::VideoMode(960, 540, desktop.bitsPerPixel), "Cosmo");

	while (window.isOpen()){
		sf::Event event; //Переменная для события
		while (window.pollEvent(event)) //Опрос событий
			if (event.type == sf::Event::Closed)
				window.close();


		player.move();
		window.clear(); //Очищаем экран
		window.display(); 
	}
	return 0;
}
