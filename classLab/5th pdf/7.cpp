#include <iostream>
#include <fstream>

using namespace std;

int main() {

  ifstream file("input.txt");
  if (!file.is_open()) {
    cout << "Error opening the file" << endl;
    return 1;
  }

  int charCount = 0;
  int wordCount = 0;
  int lineCount = 0;

  char c;
  while (file.get(c)) {
   
    charCount++;
    if (c == '\n') {
      lineCount++;
    }
    if (c == ' ' || c == '\n') {
      wordCount++;
    }
  }
  lineCount++;
  file.close();


  cout << "Number of characters: " << charCount << endl;
  cout << "Number of words: " << wordCount << endl;
  cout << "Number of lines: " << lineCount << endl;

  return 0;
}