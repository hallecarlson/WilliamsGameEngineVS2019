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

Date: 4/19/22	Done:
				Added a ton of code for objects
				Tested game
				Pushed to GitHub

Date: 4/20/22	Done:
				Added a ton of code for project
					explosion
					game over message
					game scene
					laser
					meteor
					meteor spawner
					my game
					score
				Encountered strange errors and decided to fix them later
				Pushed to GitHub

Date: 4/22/22	Done:	
				Got help from Mr. Miyoshi
				fixed errors and tested code
				Added collision and meteor disappearing
				Currently working on explosions
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
