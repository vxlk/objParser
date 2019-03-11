/* TESTING OBJPARSER */
#include "objParser.h"
#include <iostream>
int main(int argc, char **argv)
{
	if (argc != 2) return 1;
	//such beautiful c++
	if (ObjParser::openFile(argv[1]).getFaces().empty())
		std::cout << "empty\n";
	else
	{
		std::cout << ObjParser::openFile(argv[1]).getFaces()[1].v << " ";
		std::cout << ObjParser::openFile(argv[1]).getVerts()[1].x;
	}

	int x;
	std::cin >> x;
	return 0;
}