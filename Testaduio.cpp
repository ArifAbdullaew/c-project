#include <SFML/Window.hpp>
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

int main()
{
    // create the window
    sf::RenderWindow window(sf::VideoMode(640, 480), "My window");
    sf:: Event event;

    
    
    
     // Вот уже начинаясо строчки №18 код падает, хотя компилятор сам иницилизирует данный тип 
    
    
    sf::Music music;
    
    //Соответсвенно дальше нет смысла работать, с музыкой, если ошибка при запуске 
    
    //music.openFromFile("C:\\Users\\ArifLaptop\\CLionProjects\\testaudio\\cmake-build-debug\\MainMusic.ogg");
    //music.setVolume(50);

    //music.play();
    
    
    //Снизу тестовая часть кода RenderWindow, которая прекрасно работает, если убрать sf::Music
    
    
    
    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // clear the window with black color
        window.clear(sf::Color::Black);

        // draw everything here...
        // window.draw(...);

        // end the current frame
        window.display();
    }

    return 0;
}
