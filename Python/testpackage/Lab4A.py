"""
Ghozt
Lab 4A

Preview:
  ____    _    ____ ___ ___                                                    _____________________________________________
 / ___|  / \  / ___|_ _/ _ \                                                  |    |    |    |    |    |    |    |    |    |
| |     / _ \ \___ \| | | | |                                                 |    |    |    |    |    |    |    |    |    |
| |___ / ___ \ ___) | | |_| |                                                 |    |    |    |    |    |    |    |    |    |
 \____/_/   \_\____/___\___/                                                  |____|____|____|____|____|____|____|____|____|
________________________________________________________________________________________________________________________________
|\_____________________________________________________________________________________________________________________________/|
| |                                                                                                                           | |
| |                                                                                                                           | |
| |                                                                                                                           | |
| |                                                          ad88888ba     ,a888a,       ,a888a,     ad88888ba  88888888888   | |
| |                                                         d8"     "8b  ,8P"' `"Y8,   ,8P"' `"Y8,  d8"     "8b 88            | |
| |                                                         88       88 ,8P       Y8, ,8P       Y8, 88       88 88            | |
| |                                                         Y8a     a8P 88         88 88         88 Y8a     a8P 88  ____      | |
| |                                                          "Y8aaa8P"  88         88 88         88  "Y8aaa8P"  88a8PPPP8b,   | |
| |                                                          ,d8aaa8b,  88         88 88         88  ,d8aaa8b,  PP"     `8b   | |
| |                                                         d8"     "8b 88         88 88         88 d8"     "8b          88   | |
| |                                                         88       88 `8b       d8' `8b       d8' 88       88          88   | |
| |                                                         Y8a     a8P  `8ba, ,ad8'   `8ba, ,ad8'  Y8a     a8P Y8a     a8P   | |
| |                                                          "Y88888P"     "Y888P"       "Y888P"     "Y88888P"   "Y88888P"    | |
| |                                                                                                                           | |
|/_____________________________________________________________________________________________________________________________\|

Known issues: World comes crashing down if number is too long. Cant think of a clever solution :/
"""

import module
# Import algorithm package 
from algorithms import alg_mod as algs
# Import operations package 
from operations import op_mod as ops

global firstNumber
global operator
firstNumber = 0

# Initial startup displaying zero
module.display(firstNumber)

# Request 3 user input for first number
firstNumber = module.reqInput(" Please enter the first number: ")
# Call fancy display function to show the user input
module.display(firstNumber)

# Request 3 user input for operator
operator = module.reqInput2(" Please enter the operator(+,-,*,/,^,?,!): ")
module.display(operator)

# If ? or ! we do not need a second number, so we stop here
if operator == "?":
    module.display(algs.fib(int(firstNumber)))
elif operator == "!":
    module.display(ops.Other(int(firstNumber)))
# Was neither of those so we need a second number
else:
    # Request 3 user input for second number
    secondNumber = module.reqInput(" Please enter the second number: ")
    module.display(secondNumber)

    if operator == "+":
        module.display(ops.Addition(int(firstNumber), int(secondNumber)))
    elif operator == "-":
        module.display(ops.Subtraction(int(firstNumber), int(secondNumber)))
    elif operator == "/":
        module.display(ops.Division(int(firstNumber), int(secondNumber)))
    elif operator == "*":
        module.display(ops.Multiplication(int(firstNumber), int(secondNumber)))
    elif operator == "^":
        module.display(ops.Power(int(firstNumber), int(secondNumber)))
    else:
        print(" No clue what that is.")