# CS50 Course work
 #### The following are explanations of programs I have written as part of the CS50 and CS50P courses

 ## Prime calculator
 #### The prime calculator's purpose is to find the prime numbers within a range of numbers specified by the user.
 
### How to use:
***1.*** Input a number greater than 1 for the smallest number in the range (Minimum) and a number greater than the minimum for the largest number (Maximum).

***2.*** The program will print your answer in the terminal
### Program design:
***1.*** Collect a maximum and minimum value using 'do while' loops.

***2.*** I used a 'for' loop so the program would go through each number in the range.

***3.*** Within that 'for' loop there is an 'if' statement that contains a function I created called prime.

***4.*** The prime function is a boolean function that takes a whole number as input and gives true or false as an output. I have been able to apply this logic to the criteria of a prime number. I use two 'if' statements to find out if the number is 1, 2, or 3. If it's 1 the function returns false. If it's 2 or 3 the function is true. If the number isn't equal to either of these it goes onto a 'for' loop that uses modualo(%) to find out if each number is divisible by a number between 2 and but not including itself. If not it's returned as true and the number is printed in the terminal.

***5.*** The prime function is abstracted to the bottom of the page, where it's out of sight. I left a hint of the abstracted function at the top of the program so the computer is aware of it before it is physically written in the code.


 ## Mario
