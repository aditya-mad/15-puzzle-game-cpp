#include "../include/game.hpp"
#include "../include/renderer.hpp"
#include "../include/input_taker.hpp"

#include <iostream>
#include <numeric>

Game::Game()
{
    this->set_box_size(this->DEFAULT_BOX_SIZE);
    this->init_dependencies();
}

Game::Game(int box_size)
{
    this->set_box_size(box_size);
    this->init_dependencies();
}

void Game::init_dependencies()
{
    this->rendrer = &Renderer();
    this->input_taker = &InputTaker();
}

void Game::update_numbers()
{
    if (this->BOX_SIZE < 2)
        this->BOX_SIZE = 4;

    this->numbers.resize(this->NUMBERS_SIZE);
    std::iota(this->numbers.begin(), this->numbers.end(), 1);
}

void Game::set_box_size(int box_size)
{
    this->BOX_SIZE = box_size;
    this->NUMBERS_SIZE = box_size * box_size;
    this->update_numbers();
}

void Game::start_game()
{
    this->update_numbers();
    this->rendrer->render_puzzle(this->numbers);
}