**Approach:-**

Idea is to multiply each digit in second string to each digit of first string.

i.e. the answer will be sum of all the second string's length strings.

The sumStrings() function sums up 2 integers in string format with some shift as in multiplication, digit places causes shift.

**Steps:-**
1. Find the first character of both the strings if only 1 string have first character set as '-' then our answer will be negative.(i.e. if onyl 1 of the number is negative then answer will be negative). Remove the negative character from the string.
2. Remove the leading zeroes from both the strings and update strings too.
3. Iterate for i= n2-1 to i= 0,
    
    a) Create string temp and set it to empty, variable carry and set it to 0, variable mul and set it to s2[i]-'0'(i.e. convert character to digit).
    
    b) Iterate for j= n1-1 to j= 0,
    
        - Create ans variable and set it as mul*(s1[j]-'0') + carry.
    
        - push ('0'+ans%10) in the temp.
    
        - If ans is greater than or equal to 10 then set carry as ans/10.
    
        - Else set carry as 0.
    
    c) If carry is not set to 0, push ('0'+carry) in the temp.
    
    d) Call sumStrings() function which updates the ans by adding previous ans with temp with the shifted character cnt.
    
    e) Increament cnt.

4. If flag if false(i.e. answer is negative) then push '-' character in the string ans.
5. Reverse the string ans.
6. Return the string.



Total time taken will be O(n1*n2) since we are first finding the product for each digit in n2 with n1.

Extra space is required to store the answer string which will be length of n1+n2,  hence overall space taken is O(n1+n2).

**Time Complexity:-** O(n1*n2)

**Space Complexity:-** O(n1+n2)

n1 and n2 are the lengths of string 1 and 2 respectively.