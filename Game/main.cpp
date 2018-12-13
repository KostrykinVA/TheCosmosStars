#include <SFML/Graphics.hpp>

int main(){
	sf::VideoMode desktop = sf::VideoMode::getDesktopMode();
	sf::RenderWindow window(sf::VideoMode(960, 540, desktop.bitsPerPixel), "Cosmo");

	// Основной (бесконечный) цикл
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
