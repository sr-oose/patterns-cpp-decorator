#include <iostream>
#include "textsource.h"
#include "decorators.h"


using namespace std;

int main() {
	PtrTextSource source =
			make_shared<CapitalizeDecorator>(
					make_shared<LineNumberDecorator>(
							make_shared<StringTextSource>("Zeile1\nZeile2\nZeile3")
					)
			);
	cout << source->getText() << endl;
	return 0;
}
