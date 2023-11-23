// Joshua Bivens
// jbivens1@cnm.edu
// BivensPatternmakerP9 - Pattern Maker

// Driver.cpp

#include "Patternmaker.h"
#include "Pattern.h"
#include "Enums.h"

#include <iostream>
#include <fstream>

int main()
{
	// Array of pattern structs
	std::vector<Pattern> patterns;

	// Add acorn to patterns array
	patterns.push_back({
		"acorn",
		{
			{ C_ROW - 2, C_COL - 2 },
			{ C_ROW - 1, C_COL },
			{ C_ROW, C_COL - 3 },
			{ C_ROW, C_COL - 2 },
			{ C_ROW, C_COL + 1 },
			{ C_ROW, C_COL + 2 },
			{ C_ROW, C_COL + 3 }
		}
	});

	// Add rpentomino to patterns array
	patterns.push_back({
		"rpentomino",
		{
			{ C_ROW, C_COL },
			{ C_ROW, C_COL + 1 },
			{ C_ROW + 1, C_COL },
			{ C_ROW + 1, C_COL - 1 },
			{ C_ROW + 2, C_COL }
		}
	});

	// Add glider to patterns array
	patterns.push_back({
		"glider",
		{
			{ C_ROW, C_COL },
			{ C_ROW, C_COL + 1 },
			{ C_ROW, C_COL + 2 },
			{ C_ROW - 1, C_COL },
			{ C_ROW - 2, C_COL + 1 }
		}
	});

	// Add diehard to patterns array
	patterns.push_back({
		"diehard",
		{
			// Left pattern
			{ C_ROW, C_COL - 4 },
			{ C_ROW - 1, C_COL - 4 },
			{ C_ROW - 1, C_COL - 5 },

			// Right pattern
			{ C_ROW, C_COL },
			{ C_ROW, C_COL + 1 },
			{ C_ROW - 2, C_COL + 1 },
			{ C_ROW, C_COL + 2 }
		}
	});

	// Add lwss to patterns array
	patterns.push_back({
		"lwss",
		{
			{ C_ROW, C_COL },
			{ C_ROW, C_COL + 1 },
			{ C_ROW, C_COL - 1 },
			{ C_ROW - 3, C_COL - 1 },
			{ C_ROW, C_COL - 2 },
			{ C_ROW - 1, C_COL - 2 },
			{ C_ROW - 2, C_COL - 2 },
			{ C_ROW - 1, C_COL + 2 },
			{ C_ROW - 3, C_COL + 2 }
		}
	});

	// For each pattern, make a Patternmaker object
	for (Pattern pattern : patterns)
	{
		// Make new Patternmaker object
		Patternmaker current(pattern);

		// Make new txt file
		std::ofstream outfile;

		// Open file with pattern name
		outfile.open(pattern.name + ".txt");

		if (outfile.is_open())
		{
			// Write grid size to file
			outfile << ROW << " " << COL << std::endl;

			// Write pattern to file
			outfile << current.writePattern() << std::endl;

			// Print confirmation to console
			std::cout << "Successfully created " << pattern.name << ".txt" << std::endl;

			// Close file
			outfile.close();
		}
		else
		{
			// Print error message
			std::cout << "Error creating file." << std::endl;
		}
	}

	return 0;
}