#include <helpers/game.hpp>
#include <iostream>


float Game::player_speed =100.f;
sf::Time Game::time_per_frame =sf::seconds(1.f/60.f);
Game::Game()
:m_window(sf::VideoMode(640,480),"Fighter plane",sf::Style::Close),
m_texture(),
m_player(),
m_font(),
is_moving_up(false),
is_moving_down(false),
is_moving_left(false),
is_moving_right(false)
{
    if(!m_texture.loadFromFile("media/Textures/plane.png"))
    {
        std::cout<<"Error loading the texture"<<"\n";
        return ;
    }
    m_player.setTexture(m_texture);
    


}