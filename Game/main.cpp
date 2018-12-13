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

	Image map_image;//объект изображени¤ дл¤ карты
	map_image.loadFromFile("images/cosmos.png");//загружаем файл дл¤ карты
	Texture map;//текстура карты
	map.loadFromImage(map_image);//зар¤жаем текстуру картинкой
	Sprite mapSprite;//создаЄм спрайт дл¤ карты
	mapSprite.setTexture(map);//заливаем текстуру спрайтом
	
	Clock clock; 
	
	float i = 0;
	
	while (window.isOpen()){
		sf::Event event; //Переменная для события
		while (window.pollEvent(event)) //Опрос событий
			if (event.type == sf::Event::Closed)
				window.close();
		
		float time = clock.getElapsedTime().asSeconds();
		if (int(i += time*1000) >= 960) 
			i = 0;

		mapSprite.setPosition(-i, 0);
		clock.restart();
		window.clear(); //Очищаем экран
		window.display(); 
	}
	return 0;
}
