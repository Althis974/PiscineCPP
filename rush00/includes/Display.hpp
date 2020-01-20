#ifndef DISPLAY_HPP
# define DISPLAY_HPP

#include <iostream>
#include <string>
#include <ncurses.h>
#include "env.hpp"

class GameManager;

class Display
{
    private:
        static WINDOW          *_win_game;
        static WINDOW          *_win_score;
        static t_pos           _map_size;

        void    _init(void);
        
    protected:
        
    public:
        Display(void);
        Display(Display const &src);
        ~Display(void);

        Display &operator=(Display const &src);

        int             menu(const char *s1, const char *s2);
        static void     update_stats(GameManager *w);
        static void     update_map(GameManager *w);

        t_pos   getMapSize(void) const;

        
};

#endif