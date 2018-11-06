"""Ghozt
Lab 3C funhouse
"""
# Correct path through funhouse
path = (1, 3, 2, 3, 1)
count = 0

"""die()
    Purpose: Kill player
    Arguements: a - wrong door int
"""
def die(a):
    print "             _,.-------.,_"
    print "          ,;~'             '~;,"
    print "        ,;                     ;,"
    print "       ;                         ;"
    print "      ,'                         ',"
    print "     ,;                           ;,"
    print "     ; ;      .           .      ; ;"
    print "     | ;   ______       ______   ; |"
    print "     |  `/~\"     \~\" . \"\~     \"~\' |"
    print "     |  ~  ,-~~~^~, | ,~^~~~-,  ~  |"
    print "      |   |        }:{        |   |"
    print "      |   l       / | \       !   |"
    print "      .~  (__,.--\" .^. \"--.,__)  ~."
    print "      |     ---;' / | \ `;---     |"
    print "       \__.       \/^\/       .__/"
    print "        V| \                 / |V"
    print "         | |T~\___!___!___/~T| |"
    print "         | |`IIII_I_I_I_IIII'| |"
    print "         |  \,III I I I III,/  |"
    print "          \   `~~~~~~~~~~'    /"
    print "            \   .       .   /  "  
    print "              \.    ^    ./"
    print "                ^~~~^~~~^"

    if a == 1:
        print "\nYou fall to your death."
    elif a == 2:
        print "\n*ENTIRE BUILDING EXPLODES*"
    elif a == 3:
        print "\nYou believed in something so much that you sacrificed your own life."
    else:
    	print "You tripped on your own shoelace and impaled yourself on a spoon."

    print "\nGame over. Obviously."
    # Quit game
    quit()

# Print welcome
print "Welcome to Fun House!"

# loop through rooms in correct path
for i in path:
    print("[Room #%d] Choose door 1, 2, or 3..." % (count + 1))
    input = raw_input("> ")
    if input == "1":
        if path[count] == 1:
            print "Door opened safely.\n"
        else:
            die(1)
    elif input == "2":
        if path[count] == 2:
            print "Door opened safely.\n"
        else:
            die(2)
    elif input == "3":
        if path[count] == 3:
            print "Door opened safely.\n"
        else:
            die(3)
    else:
        die(4)

    count += 1

print "YOU WIN!!!!!.\n"