#include <SFML/Graphics.hpp>
#include <optional>

int main()
{
    sf::RenderWindow ventana(sf::VideoMode({800, 600}), "Estacion Espacial en Crisis");
    ventana.setFramerateLimit(60);

    sf::CircleShape jugador(20.f);
    jugador.setFillColor(sf::Color::Green);
    jugador.setPosition({390.f, 290.f});

    while (ventana.isOpen())
    {
        while (const std::optional evento = ventana.pollEvent())
        {
            if (evento->is<sf::Event::Closed>())
                ventana.close();
        }

        ventana.clear(sf::Color(20, 20, 40));
        ventana.draw(jugador);
        ventana.display();
    }
    return 0;
}