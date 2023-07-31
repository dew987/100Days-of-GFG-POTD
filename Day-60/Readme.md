**Approach:-**

We have to find the first non-repating character.
Approach is to use an hash array of size 26(only lowercase alphabets are considered).

**Steps:-**
1. Iterate the string and for each character, increment index S[i]-'a' i.e. increamenting the count of the alphabet.
2. Iterate the string and for each character, check if the index S[i]-'a' contains 1(depicting the character was unique in the array) then return S[i].
3. Return '$'(Depicting no unique character found).

**Time Complexity:-** O(N)

**Space Complexity:-** O(26)