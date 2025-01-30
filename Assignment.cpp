//problem 1
#include <iostream>
using namespace std;
int is_prime(int);
int main() {
int x ;
char choose ;
 while(true){
 cout<<" please enter a positive number"<< endl;
 cin>>x;     //taking a number from the user
 cout<< is_prime(x) ;
 cout<< endl<<" do you want to enter again "<<endl;
 cin>>choose;
 if(choose == 'y' || choose == 'Y')
 continue;
 else
 break;
 }
    return 0;
}

 // function to know the number is prime or not

int is_prime(int a)

{
    int count;
    if(a==1 || a<0 )
    return 0;
    else
    {
     for(int i =1 ; i<a ;i++)
           {
           if(a%i==0)
            count++ ;
           }
    }

if (count>1)
  return 0; // not prime number
else
  return 1; // prime number
}


/*      test case

 cout<< is print(4) // 0 means not prime number

 cout<< is print(5) // 1 means prime number

 cout<< is print(1) // 0 means not prime number

 cout<< is print(-45) // 0 means not prime number

 */


 //--------------------------------------------------------------------------------------------------


 //problem 2
 /*
 #include <iostream>
using namespace std;
//the following function should compare every character of each string and then return the minimum value
//the next function is to iterate through both arrays until a NUL cell is encountered
//and once finished it should return the number of matching cells
int number_of_matches(char arr1[], char arr2[] , int size1 , int size2) {
    int minLength;//a variable to store the minimum length of both arrays
    //to get the minimum size of both arrays
    if (size1<=size2) minLength = size1;
    else if (size1>=size2) minLength = size2;
    //we need to leave a room for the NUL cell
    size1+=1;
    size2+=1;
    arr1[size1]; arr2[size2];
    int count=0;
    //a loop to iterate through both arrays
    for (int i=0 ; i<minLength ; i++){
        //if the characters are the same continue counting cells otherwise return the number of matching cells
            arr1[i]==arr2[i] ? count++ : count ;
    }
    return count;
}

int main() {

    //asking the user to insert the sizes of both arrays
   cout<<"Please insert the size of the first array"<<endl;
   int size1;
   cin>>size1;
   cout<<"Please insert the size of the second array"<<endl;
   int size2;
   cin>>size2;
   char arr1[size1+1];
   char arr2[size2+1];
   cout<<"Now, insert the content of the first array"<<endl;
   //a for loop to get the content of the first array
   for(int i=0 ; i<size1 ; i++){
      cin>>arr1[i];
   }
   cout<<"Now, insert the content of the second array"<<endl;
   //for loop to get the content of the second array
   for(int i=0 ; i<size2 ; i++){
      cin>>arr2[i];
   }
   int matches;
   cout<<"the number of matching characters is: ";
   matches = number_of_matches(arr1,arr2,size1,size2);
   cout<<matches<<endl;
    return 0;
}
/*Test Case1:
Please insert the size of the first array
5
Please insert the size of the second array
4
Now, insert the content of the first array
b o a s t
Now, insert the content of the second array
b o a t
the number of matching characters is: 3
Test Case 2:
Please insert the size of the first array
5
Please insert the size of the second array
5
Now, insert the content of the first array
l i s a h
Now, insert the content of the second array
j e n n y
the number of matching characters is: 0
*/



//------------------------------------------------------------------------------------------------------------

//problem 3
/*#include <iostream>
using namespace std;
int main() {
    int x;
    char choose ;
    choose = 'y';
    while (choose == 'y' || choose == 'Y')
    {
    cout <<" please enter a positive integer ";
    cin>>x ;
    if(x<=0)
      cout<<x<<" is not a postive integer " << endl ;
    else  // get all possible divisors
    for(int k=x ; k<= x; k--)
      {
       if(k<=0)
          break;
       if (x%k==0)
          cout<<k<<endl;
      }
          cout<<"would you like to see the divisor of another integer (y/n)"<< endl;
          cin>>choose;
          if(choose =='y' || choose == 'Y')
          continue;
          if(choose =='n' || choose == 'N')
          break;
           while ( choose != 'y'&& choose != 'Y'&& choose != 'n'&& choose != 'N')
           {
           cout<<"please enter y for yes & n for no" << endl;
           cout<<"would you like to see the divisor of another integer (y/n)" << endl ;
           cin>> choose;
           }



    }
    return 0;
}

/*            test case
please enter a postive number  24
24
12
8
6
4
3
2
1
would you like to see the divisor of another integer (y/n) y
 please enter a postive number  -32

 -32  is not a postive integer

 would you like to see the divisor of another integer (y/n) y
 please enter a postive number  0

  0 is not a postive integer

 would you like to see the divisor of another integer (y/n) b

  please enter y for yes & n for no

would you like to see the divisor of another integer (y/n) n
 */


 //----------------------------------------------------------------------------------------------

 //problem 4

 /*
 #include <iostream>
using namespace std;
//function that shifts elements to the right in an array
int shift_right(float arr[], int size, int left , int right , int distance)
{
    //The function should make sure that left is less than or equal to right and returns 1 to indicate an error
    // The function should make sure that distance is greater than zero and returns 1 to indicate an error
   if (left > right || distance<=0) return 1;
   else{
   // a for loop to indicate to perform the shifting operation
      for (int i = right; i >= left; i--) {
          int newIndex = i + distance;
          if (newIndex < size) {
            arr[newIndex] = arr[i];
        }
   }
   // a loop to fill empty cells with negative one as a placeholder
      for(int i = left ; i< left+distance; i++){
           if (i<size) arr[i]= -1;
   }
  }
}
int main()
{
    //asking the user to insert the size and content of the array
   cout<<"Please insert the size of the array"<<endl;
   int size;
   cin>>size;
   cout<<"Now insert the content of the array and make sure it is with a decimal point"<<endl;
   float arr[size];
   // a for loop to get the content of the array from the user
   for(int i=0; i<size ; i++){
      cin>>arr[i];
   }
   cout<<"Enter left, right, distance values respectively "<<endl;
   int left,right,distance;
   cin>>left>>right>>distance;
   //calling the shifting function
   int result= shift_right(arr, size, left, right, distance);
   // in case there is an error
   if (result == 1) {
        cout << "Error: Invalid input" << endl;
        return 1; // Return 1 to indicate error
    }
    //to display the output
   for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
   }

    return 0;
}
/*test case 1:
Please insert the size of the array
11
Now insert the content of the array
5.8 2.6 9.1 3.4 7.0 5.1 8.8 0.3 -4.1 8.0 2.7
Enter left, right, distance values respectively
3 7 2
5.8 2.6 9.1 -1 -1 3.4 7 5.1 8.8 0.3 2.7
test case 2:
Please insert the size of the array
5
Now insert the content of the array and make sure it is with a decimal point
1.0 2.0 3.0 4.0 5.0
Enter left, right, distance values respectively
2 3 -1
Error: Invalid input
test case 3:
Please insert the size of the array
6
Now insert the content of the array and make sure it is with a decimal point
2.0 4.0 6.0 8.0 10.0 12.5
Enter left, right, distance values respectively
3 4 2
2 4 6 -1 -1 8
*/


//----------------------------------------------------------------------------------------------------

//problem 5

/* test cases:
Enter values for the first 3x3 matrix:
position (0, 0): 1
position (0, 1): 4
position (0, 2): 6
position (1, 0): 2
position (1, 1): 3
position (1, 2): 7
position (2, 0): 1
position (2, 1): 8
position (2, 2): 0
Enter values for the second 3x3 matrix:
position (0, 0): 2
position (0, 1): 4
position (0, 2): 5
position (1, 0): 7
position (1, 1): 8
position (1, 2): 1
position (2, 0): 2
position (2, 1): 4
position (2, 2): 5
Matrix 1:
1 4 6
2 3 7
1 8 0
Matrix 2:
2 4 5
7 8 1
2 4 5
Final Matrix:
42 60 39
39 60 48
58 68 13
*//*
#include <iostream>
using namespace std;
void multiply(int mat1[3][3], int mat2[3][3], int final[3][3]);
void display(int matrix[3][3]);
int main() {
    int matrix1[3][3], matrix2[3][3], final[3][3];
    // Taking input for the first matrix
    cout << "Enter values for the first 3x3 matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "position (" << i << ", " << j << "): ";
            cin >> matrix1[i][j];
        }
    }
    // Taking input for the second one
    cout << "Enter values for the second 3x3 matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "position (" << i << ", " << j << "): ";
            cin >> matrix2[i][j];
        }
    }
    multiply(matrix1, matrix2, final);   // multiplying
    // Displaying the matrices
    cout << "Matrix 1:" << endl;
    display(matrix1);
    cout << "Matrix 2:" << endl;
    display(matrix2);
    cout << "Final Matrix:" << endl;
    display(final);
    return 0;
}
// function of muliplication
void multiply(int mat1[3][3], int mat2[3][3], int final[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            final[i][j] = 0;
            for (int k = 0; k < 3; ++k) {
                final[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
// display of the matrix
void display(int matrix[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}


//----------------------------------------------------------------------------------------------------

//problem 6
/*test cases:
1) Enter month:
2
Enter year:
1948
Age= 10 years
2) Enter month:
7
Enter year:
1943
Age= 5 years
3) Enter month:
6
Enter year:
2028
Age= 11.5 years *//*
# include <iostream>
using namespace std;
float calculateHanzalahAge(float month, int year);
int main (){
    float age = 0;
    float month;
    int year;
    //taking user's input
    cout<<"Enter month: "<<endl;
    cin>> month;
    cout<<"Enter year: "<<endl;
    cin>> year;
    //using function to calculate age and displaying it
    age = calculateHanzalahAge(month, year);
    cout<<"Age= "<<age<<" years";
     return 0;
}
//Function declaration
float calculateHanzalahAge(float month, int year){
    float age = 0;
    if (year<=1948 && year>=1938)//to count age from 0 to 10
    {
        if (month=5)
    age++;
    else if (month>5)
    age= 1+((month-5)/12);
    else age = 0;
    age += year - 1939;
    }
    else if (year<2027 && year>=1949) //to stop counting years
    age = 10;
    else if (year>=2027) //to count again after 2027
    {
     if (month>1) age= month/12.0;
     else age =0;
    age += 10+(year - 2027);
    }
    else {
    cout<<"year invalid"<<endl;
    age = 0;
    }
    return age;
}

//-----------------------------------------------------------------------------------------------------------------------------

//problem 7
/*
#include <iostream>
using namespace std;
void encryptMessage(char* message, int size) {
    for (int i = 0; i < size; i++) {
        message[i] += 5;
    }
}

void decryptMessage(char* message, int size) {
    for (int i = 0; i < size; i++) {
        message[i] -= 5; // Subtract 5 from the ASCII code
    }
}

int main() {
    const int SIZE = 100;
    char message[SIZE];
    int size = 0;

    cout << "Enter the message: ";
    cin.getline(message, SIZE, '\n');

    // Calculate the size of the message
    for (int i = 0; message[i] != '\0'; i++) {
        size++;
    }

    cout << "Original Message: " << message << endl;

    encryptMessage(message, size);
    cout << "Encrypted Message: " << message << endl;

    decryptMessage(message, size);
    decryptMessage(message, size);
    cout << "Decrypted Message: " << message << endl;

    return 0;
}

add comments to explain every line
*/

/* test cases :
Original Message: free2027
Encrypted Message: kwwj757c
Original Message: happy
Encrypted Message: mfuud
Original Message: hello
Encrypted Message: mjqqt
*/

//--------------------------------------------------------------------------------------------------------

//problem 8

/*#include <iostream>

using namespace std;
int powerfunction(int m, int length) {
    int z = 1;
    for (int i = 0; i < length; ++i)
        z *= m;
    return z;
}

// Function to convert a string to an integer
int sizefunction(string s) {
    int length = s.size() - 1;
    int answer = 0;
    for (int i = 0; i < s.size(); ++i) {
        int num = s[i] - '0';
        num *= (powerfunction(10, length));
        answer += num;
        --length;
    }
    return answer;
}

// Function to create the adjacency matrix from user input
void arrayfunction(int size) {
    int array2d[size][3];
    int matrix[6][6] = {0}; // Initialize the adjacency matrix with zeros

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < 3; ++j) {
            string s = "";
            cin >> s;
            if (s == "a")
                array2d[i][j] = 0;
            else if (s == "b")
                array2d[i][j] = 1;
            else if (s == "c")
                array2d[i][j] = 2;
            else if (s == "d")
                array2d[i][j] = 3;
            else if (s == "e")
                array2d[i][j] = 4;
            else if (s == "f")
                array2d[i][j] = 5;
            else {
                // Convert non-letter input to an integer
                array2d[i][j] = sizefunction(s);
            }
        }
    }

    // Populate the adjacency matrix based on user input
    for (int i = 0; i < size; ++i) {
        matrix[array2d[i][0]][array2d[i][1]] = array2d[i][2];
        matrix[array2d[i][1]][array2d[i][0]] = array2d[i][2];
    }

    // Print the adjacency matrix
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
}

int main() {
    cout << "Enter the size: ";
    int size = 0;
    cin >> size;
    arrayfunction(size);
    return 0;
}

/*
test case : enter 5
enter :
a b 5
a c 10
b d 4
f e 8
c f 2

the output :
0 5 10 0 0 0
5 0 0 4 0 0
10 0 0 0 0 2
0 4 0 0 0 0
0 0 0 0 0 8
0 0 2 0 8 0
*/
