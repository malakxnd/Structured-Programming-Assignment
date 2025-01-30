# Structured-Programming-Assignment
1. A positive integer n is said to be prime (or, "a prime") if and only if n is greater than 1
and is divisible only by 1 and n . For example, the integers 17 and 29 are prime, but 1
and 38 are not prime. Write a function named "is_prime" that takes a positive integer
argument and returns as its value the integer 1 if the argument is prime and returns the
integer 0 otherwise. Thus, for example,
cout << is_prime(19) << endl; // will print 1
cout << is_prime(1) << endl; // will print 0
cout << is_prime(51) << endl; // will print 0
cout << is_prime(-13) << endl; // will print 0

2. Write a function named "number_of_matches" that compares the initial parts of two
character arrays to see how many pairs of cells match before a difference occurs. For
example, if the arrays are
0 1 2 3 4 5 0 1 2 3 4
'b' | 'o' | 'a' | 's' | 't' | '\0' and 'b' | 'o' | 'a' | 't'|'\0
then the function should return the value 3 because only the first three pairs of cells in the
arrays match (cell 0 matches cell 0, cell 1 matches cell 1, and cell 2 matches cell 2). Each of
the character arrays will end with the character whose ASCII value is zero; this character,
called NUL, is denoted by '\0' in the C and C++ programming languages (see the two arrays
shown above). The pairwise cell comparisons should not go beyond the end of either array.
If the two arrays are identical all the way to their terminating NUL characters, return the
number of non-NUL characters. The function should take only two parameters, namely the
two character arrays to be compared.

3. Write an entire C++ program that reads a positive integer entered by an interactive user and
then prints out all the positive divisors of that integer in a column and in decreasing order.
The program should allow the user to repeat this process as many times as the user likes.
Initially, the program should inform the user about how the program will behave. Then the
program should prompt the user for each integer that the user wishes to enter. The program
may be terminated in any of two ways. One way is to have the program halt if the user enters
an integer that's negative or zero. In this case the user should be reminded with each prompt
that the program can be terminated in that way. Alternatively, after an integer has been
entered and the divisors have been printed, the program can ask the user whether he/she
wishes to enter another integer. In this case, when the user accidentally enters a zero or
negative integer to have its divisors calculated, the program should inform the user that the
input is unacceptable and should allow the user to try again (and again!).
Here is an illustration of how the program and the interactive user might interact. The user's
responses to the program are shown in bold italics.
This program is designed to exhibit the positive divisors of
positive integers supplied by you. The program will
repeatedly prompt you to enter a positive integer. Each
time you enter a positive integer, the program will print
all the divisors of your integer in a column and in
decreasing order.
Please enter a positive integer: 36
36
18
12
9
6
4
3
2
1
Would you like to see the divisors of another integer (Y/N)? y
Please enter a positive integer: -44
-44 is not a positive integer.
Please enter a positive integer: 0
0 is not a positive integer.
Please enter a positive integer: 109
109
1
Would you like to see the divisors of another integer
(Y/N)? m
Please respond with Y (or y) for yes and N (or n) for no.
Would you like to see the divisors of another integer (Y/N)? n

4. Write a function named "shift_right" that takes as its arguments the following:
an array of floating point values;
an integer, call it "left", that tells the leftmost cell of the part of the array to be shifted;
(3) an integer, call it "right", that tells the rightmost cell of the part of the array to be
shifted;
(4) a positive integer, call it "distance" that tells how many cells to shift by.
The function should make sure that left is less than or equal to right, and that distance is
greater than zero. If either of these conditions fails, the function should return the value 1 to
indicate an error. Otherwise it should shift by distance cells the contents of the array cells
with subscripts running from left to right . Thus, for example, if the array passed to the
function looks like this:
0 1 2 3 4 5 6 7 8 9 10
5.8 | 2.6 | 9.1 | 3.4 | 7.0 | 5.1 | 8.8 | 0.3 | -4.1 | 8.0 | 2.7
|etc.
and if left has the value 3 , right has the value 7 , and distance has the value 2 , then the
function should shift the contents of cells 3 , 4 , 5 , 6 , and 7 to the right by 2 cells, so that
when the function returns, the array will have been changed so that it looks like this:
0 1 2 3 4 5 6 7 8 9 10
....
5.8 | 2.6 | 9.1 | ??? | ??? | 3.4 | 7.0 | 5.1 | 8.8 | 0.3 | 2.7 |
etc.
The question marks in cells 3 and 4 indicate that we don't care what numbers are in those
cells when the function returns. Note that the contents of cells 8 and 9 have changed, but
the contents of cell 10 is unchanged. The function need not take any precautions against the
possibility that the cells will be shifted beyond the end of the array (the calling function
should be careful not to let that happen).

5. Write a function called matrixMultiplication this function get two matrices size 3X3 as
parameters then apply the multiplication and return the result matrix size 3x3
result = matrixMultiplication(matrix1, matrix2)
Matrix multiplication: https://www.mathsisfun.com/algebra/matrix-multiplying.html

6. Write a function that calculates Hanzalah’s age. Hanzalah was born in May 1938 he was
getting older year after year until May 1948 on his 10th birthday his age remained the same
until now he is still only 10 years old but in the start of 2027 he will continue growing again.
The function will take the month and year as integers parameters and return Hanzalah age.
age = calculateHanzalahAge(month,year)
example:
parameter: 5, 1947
return value: 9
—---
parameter: 1, 2024
return value: 10
—---
parameter: 6, 2027
return value: 10.5
—---
parameter: 5, 2028
return value: 11

7. Write two functions that get a message as a character array as a parameter then encrypt or
decrypt this message then return the result. the encryption is by adding 5 to the ascii code of
each character in the message and decryption is by subtracting 5
1 1 1 1 2 3 3 6 9
2 2 2 + 1 2 3 = 6 12 18
3 3 3 1 2 3 9 18 27
encryptedMessage = encryptMessages(message, size)
decryptedMessage = decryptMessages(encryptedMessage, size)
example: original message “Free2027” encrypted message “Kwjj757<”

8. Write a function that takes a 2d array of graph edges as a parameter and returns a 2d array
representing this graph. The graph contains 6 nodes (a,b,c,d,e,f).
graphMatrix = getGraphMatrix(edges, size)
Graph Matrix representation:
https://www.geeksforgeeks.org/graph-and-its-representations/
parameter to the function is a 2d array sizex3 and its size:
a b 5
a c 10
b d 4
f e 8
c f 2
return of the function is a 2d array size 6x6:
a  b c d e f
a  0 5 10 0 0 0
b  5 0 0 4 0 0
c  10 0 0 0 0 2
d  0 4 0 0 0 0
e  0 0 0 0 0 8
f  0 0 2 0 8 0
