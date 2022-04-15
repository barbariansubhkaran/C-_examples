#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <array>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

//vector<string> StringToVector(string theString, char separator);

string CaesarCipher(string theString, int key, bool encrypt);


string CaesarCipher(string theString, int key, bool encrypt)
{
  string returnString = "";
  int charCode = 0;
  char letter;

  if(encrypt) key = key * -1;
  {
    for(char& c: theString)
    {
      if(isalpha(c))
      {
        charCode = (int)c;
        charCode += key;

      }

      if(isupper(c))
      {
        if(charCode > (int)'Z')
        {
          charCode -= 26;
        }

        else if(charCode < (int)'A')
        {
          charCode += 26;
        }

        else
        {
          if(charCode > (int)'z')
          {
               charCode -= 26;
          }
           else if(charCode < (int)'a')
           {
             charCode += 26;
           }
        }

       letter = charCode;

       returnString += letter;

      }

      else
      {
        letter = c;
        returnString += c;
      }
    }
  }

   return returnString;
}


int main()
{

  string theString = "Make me secret";

  string encryptedStr = CaesarCipher(theString, 5, true);

  string decryptedStr = CaesarCipher(encryptedStr, 5,false);

  cout << "the string " << theString << endl; 

  cout << "Encrypted " << encryptedStr << endl;

  cout << "DecryptedStr " << decryptedStr << endl;





  return 0;
}
