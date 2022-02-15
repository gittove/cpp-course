#pragma once

int abs_value(int value)
{
	if (value < 0)
	{
		value *= -1;
	}

	return value;
}

int diff(int x, int y)
{
	return abs_value(y - x);
}