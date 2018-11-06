""" Ricky Smith, Lab4A:  Calculator   - Moderate - , 10 Sep 2018 """
import time

# def multi function
def multi(x, y):
    return x * y

# def divide function
def divide(x, y):
    return x / y

# def power function
def power(x, y):
    return x ** y

# def fibonacci function (itterative version for fast result)
def fib(n):
    a = 0
    b = 1
    c = 0

    for i in range(n):
        if c < 100:
            a, b = b, a + b
            c += 1
    return a

# def factorial function
def fac(userNum):
    staticNum = userNum
    factNum = userNum

    # loops through while userNum is greater than 1 
    ## (userNum changes value by -1 each loop)
    while userNum > 1:
        userNum -= 1
        factNum *= userNum
    
    return factNum

# Input validation for integer
def inputInt(n):
    while True:
        try:
            inputNum = int(raw_input(n))
        except ValueError:
            print("ERROR:  Input is not a whole integer, try again.")
        else:
            return inputNum
            break

# Input validation for float
def inputFloat(n):
    while True:
        try:
            inputNum = float(raw_input(n))
        except ValueError:
            print("ERROR:  Input is not a float, try again.")
        else:
            return inputNum
            break

def printTop():
        print("\n******************************")
        print("*                            *")
        print("*                            *")
        # print("*                            *")

def printMid():
        print("*                            *")
        print("*                            *")

def printBot():
        print("*                            *")
        print("*                            *")
        print("******************************\n")

# variable evaluation function
def equals(n):
    """Handles the math for the equation when the user presses 
    equals
    """ 
    #The try except here catches if the user inputs anything that
    #wouldn't make sense IE putting letters in
    try: 
        total = str(eval(n)) 
        return total 
    except: 
        print("ERROR ERROR ERROR")

# hard sets input for while loop
input = "yes"
while input == "yes":
    print("\nSelect a calculation option from the following menu:")
    userInput = inputInt("1)  add two numbers\n2)  subtract two numbers\n"
                          "3)  multiply two numbers\n4)  divide two numbers\n"
                          "5)  power of two numbers\n6)  Factorial a number\n"
                          "7)  fibonacci a number\n8)  Variable Calculator\n")
    print("\n")

    # Addition
    if userInput == 1:
        x = inputFloat("What is the first number you would like to add?  ")
       
        y = inputFloat("What is the secound number you would like to add to "
                      "the previous number?  ")

        # uses lambda to calculate result vs defining a function
        z = lambda x, y: x+y

        # prints the "screen" with equation and result
        printTop()
        print("*{:8.2f}     + {:8.2f} =   *").format(x, y)
        printMid()
        print("*         {:8.2f}           *").format((z(x, y)))
        printBot()

    # Subtraction
    elif userInput == 2:
        x = inputFloat("What is the first number you would like to "
                       "subtract?  ")
        y = inputFloat("What is the secound number you would like to "
                       "subtract from the previous number?  ")

        # uses lambda to calculate result vs defining a function
        z = lambda x, y: x-y

        # prints the "screen" with equation and result
        printTop()
        print("*{:8.2f}     - {:8.2f} =   *").format(x, y)
        printMid()
        print("*         {:8.2f}           *").format((z(x, y)))
        printBot()

    # Multiplication
    elif userInput == 3:
        x = inputFloat("What is the first number you would like to "
                       "multiply?  ")
        y = inputFloat("What is the secound number you would like to "
                       "multiply to the previous number?  ")
        z = multi(x, y)

        # prints the "screen" with equation and result
        printTop()
        print("*{:8.2f}     x {:8.2f} =   *").format(x, y)
        printMid()
        print("*         {:8.2f}           *").format(z)
        printBot()

    # Division
    elif userInput == 4:
        x = inputFloat("What is the first number you would like to divide?  ")
        y = inputFloat("What is the secound number you would like to divide "
                      "into the previous number?  ")
        z = divide(x, y)

        # prints the "screen" with equation and result
        printTop()
        print("*{:8.2f}     / {:8.2f} =   *").format(x, y)
        printMid()
        print("*         {:8.2f}           *").format(z)
        printBot()

    # Exponents
    elif userInput == 5:
        x = inputFloat("What is the first number you would like get the "
                       "power of?  ")
        y = inputFloat("What is the secound number you would like the "
                      "previous number powered to?  ")
        z = power(x, y)

        # prints the "screen" with equation and result
        printTop()
        print("*{:8.2f}     ^ {:8.2f} =   *").format(x, y)
        printMid()
        print("*   {:15.2f}          *").format(z)
        printBot()

    # Factorial
    elif userInput == 6:
        x = inputInt("What is number do you want to Factor?  ")
        
        # Limits input for display purposes
        if x > 22:
            print("ERROR:  Input larger than 22\n")
            continue

        # prints the "screen" with equation and result
        printTop()
        print("*      Factor of  {:-4} =     *").format(x)
        printMid()
        print("*    {:-22}  *").format(fac(x))
        printBot()

    # Fibonacci
    elif userInput == 7:
        x = inputInt("What is number do you want to Fibonacci?  ")
        
        # Limits input for display purposes
        if x > 100:
            print("ERROR:  Input larger than 100\n")
            continue

        # prints the "screen" with equation and result
        printTop()
        print("*    Fibonacci of {:-4} =     *").format(x)
        printMid()
        print("*    {:-22}  *").format(fib(x))
        printBot()
    
    # Variable Math Calculation
    elif userInput == 8:
        expression = raw_input("Manually type your equation using only "
                               "numbers and the following operators:  \n"
                               " (),  +,  -,  *,  /,  **  :  \n")
        x = equals(expression)
        print(expression)
        print(x)

        # prints the "screen" with equation and result
        printTop()
        print("*    {:^22}  *").format(expression)
        printMid()
        print("*    ={:^22} *").format(x)
        printBot()
    # prints ERROR if selection 1 - 7 not chosen
    else:
        print("ERROR:  Invalid Selection")

    # promts and assigns variable to use if statements to reassign 
    ## 'input' for while loop
    anotherCalcualtion = raw_input("Would you like to perform another "
                                   "calculation? (yes/no)  ")
    if anotherCalcualtion == "yes":
        input = "yes"
    elif anotherCalcualtion == "YES":
        input = "yes"
    elif anotherCalcualtion == "y":
        input = "yes"
    elif anotherCalcualtion == "Y":
        input = "yes"
    else:
        input = "no"

# print out for poops and giggles
print("Thanks for visiting, we hope you come back soon!\n")
print("\tThis program will end in:\n")
time.sleep(.5)
print("\t\t3\n")
time.sleep(.9)
print("\t\t2\n")
time.sleep(.9)
print("\t\t1\n")
time.sleep(.9)
print("\t** Calculator Over **\n")