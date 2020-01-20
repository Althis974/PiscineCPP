
#include "../includes/Display.hpp"
#include "../includes/GameManager.hpp"

t_pos   Display::_map_size = { 0, 0 };
WINDOW  *Display::_win_score = NULL;
WINDOW  *Display::_win_game = NULL;


Display::Display(void) {
    this->_init();
}

Display::Display(Display const &src) {
    *this = src;
}

Display::~Display(void) {
    endwin();
    free(Display::_win_score);
    free(Display::_win_game);
}

Display &Display::operator=(Display const &src) {
    (void)src;
    return (*this);
}

/*******************************************************************************
** Private
*/

void    Display::_init(void) {
    setlocale(LC_ALL, "");
    initscr();
    noecho();
    cbreak();
    curs_set(0);
    Display::_map_size.x = COLS;
    Display::_map_size.y = LINES - 5;
    Display::_win_score = subwin(stdscr, 5, COLS, 0, 0);
    Display::_win_game = subwin(stdscr, Display::_map_size.y, Display::_map_size.x, 5, 0);
    box(Display::_win_score, ACS_VLINE, ACS_HLINE);
    box(Display::_win_game, ACS_VLINE, ACS_HLINE);
    keypad(stdscr, TRUE);
    nodelay(stdscr, TRUE);
    wrefresh(Display::_win_score);
    wrefresh(Display::_win_game);
}

/*******************************************************************************
** Public
*/

int     Display::menu(const char *s1, const char *s2) {
    int selected = 0, x = 0, y = 0;
    getmaxyx(stdscr, y, x);

    while (1) {
        box(Display::_win_game, ACS_VLINE, ACS_HLINE);
        if (selected == 0) {
            mvwprintw(Display::_win_game, (y / 2) - 2, (x / 2) - (strlen(s1) / 2) - 4, "🚘");
            wattron(Display::_win_game, A_REVERSE);
        }
        mvwprintw(Display::_win_game, (y / 2) - 2, (x / 2) - (strlen(s1) / 2), s1);
        if (selected == 0) {
            wattroff(Display::_win_game, A_REVERSE);
            mvwprintw(Display::_win_game, (y / 2) - 1, (x / 2) - (strlen(s2) / 2) - 4, " ");
        }
        if (selected == 1) {
            mvwprintw(Display::_win_game, (y / 2) - 1, (x / 2) - (strlen(s2) / 2) - 4, "🚘");
            wattron(Display::_win_game, A_REVERSE);
        }
        mvwprintw(Display::_win_game, (y / 2) - 1, (x / 2) - (strlen(s2) / 2), s2);
        if (selected == 1) {
            wattroff(Display::_win_game, A_REVERSE);
            mvwprintw(Display::_win_game, (y / 2) - 2, (x / 2) - (strlen(s1) / 2) - 4, " ");
        }
        wrefresh(Display::_win_game);
        switch (getch())
		{
            case KEY_UP:
            case KEY_DOWN:
                selected = selected == 1 ? 0 : 1;
                break;
            case 10: // ENTER
                return (selected);
        }
    }
}

void    Display::update_stats(GameManager *w) {
//    wclear(Display::_win_score);
    box(Display::_win_score, ACS_VLINE, ACS_HLINE);

    time_t elapsed = time(NULL) - w->getStartTime();
    tm *ltm = localtime(&elapsed);
    mvwprintw(Display::_win_score, 2, 2, "🕑  Time: %02d:%02d:%02d", ltm->tm_hour - 1, ltm->tm_min, ltm->tm_sec, elapsed);
    mvwprintw(Display::_win_score, 2, 25, "🐸  Score: %d", w->getScore());
    mvwprintw(Display::_win_score, 2, 45, "❤️  Lives: %d", w->getPlayerLives());
    mvwprintw(Display::_win_score, 2, 65, "🏆  Level: %d", w->getCurrentLevel());
//    wrefresh(Display::_win_score);
}

void    Display::update_map(GameManager *w) {
//    clear();
//    wclear(_win_game);
//    box(_win_game, ACS_VLINE, ACS_HLINE);

    // Player
    mvwprintw(_win_game, w->getPlayer().getPosY(), w->getPlayer().getPosX(), "🚘");

    // Ennemies
    for (int i = 0; i < w->getNbEnemies(); ++i) {
        if (w->getEnemies()[i].getLives())
        mvwprintw(_win_game, w->getEnemies()[i].getPosY(), w->getEnemies()[i].getPosX(), "🐸");
	}

    // Player bullets
    for (int i = 0; i < w->getMaxNbPlayerBullets(); ++i) {
        if (w->getPlayerBullets()[i].getLives())
            mvwprintw(_win_game, w->getPlayerBullets()[i].getPosY(), w->getPlayerBullets()[i].getPosX(), "📍");
	}

    // Enemies bullets
    for (int i = 0; i < w->getMaxNbEnemiesBullets(); ++i) {
        if (w->getEnemiesBullets()[i].getLives())
            mvwprintw(_win_game, w->getEnemiesBullets()[i].getPosY(), w->getEnemiesBullets()[i].getPosX(), "💣");
	}

//    wrefresh(_win_game);
//    refresh();
}

t_pos   Display::getMapSize(void) const {
    return (Display::_map_size);
}
