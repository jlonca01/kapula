#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void main(void)
{
// deklaracija objekta in_files klase ulaznog toka
// uz otvaranje datoteke cities 
	ifstream in_file("cities");
	ofstream out_file("filter");
	
// provjera uspješnosti otvaranja datoteke
	if (!in_file)
		return;

	string string_A;

// petlja za èitanje se prekida kod nailaska na kraj datoteke
	while (!in_file.eof())
	{
		in_file >> string_A;
		if (string_A != "zzz" )
			out_file<<string_A<<endl;
// èitanje jednog stringa iz datoteke
		in_file >> string_A;
// ispisivanje stringa na ekran
		cout << string_A << " ";
	}

// zatvaranje datoteke
	in_file.close();
	out_file.close();
}

