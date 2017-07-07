#ifndef HELPERS_GAME_HPP
#define HELPERS_GAME_HPP

#include <SFML/Graphics.hpp>

class Game : private sf::NonCopyable
{
    public:
    Game();
    void                   run();
    private:
    void                   processEvents();
    void                   update();
    void                   render();
    void                   handleInput(sf::Keyboard::Key key, bool ispressed );
    private:
    static float           player_speed;
    static sf::Time        time_per_frame;
    sf::Texture             m_texture;
    sf::Window              m_window;
    sf::Sprite              m_player;
    bool                    is_moving_up;
    bool                    is_moving_down;
    bool                    is_moving_left;
    bool                    is_moving_right;

}; 
#endif  