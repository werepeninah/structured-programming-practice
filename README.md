# Structured Programming Portfolio

## Exercise 1 - Basic Output
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.16
What the program does: The program asks the user for two integers and then displays their sum, product, difference, quotient, and remainder.
Concepts used: printf, scanf, integer variables, arithmetic operators
How it works: The program declares all integer variables in a single statement, reads two user inputs using scanf, calculates each arithmetic result, and outputs the values with clear descriptive labels.

Example run:
Enter an integer: 10
Enter another integer: 3
Sum: 13
Product: 30
Difference: 7
Quotient: 3
Remainder: 1


## Exercise 2 - Input, Processing, and Output
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.20
What the program does: The program asks the user for a total time in seconds and then converts it into hours, minutes, and remaining seconds.
Concepts used: scanf, integer division, modulus operator
How it works: The program prompts for total seconds, computes hours using integer division by 3600, calculates remaining minutes using remainder division by 3600 divided by 60, determines remaining seconds with modulus 60, and prints the result in a single line.

Example run:
Enter total time elapsed in seconds: 3665
1 hours:1 minutes:5 seconds


## Exercise 3 - Decision Making
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.22
What the program does: The program asks the user to input an integer and the determines whether the integer is an even or odd number.
Concepts used: if...else statement, modulus operator, relational operators
How it works: The program reads an integer input and evaluates it using the modulus operator inside an if...else condition; if the remainder is zero, then it confirms that the integer is an even number else an odd number

Example run:
Enter an integer: 15
15 is an odd integer


## Exercise 4 - Basic Loop
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.11
What the program does: The program determines the sum of all multiples of 7 between 1 to 100
Concepts used: for loop, printf
How it works: The loop starts from 7 and increments by 7 to a multiple of 7 less than 100 and them incrents all the values.

Example run:
The sum of all multiples of 7 from 1 to 100 is 735


## Exercise 5 - Loop with Calculation
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.10
What the program does: The program converts a range of Celsuis temperatures from 30 degrees to 50 degrees into their equivalent fahrenheitvalues and prints them as a formatted table.
Concepts used:for loop, floating-point variables, arithmetic conversion formula, formatted tab-separated output
How it works: A for loop starts with celsius set to 30 and increments by 1 until reaching 50. During each iteration, it applies the conversion formula fahrenheit = (celsius * 9 / 5) + 32 and prints both values formatted to two decimal places.

Example run:
--------------------
Celsius	Fahrenheit
--------------------
30.00	86.00
31.00	87.80
32.00	89.60
...
50.00	122.00

## Exercise 6 - Loop with User Input
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.9
What the program does: The program asks the user how many integers they want to enter, prompts them for each value in sequence using a loop, and then displays the total sum and average of those numbers.
Concepts used: for loop, single-line integer declaration, running total accumulator, average calculation
How it works: The program reads the total count into total_numbers, runs a for loop from 1 up to total_numbers to accept inputs, accumulates the total in sum using sum += value, and divides sum by total_numbers to compute the average.

Example run:
Enter the number of integers to process: 3
Enter value 1: 10
Enter value 2: 20
Enter value 3: 30


## Exercise 7 - Loop with Decision
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.12
What the program does: The program automatically finds and displays all prime numbers between 1 and 100 using nested loops and conditional decision-making logic.
Concepts used: nested for loops,  modulus operator, if decision statement
How it works: An outer for loop iterates through numbers 2 to 100, setting a flag is_prime to 1 for each. An inner for loop checks if the number is divisible by any integer from 2 up to num - 1; if divisible, is_prime is set to 0. If is_prime remains 1, the number is printed as prime.

Example run:
Prime numbers between 1 and 100:
2
3
5
7
11
13
...
97

## Exercise 8 - Interactive Program
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.19 / Chapter 5
What the program does: The program asks the user for item numbers and quantities at a campus stationery shop and then keeps a running bill total until the user chooses to checkout.
Concepts used: while loop, switch statement, input validation, running total accumulator
How it works: The program prints a product menu, reads user item choices inside a while loop, uses a switch statement to retrieve unit prices, validates item numbers and quantities, updates the total bill, and displays final totals upon entering 0 to exit.

Example run:
=====================================
WELCOME TO THE CAMPUS STATIONERY SHOP
=====================================
1. Exercise book   - UGX 2500
2. Pen             - UGX 500
3. Pencil          - UGX 300
4. Ruler           - UGX 1000
5. Eraser          - UGX 200
0. Checkout & Exit
Enter item number: 1
How many would you like? 2
Running total: UGX 5000

Enter item number: 0
Number of purchases made: 1
TOTAL DUE: UGX 5000
Thank you for shopping with us!
