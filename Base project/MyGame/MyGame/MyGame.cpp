#include "Engine/GameEngine.h"
#include "GameScene.h"

/*
Maintenance Log

Date: 3/28/22	Done: 
				Created project
				Pushed to GitHub

Date: 4/18/22	Done:
				Pushed to GitHub
				Added code from the tutorial pdf
				Got help from Mr. Miyoshi
				Pushed to GitHub
*/

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;

const std::string WINDOW_TITLE = "Halle's Extremely Cool and Awesome Game";

int main()
{
	// Seed the random number generator.
	srand((int)time(NULL));

	// Initialize the game.
	GAME.initialize(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE);

	// Create our scene.
	GameScenePtr scene = std::make_shared<GameScene>();
	GAME.setScene(scene);

	// Run the game loop.
	GAME.run();

	return 0;
}
