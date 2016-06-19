#include "MainWindow.hpp"
#include "Level.hpp"

#include <iostream>

using namespace jumper;

int main(int argc, char** argv)
{
    /*if(argc != 3)
	{
		std::cout << "Please specify a level to render" << std::endl;
		return -1;
    }*/

	MainWindow window("Jumper", 800, 600);
    Level level(window.getRenderer(), "../res/test2.lvl", window.getCam());
    Player player(window.getRenderer(), "../res/test.spr");
	level.setPlayer(&player);
	window.setLevel(&level);
	window.run();
}
