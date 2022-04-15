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


vector<int> FindSubstringMatches(string theString, string substring);
string ReplaceAllSubstrings(string theString, string substring, string newString);






vector<int> FindSubstringMatches(string theString, string substring)
{
   vector<int> matchingIndecies;

   int index = theString.find(substring, 0);

   while(index != string::npos)
   {
     matchingIndecies.push_back(index);

     index = theString.find(substring, index + 1);
   }

   return matchingIndecies;

}

string ReplaceAllSubstrings(string theString, string substring, string newString)
{
  vector<int> matches = FindSubstringMatches(theString, substring);

      if(matches.size() != 0)
      {
        int lengthDifference = newString.size() - substring.size();

        int timesLooped = 0;

        for( auto index: matches)
        {
          theString.replace(index + (timesLooped * lengthDifference), substring.size(), newString);

           timesLooped++;


        }
      }

      return theString;
}


int main()
{
    string phrase = "To be or not to be ";

    vector<int> matches = FindSubstringMatches(phrase, "be");

   for(int i = 0; i < matches.size(); ++i)
   {
     cout << matches[i] << endl;
   }



   cout << ReplaceAllSubstrings("to know or not to know", "know", "be") << endl;


   char letterZ = 'z';
   char num3 = '3';
   char aSpace = ' ';

   cout << "Is z a letter or number " << isalnum(letterZ) << endl;
   cout << "Is z a letter " << isalpha(letterZ) << endl;
   cout << "Is z uppercase " << isupper(letterZ) << endl;
   cout << "Is z lowecase " << islower(letterZ) << endl;
   cout << "Is 3 a number " << isdigit(num3) << endl;
   cout << "Is space a space " << isspace(aSpace) << endl;  



  return 0;
}
