/* Licensed under the Apache License, Version 2.0
   Copyright 2018 Luiz Reuter <luiz.torro@gmail.com> */

#include <iostream>
#include <map>

using namespace std;

class OtanSpeller {
	public:
		void print_spelling();
		void spell(string letters);

	private:
		map<char, string> spelling = {
			{'A', "Alpha"},
			{'B', "Bravo"},
			{'C', "Charlie"},
			{'D', "Delta"},
			{'E', "Echo"},
			{'F', "Foxtrot"},
			{'G', "Golf"},
			{'H', "Hotel"},
			{'I', "India"},
			{'J', "Juliett"},
			{'K', "Kilo"},
			{'L', "Lima"},
			{'M', "Mike"},
			{'N', "November"},
			{'O', "Oscar"},
			{'P', "Papa"},
			{'Q', "Quebec"},
			{'R', "Romeo"},
			{'S', "Sierra"},
			{'T', "Tango"},
			{'U', "Uniform"},
			{'V', "Victor"},
			{'W', "Whiskey"},
			{'X', "X-ray"},
			{'Y', "Yankee"},
			{'Z', "Zulu"}
		};
};

void OtanSpeller::print_spelling() {
	for(auto entry : spelling) {
		cout << entry.first << '\t' << entry.second << endl;
	}
}

void OtanSpeller::spell(string letters) {
	for(auto letter : letters) {
		cout << spelling[toupper(letter)] << endl;
	}
}
void print_usage() {
	cout << "Usage: wspell <string>" << endl;
	cout << "Example: wspell Hello" << endl;
}

int main(int argc, char *argv[]) {
	if(argc < 2) {
		print_usage();
		return 0;
	}

	OtanSpeller speller;
	for(int i = 1; i < argc; i++)
		speller.spell(argv[i]);
}
