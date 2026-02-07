#include "../include/renderer.hpp"

#include <vector>
#include <iostream>

void Renderer::render_puzzle(std::vector<int> &numbers)
{
    for (auto x : numbers)
    {
        std::cout << x << " ";
    }
}
