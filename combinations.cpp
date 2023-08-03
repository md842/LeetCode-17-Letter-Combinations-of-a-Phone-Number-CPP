/*
 * Leetcode 17: Letter Combinations of a Phone Number
 * https://leetcode.com/problems/letter-combinations-of-a-phone-number/.

 * Given a string containing digits from 2-9 inclusive, return all possible
 * letter combinations that the number could represent. Return the answer in any
 * order.

 * Constraints:
 *  0 <= digits.length <= 4
 *  digits[i] is a digit in the range ['2', '9'].
 */

#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::endl;

vector<string> letterCombinations(string digits) {
  int length = digits.length();
  
  if (length == 0) // Base case: empty string
    return {}; // Return empty vector
  
  if (length == 1){ // Base case: return mappings for the single digit
    if (digits == "2")
      return {"a", "b", "c"};
    if (digits == "3")
      return {"d", "e", "f"};
    if (digits == "4")
      return {"g", "h", "i"};
    if (digits == "5")
      return {"j", "k", "l"};
    if (digits == "6")
      return {"m", "n", "o"};
    if (digits == "7")
      return {"p", "q", "r", "s"};
    if (digits == "8")
      return {"t", "u", "v"};
    if (digits == "9")
      return {"w", "x", "y", "z"};
  }

  vector<string> outVec;
  int ints[length];
  int mapLens[length];
  for (int i = 0; i < length; i++){
    ints[i] = digits.at(i) - 48;
    mapLens[i] = 3;
  }
  
  // Build mappings. Use arrays for speed
  char mappings[length][4];
  for (int i = 0; i < length; i++){
    if (ints[i] == 2){
      mappings[i][0] = 'a';
      mappings[i][1] = 'b';
      mappings[i][2] = 'c';
    }
    if (ints[i] == 3){
      mappings[i][0] = 'd';
      mappings[i][1] = 'e';
      mappings[i][2] = 'f';
    }
    if (ints[i] == 4){
      mappings[i][0] = 'g';
      mappings[i][1] = 'h';
      mappings[i][2] = 'i';
    }
    if (ints[i] == 5){
      mappings[i][0] = 'j';
      mappings[i][1] = 'k';
      mappings[i][2] = 'l';
    }
    if (ints[i] == 6){
      mappings[i][0] = 'm';
      mappings[i][1] = 'n';
      mappings[i][2] = 'o';
    }
    if (ints[i] == 7){
      mappings[i][0] = 'p';
      mappings[i][1] = 'q';
      mappings[i][2] = 'r';
      mappings[i][3] = 's';
      mapLens[i] = 4;
    }
    if (ints[i] == 8){
      mappings[i][0] = 't';
      mappings[i][1] = 'u';
      mappings[i][2] = 'v';
    }
    if (ints[i] == 9){
      mappings[i][0] = 'w';
      mappings[i][1] = 'x';
      mappings[i][2] = 'y';
      mappings[i][3] = 'z';
      mapLens[i] = 4;
    }
  }

  // Build output
  for (int a = 0; a < mapLens[0]; a++){
    for (int b = 0; b < mapLens[1]; b++){
      if (length == 2)
	outVec.push_back(string() + mappings[0][a] + mappings[1][b]);
      else{ // length is 3 or 4
	for (int c = 0; c < mapLens[2]; c++){
	  if (length == 3)
	    outVec.push_back(string() + mappings[0][a] + mappings[1][b] + mappings[2][c]);
	  else{ // length is 4
	    for (int d = 0; d < mapLens[3]; d++)
	      outVec.push_back(string() + mappings[0][a] + mappings[1][b] + mappings[2][c] + mappings[3][d]);
	  }
	}
      }
    }
  }
  
  return outVec;
}

void test(string digits){
  vector<string> received_output = letterCombinations(digits);

  cout << "[ ";
  for (int i = 0; i < received_output.size(); i++){
    cout << received_output[i] << " ";
  }
  cout << "]" << endl;
}

int main(){
  // Test cases
  test("");
  test("2");
  test("23");
  test("237");
  test("2379");
  return 0;
}
