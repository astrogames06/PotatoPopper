#include <raylib.h>
#include <math.h>

#pragma once

class Utils
{
public:
	static float magnitude(Vector2 v)
	{
		float magnitude = sqrt((v.x * v.x) + (v.y * v.y));

		return magnitude;
	}
};