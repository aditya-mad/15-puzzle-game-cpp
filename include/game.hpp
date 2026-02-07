#ifndef _GAME
#define _GAME

#include <vector>

#include "renderer.hpp"
#include "input_taker.hpp"

class Game
{
    int BOX_SIZE, NUMBERS_SIZE;
    const int DEFAULT_BOX_SIZE = 4;

    int move_count;
    std::vector<int> numbers;

    Renderer *rendrer;
    InputTaker *input_taker;

    void update_numbers();
    void init_dependencies();

public:
    Game();
    Game(int box_size);

    void start_game();
    void set_box_size(int box_size);
};

// Include implementations for header-only compilation
#include "../src/game.cpp"
#include "../src/renderer.cpp"
#include "../src/input_taker.cpp"
#include "../src/menu.cpp"

#endif