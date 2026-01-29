import numpy as np      # Import NumPy for numerical operations and arrays
import pandas as pd     # Import Pandas for table-like bill display

# -----------------------------------------------
# GLOBAL VARIABLES & DATA STRUCTURES
# -----------------------------------------------

user_gmail = ""         # Stores user's Gmail for login
user_password = ""      # Stores user's password for login

total_bill = 0          # Tracks the total bill amount

# These data structures are required for the project:
item_names = []                 # List to store item names ordered
quantity_list = []              # List to store quantity of each ordered item
price_array = np.array([])      # NumPy array storing price of each ordered item
unique_items = set()            # Set to store unique items ordered
item_prices = {}                # Dictionary mapping each item → total price paid


# -----------------------------------------------
# USER LOGIN FUNCTION
# -----------------------------------------------
def login_user():
    global user_gmail, user_password     # Access global login variables

    if user_gmail == "" or user_password == "":
        print("No credentials found. Please register first:")  # Inform user to register
        user_gmail = input("Set your Gmail: ")                 # Take new Gmail
        user_password = input("Set your Password: ")           # Take new password
        print("Account created successfully!\n")               # Confirm registration
        return False                                           # Return False to continue login loop

    print("\nPlease login to continue:")                       # Ask for login
    gmail = input("Enter Gmail: ")                             # Enter Gmail
    password = input("Enter Password: ")                       # Enter password

    otp = 3252                                                 # Static OTP used for verification
    entered_otp = int(input(f"OTP sent: {otp}\nEnter OTP: "))  # Ask user to enter OTP

    if gmail == user_gmail and password == user_password and otp == entered_otp:
        print("Login successful!\n")                           # Login success message
        return True                                            # Exit login loop
    else:
        print("Invalid credentials. Try again.\n")             # Login failed message
        return False                                           # Repeat login


# -----------------------------------------------
# BILL DISPLAY FUNCTION
# -----------------------------------------------
def display_bill():
    print("\n-------------- BILL DETAILS --------------")       # Display header

    data = {                                                  # Create dictionary for DataFrame
        "Item": item_names,                                   # Item names column
        "Quantity": quantity_list,                            # Quantity column
        "Price (Rps)": price_array                            # Price column
    }

    df = pd.DataFrame(data)                                   # Create Pandas table
    print(df)                                                 # Print DataFrame

    print("------------------------------------------")          # Separator
    print(f"Total Bill: {total_bill} Rps")                    # Show total bill
    print("------------------------------------------")          # Separator


# -----------------------------------------------
# QUANTITY SELECTION FUNCTION
# -----------------------------------------------
def qty(price, item):
    global total_bill, price_array                            # Access global bill & array

    quantity = int(input(f"Enter quantity for {item}: "))     # Ask for quantity

    item_names.append(item)                                   # Add item to list
    quantity_list.append(quantity)                            # Add quantity to list

    total_price = price * quantity                            # Calculate item total price

    price_array = np.append(price_array, total_price)         # Add price to NumPy array

    total_bill += total_price                                 # Update total bill

    unique_items.add(item)                                    # Add to set (unique)
    item_prices[item] = total_price                           # Add to dictionary

    return total_bill                                         # Return updated bill


# -----------------------------------------------
# MENU FUNCTION
# -----------------------------------------------
def menu():
    print("\nChoose a category:")                             # Display menu categories
    print("1. Fast Food")
    print("2. Desi Food")
    print("3. Drinks")
    print("4. Desserts")
    print("5. Ice Cream")

    category = int(input("Your choice: "))                    # Take category selection

    if category == 1:                                         # Fast Food menu
        print("\nFAST FOOD MENU")
        items = {1: ("Burger", 500), 2: ("Pizza", 1000), 3: ("Fries", 250), 4: ("Chicken Wings", 600)}

    elif category == 2:                                       # Desi Food menu
        print("\nDESI FOOD MENU")
        items = {1: ("Biryani", 800), 2: ("Nihari", 1200), 3: ("Haleem", 300), 4: ("Chicken Karahi", 1800)}

    elif category == 3:                                       # Drinks menu
        print("\nDRINKS MENU")
        items = {1: ("Soft Drink", 50), 2: ("Water", 30), 3: ("Juice", 100), 4: ("Tea", 30)}

    elif category == 4:                                       # Desserts menu
        print("\nDesserts MENU")
        items = {1: ("Galaxy Sundae", 500), 2: ("Pistachio Sundae", 300), 3: ("Molten lava cake", 1000), 4: ("Choclate Fudge", 350)}

    elif category == 5:                                       # Ice Cream menu
        print("\nIce Cream MENU")
        items = {1: ("Kulfa", 50), 2: ("Vanila", 30), 3: ("Chocolate", 10), 4: ("Pista", 50)}

    else:
        print("Invalid option.")                               # Invalid category
        return                                                 # Exit menu function

    for key, value in items.items():                           # Display items with prices
        print(f"{key}. {value[0]} = {value[1]} Rps")

    choice = int(input("Select item: "))                       # Select item

    if choice in items:
        item_name, price = items[choice]                       # Get item name & price
        print(f"You selected {item_name}. Price: {price} Rps") # Confirmation
        qty(price, item_name)                                  # Ask for quantity & update bill
        display_bill()                                         # Show bill
    else:
        print("Invalid item selected.")                        # Invalid item selected


# -----------------------------------------------
# MAIN FUNCTION
# -----------------------------------------------
def main():
    global total_bill                                          # Access global bill

    name = input("Welcome to Taste Hub ! Enter your name: ")   # Ask for user name
    print(f"Hello {name}! Please login to continue.\n")        # Welcome message

    while not login_user():                                    # Loop until login successful
        pass

    option = 'y'                                               # Menu loop controller
    while option.lower() == 'y':                               # Continue until user exits
        print("\nSelect an option:")                           # Main options
        print("1. Menu")
        print("2. Help & Support")
        print("3. Vouchers")
        print("4. Exit")
        print("5. Checkout")

        choice = int(input("Your choice: "))                   # User option input

        if choice == 1:
            menu()                                             # Open menu

        elif choice == 2:
            print("\nHELP & SUPPORT")                          # Support info
            print("Complaints: 321-4567890")
            print("Order Tracking: 0313-0987654")
            print("Inquiry: 0312-3579085")
            print("Suggestions: 0313-1357982")
            print("Email: TasteHub@gmail.com")

        elif choice == 3:
            print("\nAvailable Vouchers:")                     # Show vouchers
            print("HBD – 5% OFF")
            print("fam – 15% OFF")
            print("party – 5% OFF")
            print("std – 5% OFF")
            print("SK – 75% OFF (Special)")

        elif choice == 4:
            print("Exiting... Thanks for visiting!")           # Exit message
            break                                              # Stop main loop

        elif choice == 5:
            print("\n---------------- CHECKOUT ----------------")  # Checkout section
            print(f"Your current bill: {total_bill} Rps")

            apply = input("Do you have a voucher? (Y/N): ")        # Voucher choice

            if apply.lower() == "y":
                code = input("Enter voucher code: ")               # Enter voucher code

                discount_codes = {                                 # Dictionary of vouchers
                    "HBD": 0.95,
                    "fam": 0.85,
                    "party": 0.95,
                    "std": 0.95,
                    "SK": 0.25
                }

                if code in discount_codes:
                    total_bill *= discount_codes[code]             # Apply discount
                    print("Voucher applied successfully!")
                else:
                    print("Invalid voucher code.")                 # Invalid voucher

            print(f"Bill before tax: {total_bill}")                # Show bill before tax

            payment = int(input("Payment method:\n1. Card (5% tax)\n2. Cash (15% tax)\nChoose: "))  # Select payment

            if payment == 1:
                total_bill *= 1.05                                 # Add 5% tax for card
            elif payment == 2:
                total_bill *= 1.15                                 # Add 15% tax for cash

            print(f"FINAL BILL: {round(total_bill,2)} Rps")        # Show final bill
            print("Thank you for shopping with Taste Hub!")         # Goodbye message

        option = input("\nPress Y to continue or N to exit: ")     # Continue or exit


# Run Program
main()                                                              # Start program
