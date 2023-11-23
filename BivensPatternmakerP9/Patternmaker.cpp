// Joshua Bivens
// jbivens1@cnm.edu
// BivensPatternmakerP9 - Pattern Maker

// Patternmaker.cpp

#include "Patternmaker.h"

// Initializes the pattern array to dashes
void Patternmaker::drawEmpty()
{
	for (int i = 0; i < ROW; ++i)
	{
		for (int j = 0; j < COL; ++j)
		{
			pattern[i][j] = '-';
		}
	}
}

// Draws the specified pattern to the pattern array
void Patternmaker::drawPattern(const std::vector<std::pair<int, int>>& coords)
{
	for (const auto& coord : coords)
	{
		pattern[coord.first][coord.second] = '#';
	}
}

// Write pattern to string
std::string Patternmaker::writePattern()
{
	std::string patternString;

	for (int i = 0; i < ROW; ++i)
	{
		for (int j = 0; j < COL; ++j)
		{
			patternString += pattern[i][j];
		}
		patternString += '\n';
	}

	return patternString;
}

// Constructors
Patternmaker::Patternmaker()
{
	// Make empty world
	drawEmpty();
}

Patternmaker::Patternmaker(const Pattern& pattern)
{
	// Make empty world
	drawEmpty();
	
	// Draw pattern
	drawPattern(pattern.coords);
}
