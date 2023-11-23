// Joshua Bivens
// jbivens1@cnm.edu
// BivensPatternmakerP9 - Pattern Maker

// Patternmaker.h

#pragma once

#ifndef _PATTERNMAKER_H_
#define _PATTERNMAKER_H_

#include "Pattern.h"

#include <string>
#include <sstream>
#include <vector>

class Patternmaker
{
private:
	// The world: 2D char array
	char pattern[ROW][COL];

	// Pattern builders
	void drawEmpty();
	void drawPattern(const std::vector<std::pair<int, int>>& coords);

public:
	// Constructors
	Patternmaker();
	Patternmaker(const Pattern& pattern);

	// Write pattern to string
	std::string writePattern();
};

#endif // !_PATTERNMAKER_H_