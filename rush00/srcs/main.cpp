

#include "../includes/Display.hpp"
#include "../includes/GameManager.hpp"

void    game(Display *display) {

    GameManager game(display->getMapSize());

    int key;
    int framed = 0;

    while (game.getStatus() == 1)
    {
        if ((key = getch()) != ERR) {
            game.getInput(key);
        }
        
        if (key != ESC && framed % 15000 == 0)
        {
            game.movePlayerBullets();
            game.moveEnemyBullets();
            game.moveEnemies();
            game.enemiesShoot();
            game.updateDisplay();
        }

        ++framed;

        if (framed > 100000)
            framed = 0;
    }
}

int main(void) {

    Display     display;

    if (display.menu("START GAME", "EXIT") == 1) {
        return (0);
    }

    while (1) {
        game(&display);
        if (display.menu("RETRY", "EXIT") == 1) {
            return (0);
        }
    }
    return (0);
}