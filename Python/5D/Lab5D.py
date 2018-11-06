import pickle
import os
from mod_truck import Truck
from mod_car import Car
from mod_van import Van

filename = 'car_data.pkl'

def unpickle_database(filename):
    with open(filename, 'rb') as f:
        while True:
            try:
                yield pickle.load(f)
            except EOFError:
                break

def display_database():
    i = 1
    # print list(unpickle_database(filename))
    print("\n#     Name:               Engine:             Seats:            ")
    for vehicle in unpickle_database(filename):
        property_list = [vehicle.name, vehicle.getType(), vehicle.getSeats()]
        print("{}.)  ".format(i)),
        print(''.join([v.ljust(20,' ') for v in property_list]))     
        i = i + 1  

def save_object(obj, filename):
    with open('car_data.pkl', 'wb') as output:
        pickle.dump(obj, output, -1)         


vehicles = list(unpickle_database(filename))

# truck1 = Truck("Blazer", "6", "4")
# print "Truck1: {}, is a {} with {}.".format(truck1.name, truck1.getType(), truck1.getSeats())

# car1 = Car("Prius", "4", "4")
# print "Car1: {}, is a {} with {}.".format(car1.name, car1.getType(), car1.getSeats())

# car2 = Car("Focus", "4", "4")
# print "Car2: {}, is a {} with {}.".format(car1.name, car1.getType(), car1.getSeats())


# with open(filename, 'wb') as output:
#     pickle.dump(truck1, output, -1)
#     pickle.dump(car1, output, -1)
#     pickle.dump(car2, output, -1)

# del truck1
# del car1
# del car2

# with open(filename, 'rb') as input:
#     truck1 = pickle.load(input)
#     print "Truck1: {}, is a {} with {}.".format(truck1.name, truck1.getType(), truck1.getSeats())

#     car1 = pickle.load(input)
#     print "Car1: {}, is a {} with {}.".format(car1.name, car1.getType(), car1.getSeats())

#     car2 = pickle.load(input)
#     print "Car2: {}, is a {} with {}.".format(car2.name, car2.getType(), car2.getSeats())

#     print 



# vehicles = list(unpickle_database(filename))
# print("test {}".format(vehicles))

# del vehicles[1]
# del vehicles[1]
# os.remove(filename)
# print("File Removed!")

# print("test2 {}".format(vehicles))

# for vehicle in vehicles:
#     save_object(vehicle, filename)

# display_database()

os.system('cls')
display_database()
print
while (True):
	
	print("Menu")
	print("1.) Create Vehicle")
	print("2.) Delete vehicle")
	print("3.) Edit Vehicle")
	menu_selection = raw_input("What would you like to do?: ")

	try: 
		menu_selection = int(menu_selection)
		break
	except:
		os.system('cls')
		print "Fail. Try again...\n"


print "YAY"

if (menu_selection == 1):
    os.system('cls')
    print("Let's Create a vehicle!")
    # truck2 = Truck("Blazer2", "6", "4")
    # truck3 = Truck("Blazer3", "6", "4")
    vehicleType = raw_input("Enter a vehicle type: ")
    vehicleName = raw_input("Enter a vehicle name: ")
    vehicleEngine = raw_input("Enter amount of engine cylinders: ")
    vehicleSeats = raw_input("Enter amount of seats: ")
    if (vehicleType == "truck"):
        vehicle1 = Truck(vehicleName, vehicleEngine, vehicleSeats)
    elif (vehicleType == "car"):
        vehicle1 = Car(vehicleName, vehicleEngine, vehicleSeats)
    elif (vehicleType == "van"):
        vehicle1 = Van(vehicleName, vehicleEngine, vehicleSeats)
    # print "Truck1: {}, is a {} with {}.".format(truck1.name, truck1.getType(), truck1.getSeats())

    with open(filename, 'wb') as output:
        pickle.dump(vehicle1, output, -1)
        # pickle.dump(truck3, output, -1)
    for vehicle in vehicles:
        save_object(vehicle, filename)
elif (menu_selection == 2):
    os.system('cls')
    print("Let's Delete a vehicle!")

    print vehicles
    
    while (True):
        display_database()
        menu_selection = raw_input("\nPlease select a vehicle using the number above: ")

        try: 
            menu_selection = int(menu_selection)
            break
        except:
            os.system('cls')
            print "Fail. Try again..."

    menu_selection = menu_selection - 1

    del vehicles[menu_selection]

    print "just deleted:"
    print vehicles
    for vehicle in vehicles:
        save_object(vehicle, filename)

    print("After saving:")
    print vehicles
    print("display database:")
    display_database()

elif (menu_selection == 3):
    print("Let's Edit a vehicle!")

    while (True):
        display_database()
        menu_selection = raw_input("\nPlease select a vehicle using the number above: ")

        try: 
            menu_selection = int(menu_selection)
            break
        except:
            os.system('cls')
            print "Fail. Try again...\n"

else:
    print("I quit.")
    quit()

