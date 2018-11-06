"""
Ghozt
MAdLibs
"""
# Banks of wordsssss
verbs_List = ["schleem", "look", "use", "work", "call", "try", \
              "ask", "need", "seem", "lick", "help", "talk", "turn", \
              "start", "play", "run", "move", "like", "live", "believe", \
              "provide", "stand", "pay", "continue", "lead", "change", \
              "follow", "stop", "allow", "open"]
verbing_List = ["schleeming", "looking", "useing", "working", "calling", "trying", \
              "asking", "needing", "seeming", "licking", "helping", "talking", "turning", \
              "starting", "playing", "running", "moving", "liking", "living", "believing", \
              "providing", "standing", "paying", "continuing", "leading", "changing", \
              "following", "stoping", "allowing", "opening"]
noun_List = [ "schleem", "map", "boy", "family", "day", "man", "thing", \
              "woman", "life", "child", "world", "school", "state", "family", \
              "student", "group", "meat", "problem", "hand", "part", \
              "place", "case", "week", "company", "system", "program", \
              "question", "work", "government", "number"]
parts_List = [ "arm", "leg", "wrist", "head", "knee", "lap rocket", "food", \
               "toe", "frank n' beans", "clam hammer", "finger", "elbow", \
               "chin", "jaw", "anus", "back", "head", "shoulder"]
adverb_List = [ "quick", "careful", "silent", "down", "always", "long", \
                "ever", "little", "nearly", "directly", "strong", "alone", \
                "instead", "best", "that", "close", "ahead", "fast", "rather", \
                "exactly", "usually", "before", "up", "well", "only", "never", \
                "most", "over", "again", "off"]
adjective_List = [ "schleem", "green", "cute", "squishy", "hard", "soft", \
                   "rough", "red", "smelly", "long", "floppy", "long", "easy", \
                   "special", "full", "huge", "dark", "different", "American", \
                   "strong", "full", "easy", "special", "red", "open", "foreign", \
                   "hot", "dead", "happy", "blue"]
item_List = [ "plumbus", "baseball bat", "pillow", "rock", "stick", "ball", \
              "beer bottle", "computer", "baby bottle", "knife", "floppy disk", \
              "kitten", "tin can", "iphone", "bike", "book", "plumbus", \
              "Chik-fil-a sammich", "raw egg", "cheeseburger", 
              "broken iphone charger", "Starbucks espresso", "keyboard", \
              "10mm socket", "sword", "rubber ducky", "couch", "table", \
              "fluffy unicorn", "axe"]
liquid_List = [ "schleem", "vodka", "beer", "urine", "bleach", "gasoline", \
                "oil", "blood", "juice", "saliva", "fresh blood from a virgin", \
                "water", "Mountain Dew", "whisky", "rum", "milk", "paint"]
container_List = [ "canteen", "box", "empty skull", "rusty bucket", "cup", "leather sack", \
                "grocery bag", "safe", "backpack", "saliva", "fresh blood from a virgin", \
                "water", "Mountain Dew", "whisky", "rum", "milk", "paint"]

"""
request()
    Purpose: Allow user to request noun, verb, etc.
    Arguements: a - a string in reference to what type of word you want.
"""	
def request(a):
    if a == "boy":
        boy = raw_input("Enter a boy's name: ")
        return boy
    elif a == "girl":
        girl = raw_input("Enter a girl's name: ")
        return girl
    elif a == "noun":
    	printIt(noun_List)
        noun = noun_List[int(raw_input("Select a noun using the numbers provided: ")) - 1]
        return noun
    elif a == "verb":
    	printIt(verbs_List)
    	global verb
        verb = verbs_List[int(raw_input("Select a verb using the numbers provided: ")) - 1]
        return verb
    elif a == "adjective":
        printIt(adjective_List)
        adjective = adjective_List[int(raw_input("Select an adjective using the numbers provided: ")) - 1]
        return adjective
    elif a == "adverb":
    	printIt(adverb_List)
        adverb = adverb_List[int(raw_input("Select an advern using the numbers provided: ")) - 1]
        return adverb
    elif a == "container":
    	printIt(container_List)
        container = container_List[int(raw_input("Select a container using the numbers provided: ")) - 1]
        return container
    elif a == "item":
    	printIt(item_List)
        item = item_List[int(raw_input("Select an item using the numbers provided: ")) - 1]
        return item_List
    elif a == "part":
        printIt(parts_List)
        part = parts_List[int(raw_input("Select a body part using the numbers provided: ")) - 1]
        return part
    elif a == "verbing":
        printIt(verbing_List)
        verbing = verbing_List[int(raw_input("Select a verb ending in 'ing' part using the numbers provided: ")) - 1]
        return verbing
    elif a == "liquid":
        printIt(liquid_List)
        liquid = liquid_List[int(raw_input("Select a verb ending in 'ing' part using the numbers provided: ")) - 1]
        return liquid

"""
printIT
    Purpose: fancy print all the items in a list prefixed with an increasing number.
    Arguements: a - list 
"""	
def printIt(a):
    counter = 1
    # Because new line
    print("\nOptions:")
    for i in range(len(a)):
    	if counter < 3:
            print("%d.) %-25s" % ((i + 1), a[i])),
            counter += 1
        else:
            print("%d.) %-25s" % ((i + 1), a[i]))
            counter = 1
    print("\n")

# Request the info we need for the story
boy = request("boy")
girl = request("girl")
verb = request("verb")
container = request("container")
liquid = request("liquid")
part = request("part")
verbing = request("verbing")

# Write the story
story1 = "\n" + boy + " and " + girl + "\n"
story1 += "Went up the hill\n"
story1 += "To " + verb + " a " + container + " of " + liquid + "\n\n";
story1 += boy + " fell down\n"
story1 += "And broke his " + part + ",\n"
story1 += "And " + girl + " came " + verbing + " after.\n"

# Print story
print story1