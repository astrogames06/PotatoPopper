#include <vector>
#include "Entity.h"

#pragma once

class Game
{
public:
		
	enum State
	{
		MENU,
		GAME
	};

	static const int WIDTH = 1000;
	static const int HEIGHT = 600;
	inline static State state;

	static void Init();
	static void Setup();
	static void Update();
	static void Draw();
};