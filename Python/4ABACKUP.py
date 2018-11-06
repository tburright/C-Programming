"""
Ghozt
Lab 4A
"""
from os import system

nOne = ['    88 ',
	    '  ,d88 ',
	    '888888 ',
	    '    88 ',
	    '    88 ',
	    '    88 ',
	    '    88 ',
	    '    88 ',
	    '    88 ', 
	    '    88 '
 ]

nTwo = [' ad888888b, ',
	    'd8"     "88 ',
	    '         88 ',
	    '        d8P ',
	    '       a8P  ',
	    '     ,d8P   ',
	    '   ,d8P\'    ',
	    ' ,d8P\'      ',
	    'a88"        ', 
	    '88888888888 '
 ]

nThree = [' ad888888b, ',
          'd8"     "88 ',
          '        a88 ',
	      '       ,88P ',
	      '     aad8"  ',
	      '     ""Y8,  ',
	      '       `88b ',
	      '        "88 ',
	      'Y8,     a88 ', 
	      ' "Y888888P\' '
 ]

nFour = ['        a8   ',
	     '      ,d88   ',
	     '     a8P88   ',
	     '   ,d8" 88   ',
	     ',d8"    88   ',
	     '888888888888 ',
	     '        88   ',
	     '        88   ',
	     '        88   ', 
	     '        88   '
 ]

nFive = ['88888888888 ',
	    '88          ',
	    '88          ',
	    '88  ____    ',
	    '88a8PPPP8b, ',
	    'PP"     `8b ',
	    '         88 ',
	    '         88 ',
	    'Y8a     a8P ', 
	    ' "Y88888P"  '
 ]

nSix = ['  ad8888ba, ',
	    ' 8P\'    "Y8 ',
	    'd8          ',
	    '88          ',
	    '88,dd888bb, ',
	    '88P\'    `8b ',
	    '88       88 ',
	    '88       88 ',
	    '88a     a8P ', 
	    ' "Y88888P"  '
 ]

nSevem = ['888888888888 ',
	      '       ,88\'  ',
	      '     ,88"    ',
	      '    ,88\'     ',
	      ' aaa888aa    ',
	      '  ,8P        ',
	      ' ,88         ',
	      ' 88\'         ',
	      ' 88          ', 
	      ' 88          '
 ]

nEight = [' ad88888ba  ',
	      'd8"     "8b ',
	      '88       88 ',
	      'Y8a     a8P ',
	      ' "Y8aaa8P"  ',
	      ' ,d8"""8b,  ',
	      'd8"     "8b ',
	      '88       88 ', 
	      'Y8a     a8P ',
	      ' "Y88888P"  '
 ]

nNine = [' ad88888ba  ',
	     'd8"     "88 ',
	     '88       88 ',
	     '88       88 ',
	     'Y8,    ,d88 ',
	     ' "PPPPPP"88 ',
	     '         88 ',
	     '         8P ',
	     '8b,    a8P  ', 
	     '`"Y8888P\'   '
 ]

nZero = ['   ,a888a,    ',
	     ' ,8P"\' `"Y8,  ',
	     ',8P       Y8, ',
	     '88         88 ',
	     '88         88 ',
	     '88         88 ',
	     '88         88 ',
	     '`8b       d8\' ',
	     ' `8ba, ,ad8\'  ', 
	     '   "Y888P"    '
 ]

oPlus = ['              ',
	     '              ',
	     '     888      ',
	     '     888      ',
	     '     888      ',
	     '8888888888888 ',
	     '8888888888888 ',
	     '     888      ',
	     '     888      ', 
	     '     888      '
]

oMin = ['         ',
	    '         ',
	    '         ',
	    '         ',
	    '         ',
	    '88888888 ',
	    '88888888 ',
	    '         ',
	    '         ', 
	    '         '
]

oMul = ['     .     ',
	    '    88>    ',
	    ' 88c?R.88> ',
	    ' \'"?kkT?"  ',
	    ' \'" 88>\'"  ',
	    '   \'"      ',
	    '           ',
	    '           ',
	    '           ', 
	    '           '
]

oFib = ['    ...     ',
	    ' u*""888b.  ',
	    'J88N. 8888r ',
	    '\'888 .8888> ',
	    ' \'"  8888%  ',
	    '    88*"    ',
	    '   48  4    ',
	    '   \'h.u*    ',
	    '     .,     ', 
	    '     88     '
]

oSqr = ['            ',
	    '    oee     ',
	    '   d888N    ',
	    '  x88"88b   ',
	    ' .88F \'88L  ',
	    ' 88P   ?88r ',
	    '@8R     %8R ',
	    '            ',
	    '            ', 
	    '            '
]

oDiv = ['     88\' ',
	    '    :88  ',
	    '   .88F  ',
	    '   :88\'  ',
	    '   88F   ',
	    '  .88\'   ',
	    '  d8F    ',
	    ' .88     ',
	    ' d8F     ', 
	    ':88      '
]

oOth = ['  ..   ',
	    ' 888B. ',
	    '48888E ',
	    '\'8888\' ',
	    ' Y88F  ',
	    ' \'88   ',
	    '  8F   ',
	    '  4    ',
	    '  .,   ', 
	    '  88   '
]


#                                               ...                                     ..   
#                                            u*""888b.         oee             !8F     888B. 
#                                  .        J88N. 8888r       d888N            88'    48888E 
#                                 88>       '888 .8888>      x88"88b          :88     '8888' 
#      888                     88c?R.88>     '"  8888%      .88F '88L        .88F      Y88F  
#      888                     '"?kkT?"         88*"        88P   ?88r       :88'      '88   
#      888                     88P:k"88>       48  4       @8R     %8R       88F        8F   
# 8888888888888                '" 88>'"        'h.u*                        .88'        4    
# 8888888888888    88888888       '"             .                          d8F         .    
#      888         88888888                     d8b.                       .88         u8N.  
#      888                                     "888%                       d8F        "*88%  
#      888                                       %                        :88           ""  


#     88  ad888888b,  ad888888b,         a8   88888888888   ad8888ba, 888888888888  ad88888ba   ad88888ba     ,a888a,    
#   ,d88 d8"     "88 d8"     "88       ,d88   88           8P'    "Y8        ,88'  d8"     "8b d8"     "88  ,8P"' `"Y8,  
# 888888          88         a88      a8P88   88          d8               ,88"    88       88 88       88 ,8P       Y8, 
#     88         d8P        ,88P    ,d8" 88   88  ____    88              ,88'     Y8a     a8P 88       88 88         88 
#     88        a8P       aad8"    a8P'  88   88a8PPPP8b, 88,dd888bb,  aaa888aa     "Y8aaa8P"  Y8,    ,d88 88         88 
#     88      ,d8P        ""Y8,  ,d8"    88   PP"     `8b 88P'    `8b   ,8P         ,d8"""8b,   "PPPPPP"88 88         88 
#     88    ,d8P'           `88b 888888888888          88 88       88  ,88         d8"     "8b          88 88         88 
#     88  ,d8P'              "88         88            88 88       88  88'         88       88          8P `8b       d8' 
#     88 a88"        Y8,     a88         88   Y8a     a8P 88a     a8P  88          Y8a     a8P 8b,    a8P   `8ba, ,ad8'  
#     88 88888888888  "Y888888P'         88    "Y88888P"   "Y88888P"   88           "Y88888P"  `"Y8888P'      "Y888P"    

def Addition(x, y):
    return x + y

def Subtraction(x, y):
    return x - y
    
def Division(x, y):
    return x / y
    
Multiplication = lambda x, y: x * y

Power = lambda x, y: x ** y

def fib(n):
    if n == 1:
        return 1
    elif n == 0:
        return 0
    else:     
        return fib(n-1) + fib(n-2)

def reqInput(text):

    while True:
        number = raw_input(text)
        try:
            float(number)
            break
        except ValueError:
            print("ERROR")
    return number


# define our clear function 
def clear(): 
    system('cls') 

def printNumber(n, line): 
    myString = ""
    for i in str(n):
    	if i == "0":
    		myString += nZero[line]
    	elif i == "1":
    		myString += nOne[line]
        elif i == "2":
    		myString += nTwo[line]
    	elif i == "3":
    		myString += nThree[line]
    	elif i == "4":
    		myString += nFour[line]
    	elif i == "5":
    		myString += nFive[line]
    	elif i == "6":
    		myString += nSix[line]
    	elif i == "7":
    		myString += nSeven[line]
    	elif i == "8":
    		myString += nEight[line]
    	elif i == "9":
    		myString += nNine[line]
        elif i == "+":
    		myString += oPlus[line]
        elif i == "-":
    		myString += oMin[line]
    	elif i == "*":
    		myString += oMul[line]
    	elif i == "/":
    		myString += oDiv[line]
    	elif i == "^":
    		myString += oSqr[line]
    	elif i == "?":
    		myString += oFib[line]
    	elif i == "!":
    		myString += oOth[line]

    newString = ""
    for i in xrange(0, (120 - len(myString))):
        newString += " "
    newString += myString
    print newString,

def display(num):
    clear()

    print ("  ____    _    ____ ___ ___  ")
    print (" / ___|  / \  / ___|_ _/ _ \ ")
    print ("| |     / _ \ \___ \| | | | |")
    print ("| |___ / ___ \ ___) | | |_| |")
    print (" \____/_/   \_\____/___\___/ ")
    print("________________________________________________________________________________________________________________________________")
    print("|\_____________________________________________________________________________________________________________________________/|")
    print("| |                                                                                                                           | |")
    print("| |                                                                                                                           | |")
    print("| |                                                                                                                           | |")
    print("| |"),
    printNumber(num, 0)
    print(" | |")
    print("| |"), 
    printNumber(num, 1)
    print(" | |")
    print("| |"),
    printNumber(num, 2)
    print(" | |")
    print("| |"),
    printNumber(num, 3)
    print(" | |")
    print("| |"),
    printNumber(num, 4)
    print(" | |")
    print("| |"),
    printNumber(num, 5)
    print(" | |")
    print("| |"),
    printNumber(num, 6)
    print(" | |")
    print("| |"),
    printNumber(num, 7)
    print(" | |")
    print("| |"),
    printNumber(num, 8)
    print(" | |")
    print("| |"),
    printNumber(num, 9)
    print(" | |")
    print("| |                                                                                                                           | |")
    print("|/_____________________________________________________________________________________________________________________________\|")

# Initial startup displaying zero
display(0)

# Request 3 user input for first number
firstNumber = reqInput("Please enter the first number: ")
display(firstNumber)

# Request 3 user input for operator
operator = raw_input("Please enter the operator(+,-,*,/,^,?,!): ")


if operator == "?":
    display(fib(int(firstNumber)))
elif operator == "!":
    display(Power(int(firstNumber), int(secondNumber)))
else:
    # Request 3 user input for second number
    secondNumber = reqInput("Please enter the first number: ")
    display(secondNumber)

    if operator == "+":
        display(Addition(int(firstNumber), int(secondNumber)))
    elif operator == "-":
        display(Subtraction(int(firstNumber), int(secondNumber)))
    elif operator == "/":
        display(Division(int(firstNumber), int(secondNumber)))
    elif operator == "*":
        display(Multiplication(int(firstNumber), int(secondNumber)))
    elif operator == "^":
        display(Power(int(firstNumber), int(secondNumber)))
    else:
        print("No clue what that is.")