// Joshua Bivens
// jbivens1@cnm.edu
// BivensPatternmakerP9 - Pattern Maker

// Pattern.h

#pragma once

#ifndef _PATTERN_H_
#define _PATTERN_H_

#include <string>
#include <vector>

// Pattern struct
struct Pattern {
    std::string name;
    std::vector<std::pair<int, int>> coords;

    Pattern(std::string name, std::vector<std::pair<int, int>> coords) {
	this->name = name;
	this->coords = coords;
    }
};

#endif // !_PATTERN_H_
