#ifndef _GAME_RENDERER
#define _GAME_RENDERER

#include <vector>
#include <string>

class Renderer
{
    inline void clear_screen();
    inline void pretty_terminal();

public:
    void render_puzzle(std::vector<int> &numbers);

    void render_move_details(int move_count);
    void render_move_details(std::string move_details);
};

#endif
