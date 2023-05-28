#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int get_count_from_file(string file_content, string key) {

	int count = 0;
	for (int i = 0; i < key.length(); i++) {
		for (int j = 0; j < file_content.length(); j++) {
			if (file_content[j] == key[i])
			{
				count++;
			}
		}
	}
	return count;
}

string replace_string(string inputStr, string src, string dst)
{
	std::string result(inputStr);

	size_t pos = result.find(src);
	while (pos != std::string::npos) {
		result.replace(pos, src.size(), dst);
		pos = result.find(src, pos);
	}

	return result;
}
int main() {

	string key_word = "BASIC";
	string example_string = "This is text about basic language. Basic is the best! Remember that only case sensitive LETTERS could be represented as substrings of the word BASIC. So word basic will have count of 0 matched letters and BASIC will have 5 count!		Best regards,		SIGN ME.txt";

	cout << "Line is:\n" << example_string << endl << endl;
	cout << "Count =" << get_count_from_file(example_string, key_word) << endl;

	cout << "Line is:\n" << replace_string(example_string, key_word, "Delphi") << endl << endl;

	return 0;
}