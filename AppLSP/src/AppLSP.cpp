//============================================================================
// Autor: Diardon
// Blog : https://diardon.wordpress.com/
//============================================================================

#include "lsp/ShapesNoLSP.h"
#include "lsp/Shapes.h"
#include <iostream>

using namespace std;

int main()
{
	Shape* rectangle = new Rectangle(4, 6);
	Shape* square = new Square(5);

	cout << "Área del rectángulo: " << rectangle->calculateArea() << endl;
	cout << "Área del cuadrado: " << square->calculateArea() << endl;

	return 0;
}
