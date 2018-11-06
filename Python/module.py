from os import system

# Declare fancy number lists
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
nSeven = ['888888888888 ',
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
        '  "?kkT?"  ',
        ' \'" 88>\'"  ',
        '    \'"     ',
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
nPer= ['   ',
       '   ',
       '   ',
       '   ',
       '   ',
       '   ',
       '   ',
       '   ',
       '   ', 
       ' O '
       ]

# Really intense and super advanced function used for addition
def Addition(x, y):
    return round((x + .0) + (y + .0), 2)

# Function to subtract y from x
def Subtraction(x, y):
    return round(x - y, 2)

# Divides x by y
def Division(x, y):
    return round((x + .0) / (y + .0), 2)

# Lamb Duh used for mulitplication
Multiplication = lambda x, y: round(x * y, 2)

# Lamb Duh used for moarrr powerrrr
Power = lambda x, y: round(x ** y, 2)

# Fibiniatxchstii sequence
def fib(n):
    if n == 1:
        return 1
    elif n == 0:
        return 0
    else:     
        return fib(n-1) + fib(n-2)

# Super 1337 algorithm  
def Other(n):
    n = round((n + 80085) / 1337, 2)
    return n

# Input validation and switches to float
def reqInput(text):
    while True:
        number = raw_input(text)
        try:
            float(number)
            break
        except ValueError:
            # Clear screen to keep it pretty
            clear()
            # Now we need to print the display again...
            display(operator)
    return number

# Input validation for operator
def reqInput2(text):
    # Loop to verify that we got what we want
    while True:
        print(" Avaolable operators:")
        print " + (Addition)"
        print " - (Subtraction)"
        print " / (Division)"
        print " * (Multiplication)"
        print " ^ (Power)"
        print " ? (Fibiniaxchsshiiii)"
        print " ! (Mystery)"

        operator = raw_input(text)
        if operator == "+":
            break
        elif operator == "-":
            break
        elif operator == "*":
            break
        elif operator == "/":
            break
        elif operator == "^":
            break
        elif operator == "?":
            break
        elif operator == "!":
            break
        else:
            # Clear screen to keep it pretty
            clear()
            # Now we need to print the display again...
            display(firstNumber)
    return operator

# Function to clear the screen 
def clear(): 
    system('cls') 

# Fancy print ascii numbers/operators line by line
def printNumber(n, line): 
    myString = ""
    newString = ""
    # What number/operator do they want to print?
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
        elif i == ".":
            myString += nPer[line]

    # Need to add dynamic padding to adjust for number length
    for i in xrange(0, (120 - len(myString))):
        newString += " "
    newString += myString
    print newString,

# Super fancy function to display our screen and numbers
def display(num):
    clear()

    # Safety to check if number will go off screen
    if len(str(num)) > 9:
        print " (Number too long to display)"
        num = "??????????"

    # PEP8 </3 ASCII :(
    print ("  ____    _    ____ ___ ___                                                    _____________________________________________")
    print (" / ___|  / \  / ___|_ _/ _ \                                                  |    |    |    |    |    |    |    |    |    |")
    print ("| |     / _ \ \___ \| | | | |                                                 |    |    |    |    |    |    |    |    |    |")
    print ("| |___ / ___ \ ___) | | |_| |                                                 |    |    |    |    |    |    |    |    |    |")
    print (" \____/_/   \_\____/___\___/                                                  |____|____|____|____|____|____|____|____|____|")
    print("________________________________________________________________________________________________________________________________")
    print("|\_____________________________________________________________________________________________________________________________/|")
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