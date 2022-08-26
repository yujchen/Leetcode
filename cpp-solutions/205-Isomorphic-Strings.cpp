/*205. Isomorphic Strings
Easy

Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

 

Example 1:

Input: s = "egg", t = "add"
Output: true

Example 2:

Input: s = "foo", t = "bar"
Output: false

Example 3:

Input: s = "paper", t = "title"
Output: true

 

Constraints:

    1 <= s.length <= 5 * 104
    t.length == s.length
    s and t consist of any valid ascii character.

*/
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> m;
        unordered_map<char,char> n;
        for (int i = 0; i < s.size(); i++){
            if (m.count(s[i]) == 0 && n.count(t[i]) == 0){
                m[s[i]] = t[i];
                n[t[i]] = s[i];
            }
            else{
                if (( m[s[i]] == t[i] && n[t[i]] == s[i]) == false ){
                    return false;
                }
            }
        }
        return true;
    }
};
