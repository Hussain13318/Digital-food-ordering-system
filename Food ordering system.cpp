
#include <iostream>
#include <string>
using namespace std;

double total_bill = 0 ;
string item_names[10000]; 
double price_array[10000];
int item_count = 0; 

void displayBill(string item_names[], int quantity_array[], double price_array[], int total_items) 
{
    cout << "\nYour bill details are as follows:\n";
    for (int i = 0; i < total_items; i++) 
    {
        if (quantity_array[i] > 0) 
        {
            cout << item_names[i] << " - Quantity: " << quantity_array[i] << " - Price: " << price_array[i] << " Rps\n";
        }
    }
    cout << "Total Bill: " << total_bill << " Rps\n";
}

double qty(int a, string item_name) 
{
    float quantity;
    cout << "\nEnter the quantity of " << item_name << " you want: ";
    cin >> quantity;
    
    
    item_names[item_count] = item_name; 
    quantity_array[item_count] = quantity; 
    price_array[item_count] = a * quantity; 
    
    total_bill += price_array[item_count];
    item_count++; 
    return total_bill;   
}

void menu () 
{
cout << "\nEnter your type of Food you want to eat\nf for Fast_food\nd for Desi_food\ns for Drinks\nt for Desert\ni for Ice-Cream\nChoice : "  ;
char type ;
cin >> type ;

switch (type)
{
    case 'd':
    int choice ;
    cout << "\nYou chose Desi food.Chose what do you want to eat from menu below\n1. Biryani = \t\t\t800 \n2. Nihari = \t\t\t1200 \n3. Haleem = \t\t\t300 \n4. Chicken Karahi = \t\t1800 \n5. Pulao = \t\t\t750 \n6. Keema = \t\t\t450 \n7. Saag = \t\t\t250 \n8. Mutton Karahi = \t\t2200 \n9. Aloo Paratha = \t\t200\n10. Chaat = \t\t\t150 \n11. Daal Tarka = \t\t180 \n12. Chana Masala = \t\t170 \n13. Chapli Kabab = \t\t220 \n14. Samosa = \t\t\t50 \n15. Dampukht = \t\t\t3300\nYour choice : " ; //Desi food if chosen
    cin >> choice ;

    switch (choice) 
    {
        case 1:     //if biryani is chosen
            cout << "You chose Biryani.\nPrice of Biryani is 800Rps" ;
            cout << qty(800,"Biryani") ;
            break;

        case 2:     //if Nihari is chosen
            cout << "You chose Nihari.\nPrice of Nihari is 1200Rps" ;
            cout << qty(1200 , "Nihari") ;
            break;

        case 3:     //if Haleem is chosen
            cout << "You chose Haleem.\nPrice of Haleem is 300Rps" ;
            cout << qty(300 , "Haleem") ;
            break;

        case 4:  //if chicken karahi is chosen
            cout << "You chose Chicken Karahi.\nPrice of Chicken Karahi is 1800Rps.";
            cout << qty(1800 , "Chicken Karahi");
            break;

        case 5: //if Pala0 is chosen
            cout << "You chose Pulao.\nPrice of Pulao is 750Rps.";
            cout << qty(750 , "Palao");
            break;

        case 6:  //if chicken Keema is chosen
            cout << "You chose Keema.\nPrice of Keema is 450Rps.";
            cout << qty(450 , "Kemma");
            break;

        case 7:  //if sagg is chosen
            cout << "You chose Saag.\nPrice of Saag is 250Rps.";
            cout << qty(250 , "Saag");
            break;

        case 8:  //if Mutton_Karahi is chosen
            cout << "You chose Mutton Karahi.\nPrice of Mutton Karahi is 2200Rps.";
            cout << qty(2200 , "Mutton Karahi");
            break;

        case 9: //if Aloo_Paratha is chosen
            cout << "You chose Aloo Paratha.\nPrice of Aloo Paratha is 200Rps.";
            cout << qty(200 , "Aloo Paratha");
            break;

        case 10:  //if Chaat is chose
            cout << "You chose Chaat.\nPrice of Chaat is 150Rps.";
            cout << qty(150 , "Chat");
            break;

        case 11:  //if Daal_Tarka is chose
            cout << "You chose Daal Tarka.\nPrice of Daal Tarka is 180Rps.";
            cout << qty(180 , "Daal Tarka");
            break;

        case 12:  //if Chana_Masala is chose
            cout << "You chose Chana Masala.\nPrice of Chana Masala is 170Rps.";
            cout << qty(170 , "Channa Masala");
            break;

        case 13:  //if Chapli_Kabab is chose
            cout << "You chose Chapli Kabab.\nPrice of Chapli Kabab is 220Rps.";
            cout << qty(220 , "Chapli Kabab");
            break;

        case 14:  //if Samosa is chose
            cout << "You chose Samosa.\nPrice of Samosa is 50Rps.";
            cout << qty(50 , "Samosa");
            break;

        case 15:  //if Dampukht is chose
            cout << "You chose Dampukht.\nPrice of Dampukht is 3300Rps.";
            cout << qty(3300 , "Dumpukht");
            break;

        default:
            cout << "Please chose something from the list" ;
            break;
    }
    break ;

    //if fast food chosen
    case 'f':
    int coice;
    cout << "\nYou chose Fast Food. Choose what do you want to eat from the menu below:\n1. Burger\t\t\t500 Rps\n2. Pizza\t\t\t1000 Rps\n3. Fries\t\t\t250 Rps\n4. Chicken Wings\t\t600 Rps\n5. Sandwich\t\t\t350 Rps\n6. Hotdog\t\t\t200 Rps\n7. Wrap\t\t\t\t400 Rps\n8. Chicken Nuggets\t\t500 Rps\n9. Fish and Chips\t\t800 Rps\n10. Tacos\t\t\t350 Rps\n11. Nachos\t\t\t250 Rps\n12. Doner Kebab\t\t\t600 Rps\n13. Spring Rolls\t\t200 Rps\n14. Shawarma\t\t\t550 Rps\n15. Popcorn Chicken\t\t450 Rps\nYour choice: ";
    cin >> coice;
    switch (coice)
    {
        case 1: // Burger
            cout << "You chose Burger.\nPrice of Burger is 500Rps";
            cout << qty(500 , "Burger");
            break;

        case 2: // Pizza
            cout << "You chose Pizza.\nPrice of Pizza is 1000Rps";
            cout << qty(1000 , "Pizza");
            break;

        case 3: // Fries
            cout << "You chose Fries.\nPrice of Fries is 250Rps";
            cout << qty(250 , "Fries");
            break;

        case 4: // Chicken Wings
            cout << "You chose Chicken Wings.\nPrice of Chicken Wings is 600Rps";
            cout << qty(600 , "Chicken Wings");
            break;

        case 5: // Sandwich
            cout << "You chose Sandwich.\nPrice of Sandwich is 350Rps";
            cout << qty(350 , "Sandwich");
            break;

        case 6: // Hotdog
            cout << "You chose Hotdog.\nPrice of Hotdog is 200Rps";
            cout << qty(200 , "Hotdog");
            break;

        case 7: // Wrap
            cout << "You chose Wrap.\nPrice of Wrap is 400Rps";
            cout << qty(400 , "Wrap");
            break;

        case 8: // Chicken Nuggets
            cout << "You chose Chicken Nuggets.\nPrice of Chicken Nuggets is 500Rps";
            cout << qty(500 , "Chicken_Nuggets");
            break;

        case 9: // Fish and Chips
            cout << "You chose Fish and Chips.\nPrice of Fish and Chips is 800Rps";
            cout << qty(800 , "Fish_and_Chips");
            break;

        case 10: // Tacos
            cout << "You chose Tacos.\nPrice of Tacos is 350Rps";
            cout << qty(350 , "Tacos");
            break;

        case 11: // Nachos
            cout << "You chose Nachos.\nPrice of Nachos is 250Rps";
            cout << qty(250 , "Nachos");
            break;

        case 12: // Doner Kebab
            cout << "You chose Doner Kebab.\nPrice of Doner Kebab is 600Rps";
            cout << qty(600 , "Doner Kebab");
            break;

        case 13: // Spring Rolls
            cout << "You chose Spring Rolls.\nPrice of Spring Rolls is 200Rps";
            cout << qty(200 , "Spring Rolls");
            break;

        case 14: // Shawarma
            cout << "You chose Shawarma.\nPrice of Shawarma is 550Rps";
            cout << qty(550 , "Shawarma");
            break;

        case 15: // Popcorn Chicken
            cout << "You chose Popcorn Chicken.\nPrice of Popcorn Chicken is 450Rps";
            cout << qty(450 , "Popcorn_Chicken");
            break;

        default:
            cout << "Please choose something from the list";
            break;
    }
    break ;

    //if drinks is chosen
    case 's':
    int ce;
    cout << "\nYou chose Drinks. Choose what you want to drink from the menu below:\n1. Gourmet Cola\t\t\t100 Rps\n2. Star Cola\t\t\t100 Rps\n3. Slush\t\t\t120 Rps\n4. Lemon Up\t\t\t110 Rps\n5. Water\t\t\t50 Rps\nYour choice: ";
    cin >> ce;

    switch (ce)
    {
        case 1: // Gourmet Cola
            cout << "You chose Gourmet Cola.\nPrice of Gourmet Cola is 100Rps";
            cout << qty(100 , "Gourment_Cola");
            break;

        case 2: // Star Cola
            cout << "You chose Star Cola.\nPrice of Star Cola is 100Rps";
            cout << qty(100 , "Star_cola");
            break;

        case 3: // Slush
            cout << "You chose Slush.\nPrice of Slush is 120Rps";
            cout << qty(120 , "Slush");
            break;

        case 4: // Lemon Up
            cout << "You chose Lemon Up.\nPrice of Lemon Up is 110Rps";
            cout << qty(110 , "Lemon_Up");
            break;

        case 5: // Water
            cout << "You chose Water.\nPrice of Water is 50Rps";
            cout << qty(50 , "Water");
            break;

        default:
            cout << "Please choose something from the list";
            break;
    }
    break ;

    //if desert is chosen
    case 't':
    int cce;
    cout << "\nYou chose Desserts. Choose what you want from the menu below:\n1. Chocolate Cake\t\t150 Rps\n2. Ice Cream\t\t\t120 Rps\n3. Apple Pie\t\t\t130 Rps\n4. Cheesecake\t\t\t170 Rps\n5. Brownie\t\t\t110 Rps\nYour choice: ";
    cin >> cce;
    switch (cce)
    {
        case 1: // Chocolate Cake
            cout << "You chose Chocolate Cake.\nPrice of Chocolate Cake is 150Rps";
            cout << qty(150 , "Chocolate_Cake");
            break;

        case 2: // Ice Cream
            cout << "You chose Ice Cream.\nPrice of Ice Cream is 120Rps";
            cout << qty(120 , "Ice Cream");
            break;

        case 3: // Apple Pie
            cout << "You chose Apple Pie.\nPrice of Apple Pie is 130Rps";
            cout << qty(130 , "Apple_Pie");
            break;

        case 4: // Cheesecake
            cout << "You chose Cheesecake.\nPrice of Cheesecake is 170Rps";
            cout << qty(170 , "Chessecake");
            break;

        case 5: // Brownie
            cout << "You chose Brownie.\nPrice of Brownie is 110Rps";
            cout << qty(110 , "Brownie");
            break;

        default:
            cout << "Please choose something from the list";
            break;
    }
    break ;

    //ice-cream section is chosen
    case 'i':
    int cice;
    cout << "\nEnter falvour you wan't to eat .Prices are same (120) for all ice-cream. Available Ice Cream Flavors:\n1. Vanilla\n2. Chocolate\n3. Strawberry\n4. Mango\n5. Pistachio\n6. Butterscotch\n7. Mint\n8. Blueberry\nYou chose :  " ;
    cin >> cice;

    switch (cice) {
        case 1: // Vanilla
            cout << "You chose Vanilla Ice Cream.\nPrice of Vanilla Ice Cream is 120Rps";
            cout << qty(120 , "Vanilla");
            break;
        case 2: // Chocolate
            cout << "You chose Chocolate Ice Cream.\nPrice of Chocolate Ice Cream is 120Rps";
            cout << qty(120 , "Chocolate");
            break;
        case 3: // Strawberry
            cout << "You chose Strawberry Ice Cream.\nPrice of Strawberry Ice Cream is 120Rps";
            cout << qty(120 , "Stawberry");
            break;
        case 4: // Mango
            cout << "You chose Mango Ice Cream.\nPrice of Mango Ice Cream is 120Rps";
            cout << qty(120 , "Mango");
            break;
        case 5: // Pistachio
            cout << "You chose Pistachio Ice Cream.\nPrice of Pistachio Ice Cream is 120Rps";
            cout << qty(120 , "Pistachio");
            break;
        case 6: // Blueberry
            cout << "You chose Blueberry Ice Cream.\nPrice of Blueberry Ice Cream is 120Rps";
            cout << qty(120 , "Blueberry");
            break;
        case 7: // Coffee
            cout << "You chose Coffee Ice Cream.\nPrice of Coffee Ice Cream is 130Rps";
            cout << qty(120 , "Coffee");
            break;
        case 8: // Mint
            cout << "You chose Mint Ice Cream.\nPrice of Mint Ice Cream is 120Rps";
            cout << qty(120 , "Mint");
            break;
        default:
            cout << "Invalid choice for Ice Cream flavor.";
            break;
    }

    default :
        cout << "\nPlease chose something" ;
        break;
    }
}

//main function
int main ()
{
    string name;
    cout << "Welcome to Over Dose\nPlease enter your name by whom you want us to call you : " ; //greeting
    getline(cin,name) ;             //get line used
    cout << "Hi " << name << " hope you are doing good.Please login first to avail our services\n" ;
    
    //login information
    string gmail, password ;
    const int otp = 3252 ; 
    int OTP ;
    cout << "Enter your Gmail : " ;
    getline(cin,gmail) ;         //get line used
    cout << "Enter your password : " ;
    getline(cin,password) ;             //get line used
    cout << "We have send an OTP on your device\nOTP is 3252\nEnter it so that we can confirm you : " ;//OTP is alloted which value is 3252
    cin >> OTP ;

    //Again login    
    string Gmail, Password ;
    cout << "\nRefresing\nPlease enter your Gamil and Password\nGmail : " ; 
    cin >> Gmail ; 
    cout << "Password : " ;
    cin >> Password ;

    //Authentication of user
    if (Gmail==gmail && Password==password && OTP==otp)
    {
    cout << "You have succesfully login" ;
    char login = 'y' ;
    
    while (login == 'Y'|| login=='y')
    {
        cout << "\nEnter from list below what you want to chose" ;
        cout << "\n1 for Menu" ;
        cout << "\n2 for Help and Support" ;
        cout << "\n3 for Vouchers" ;
        cout << "\n4 for Exiting" ;
        cout << "\n5 Checkout\nYou chose : " ;
        //Ask user for his option
        int option ;
        cin >> option  ;
        switch (option)
        {
        //Menu
        case 1:
            cout << "You chose menu" ; //Function is used here 
            menu () ;                   //we will go to menu function
            displayBill(item_names, quantity_array, price_array, item_count); // Call displayBill after menu
            break;

        //Help and support
        case 2:
            cout << "You chose Help and Support\nHi " << name <<" we are here to help you .\nIf you want to complain call on 321-4567890\nIf you want to Track order call on 0313-0987654\nIf you want to do inquiry call on 0312-3579085\nIf you want to give suggestion call on 0313-1357982\nIf you want to mail us use OverDose@gamil.com";
            break;

        //use Vouchers and Discount
        case 3:
            int vouch ;
            cout << "You chose Vouchers\nBelow are all the vouchers avalible\n1. Birthday Voucher\n2. Family Time\n3. Weekend Special\n4. Student Discount\n5. Sir Khawaja Discount\nYour option : " ;
            //here Vouchers and discount will be isued which will be use in end at check out
            cin >> vouch ;
            switch (vouch)
            {
            case 1 :
                cout << "Birthday discount\nEnter HBD at end to get 5% off";
                break;

            case 2 :
            cout << "Family Time discount\nEnter fam at end to get 15% off" ;
                break;

            case 3 :
                cout << "Weekend Specialy discount\nEnter party at end to get 5% off" ;
                break;

            case 4 :
                cout << "Student Discount discount\nEnter std at end to get 5% off" ;
                break;

            case 5 :
                cout << "Sir Khawaja discount\nEnter SK at end to get 75% off" ;
                break;        

            default:
                cout << "Invalid option chosen" ;
                break;
            }
            cout << "\n\nEnter Y/y if you want to get access to home page or N/n if you don't \n You chose : " ;
            cin >> login ;
            break;

        break ;

        //Program will Quit
        case 4 :
            cout << "You chose Exiting\nThank you for visiting" ;
            return 1 ;
            break;

        case 5 :
            cout << "You chose Check Out\nYour current bill is " << total_bill <<" use vouchers for discount\nDo you want to use vouchers\nY or y for yes\nN or n for no\nDo you have voucher : " ;
            char disc ;
            cin >> disc ;//disc is for discount
            if (disc=='Y' || disc=='y')
                {   
                    string code ;
                    cout << "You have applied for voucher\nEnter voucher code : " ;
                    cin >> code ;
                    if (code == "HBD")
                    {
                        total_bill *= 0.95; // Apply 5% discount
                        cout << "5% Birthday discount applied. ";
                    }

                    else if (code == "fam")
                    {
                        total_bill *= 0.85; // Apply 15% discount
                        cout << "15% Family Time discount applied. ";
                    }
                    
                    else if (code == "party")
                    {
                        total_bill *= 0.95; // Apply 5% Weekend discount
                        cout << "5% Weekend discount applied. ";
                    }
                    
                    else if (code == "std")
                    {
                        total_bill *= 0.95; // Apply 5% Student discount
                        cout << "5% Student discount applied. ";
                    }
                    
                    else if (code == "SK")
                    {
                        total_bill *= 0.25; // Apply 75% discount
                        cout << "75% Sir Khawaja discount applied. ";
                    }
                    
                    else
                    {
                        cout << "Invalid voucher code. No discount applied.";
                    }   
                    cout << "Voucher applied" ;
                }
            else 
                {
                    cout << "You haven't applied for any voucher" ;
                }
                cout << "Your bill before  GST is " << total_bill ;
                cout << "\nEnter your way of payment\n1. Card 5% tax\n2. Cash 15% tax\nYou chose : ";
                int pay ;
                cin >> pay ;      
                switch (pay)
                {
                case 1:
                    cout << "You chose Card .Final bill with tax 5% is : " ;
                    double lastbill ;
                    lastbill=total_bill + (total_bill*0.05) ;
                    cout << lastbill << " Thanks for shopping with us\nBye Take care" ;
                    return 1 ;
                    break;
                
                case 2:
                    cout << "You chose Cash .Final bill with tax 15% is : " ;
                    double last_bill ;
                    last_bill=total_bill + (total_bill*0.15) ;
                    cout << last_bill << " Thanks for shopping with us\nBye Take care" ;
                    return 1 ;
                    break;

                default:
                    break;
                }
        break ;

        default :
            cout << "\nIt seems that you are facing some issue but no problem we are here to help you" ;
            break;
        }
    }
    }

    else
    {
    cout << "Sorry! unable to login \nlogin again we can't keep you going because of security purposes" ;
    cout << main() ;
    }

    return 0 ;
}