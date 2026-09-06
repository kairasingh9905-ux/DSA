#include <iostream>
#include <string>
using namespace std;
bool isFreqSame(int freq[26], int windFreq[26]) // for cheking the frequency
{
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != windFreq[i])
        {
            return false;
        }
    }
    return true;
}
bool permutation(string s1, string s2)
{
    int freq[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        freq[s1[i] - 'a']++; // frequency of s2 a->0, b->1 .......
    }
    int windSize = s1.length();
    for (int i = 0; i < s2.length(); i++)
    {
        int windIndx = 0, indx = i;
        int windFreq[26] = {0};                           // window frequeny array
        while (windIndx < windSize && indx < s2.length()) // condition for window length
        {
            windFreq[s2[indx] - 'a']++; // window frequency
            windIndx++;
            indx++;
        }
        if (isFreqSame(freq, windFreq)) // same frequency found
        {
            return true;
        }
    }
    return false;
}
int main()
{
    string s1 = "ab";
    string s2 = "eiebaooo";
    cout << permutation(s1, s2) << endl;
}