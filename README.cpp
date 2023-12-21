#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

int main (){
    char order[30] , name[30], choice[10], choice1, choice2, choice3, dishesCode, beverageCode, dessertCode;
    //food name decalare//
    char nameBeverage[30] , nameDishes[100], nameDessert[30]; 
    //store number data like price, discount etc//
    double price, finalPrice, discount, finalBeveragePrice, finalDishesPrice, finalDessertPrice, tax, dishesPrice, dessertPrice, beveragePrice, discountPrice, discountGet;
    //variable for quantity of the order//
    int beveragePax, dishesPax, dessertPax;

    cout<<"************************************************************\n";
    cout<<"*                     ZYQ STEAK HOUSE                      *\n";
    cout<<"************************************************************\n";
    cout<<"Welcome customer!\n";
    cout<<" \n";
    cout<<"What should we call you?\n";
    cout<<"Enter your name: ";
    cin.getline(name,30);//input name//
    cout<<"Do you want to order?(answer 'yes' or 'no): ";
    cin>>choice;
    cout<<" "<<endl; 


    //program start by entering the option
    if(strcmp(choice,"YES") == 0 || strcmp(choice,"yes") == 0){
        cout<<"Do you want to order dishes?"<<endl;
        cout<<"Enter your option ( Y / N ): ";
        cin>>choice1;
        
        cout<<"    "<<endl;
            

            if(choice1 == 'y' || choice1 == 'Y'){
                cout<<"What do you want to order?:"<<endl;
                cout<<"                          >FOOD<                                      \n";
                cout<<" ________________________________________________________________"<<endl;
                cout<<"|___code__|________________MENU___________________|____PRICE_____|"<<endl;
                cout<<"|    [A]    | Pasta                               | RM 13.90     |"<<endl;
                cout<<"|    [B]    | Chicken Grill Blackpepper           | RM 12.90     |"<<endl;
                cout<<"|    [C]    | Chilli Butter Pot Garlic Bread      | RM 19.90     |"<<endl;
                cout<<"|    [D]    | Chilli Butter Spaghetti             | RM 15.90     |"<<endl;
                cout<<"|    [E]    | Lamb Fried Rice                     | RM 14.90     |"<<endl;
                cout<<"|    [F]    | Cheezy Butter Chicken Beef          | RM 13.90     |"<<endl;
                cout<<"|    [G]    | Chicken Chop Fried Rice             | RM 15.90     |"<<endl;
                cout<<"|    [H]    | Tempura Fishi Fried Rice            | RM 12.90     |"<<endl;
                cout<<"*================================================================*"<<endl;

                cout<<"Enter the code:";
                cin>>dishesCode;
                //dishes name inialize by user choice//
                switch(dishesCode)
                {
                    case 'a':
                    case 'A': dishesPrice = 13.90; //initialize food price//
                              strcpy(nameDishes," Pasta"); //initialize food name//
                              break;

                    case 'b':    
                    case 'B': dishesPrice = 12.90;
                              strcpy(nameDishes,"Chicken Grill Blackpepper");
                              break;

                    case 'c':
                    case 'C': dishesPrice = 19.90;
                              strcpy(nameDishes,"Chilli Butter Pot with Garlic Bread");
                              break;

                    case 'd':
                    case 'D': dishesPrice = 15.90;
                              strcpy(nameDishes,"Chilli Butter Spaghetti");
                              break;

                    case 'e':
                    case 'E': dishesPrice = 14.90;
                              strcpy(nameDishes,"Lamb Fried Rice");
                              break;

                    case 'f':
                    case 'F': dishesPrice = 13.90;
                              strcpy(nameDishes,"Cheezy Butter Chicken Beef");
                              break;

                    case 'g':
                    case 'G': dishesPrice = 15.90;
                              strcpy(nameDishes,"Chicken Chop Fried Rice");
                              break;

                    case 'h':
                    case 'H': dishesPrice = 12.90;
                              strcpy(nameDishes,"Tempura Fishi Fried Rice");
                              break;

                    default: cout<<"Invalid code!!\n";
                             cout<<"Enter code 'A', 'B' and etc.\n";
                }
                 cout<<"Enter quantity: ";
                 cin>>dishesPax;
                 //dishes price x quantity//
                 finalDishesPrice = dishesPrice * dishesPax;

                 cout<<"   "<<endl;//line skip//

                    cout<<"Do you want to order beverage? (Y / N)\n";
                    cin>>choice2;

                        
                        if(choice2 == 'y' || choice2 == 'Y'){
                            cout<<"What do you want to order?:"<<endl;
                            cout<<"                         >BEVERAGE<                                \n"<<endl;
                            cout<<" _______________________________________________________________"<<endl;
                            cout<<"|___code__|_________________MENU__________________|____PRICE____|"<<endl;
                            cout<<"|    [A]    | Fresh Orange                        | RM 6.00     |"<<endl;
                            cout<<"|    [B]    | Green Apple                         | RM 6.00     |"<<endl;
                            cout<<"|    [C]    | Pink Lemonade                       | RM 6.00     |"<<endl;
                            cout<<"|    [D]    | Milo                                | RM 6.00     |"<<endl;
                            cout<<"|    [E]    | Lemon Tea                           | RM 2.50     |"<<endl;
                            cout<<"|    [F]    | Vietname White                      | RM 3.00     |"<<endl;
                            cout<<"|    [G]    | Vietname Black                      | RM 3.00     |"<<endl;
                            cout<<"|    [H]    | Watermelon                          | RM 5.00     |"<<endl;
                            cout<<"*===============================================================*"<<endl;

                            cout<<"Enter the code:";
                            cin>>beverageCode;

                            switch(beverageCode)
                            {
                                case 'a':
                                case 'A': beveragePrice = 6.00; //initialize beverage price//
                                          strcpy(nameBeverage,"Fresh Orange "); //initialize the beverage name//
                                          break;

                                case 'b':
                                case 'B': beveragePrice = 6.00;
                                          strcpy(nameBeverage,"Green Apple");
                                          break;

                                case 'c':
                                case 'C': beveragePrice = 6.00;
                                          strcpy(nameBeverage,"Pink Lemonade");
                                          break;

                                case 'd':
                                case 'D': beveragePrice = 6.00;
                                          strcpy(nameBeverage,"Milo");
                                          break;

                                case 'e':
                                case 'E': beveragePrice = 2.50;
                                          strcpy(nameBeverage,"Lemon Tea");
                                          break;

                                case 'f':
                                case 'F': beveragePrice = 3.00;
                                          strcpy(nameBeverage,"Vietname White");
                                          break;

                                case 'g':
                                case 'G': beveragePrice = 3.00;
                                          strcpy(nameBeverage,"Vietname Black");
                                          break;

                                case 'h':
                                case 'H': beveragePrice = 5.00;
                                          strcpy(nameBeverage,"Watermelon");
                                          break;

                                default: {cout<<"Invalid code!!\n";
                                         cout<<"Enter code 'A', 'B' and etc.\n";
                                         beveragePrice = 0.00;
                                         strcpy(nameBeverage,"wrong input");
                                          }
                                         
                            }   
                             //quantity order enter by user//
                                 cout<<"Enter quantity: ";
                                 cin>>beveragePax;
                                 //beverage price x quantity//
                                 finalBeveragePrice = beveragePrice * beveragePax;

                                 cout<<"   "<<endl;

                                 cout<<"Do you want to order dessert? (Y / N)\n";
                                 cin>>choice3;
                                    
                                    
                                    //if press 'y' proceed order for Dessert//
                                    if(choice3 == 'Y' || choice3 =='y'){
                                        cout<<"What do you want to order?:"<<endl;
                                        cout<<"                         >DESSERT<                                \n"<<endl;
                                        cout<<" ________________________________________________________________"<<endl;
                                        cout<<"|___code__|_________________MENU__________________|_____PRICE____|"<<endl;
                                        cout<<"|    [A]    | Burn Cheese                         | RM 8.90      |"<<endl;
                                        cout<<"|    [B]    | Tiramisu Almond                     | RM 12.90     |"<<endl;
                                        cout<<"|    [C]    | Red Velvet                          | RM 12.90     |"<<endl;
                                        cout<<"|    [D]    | Mini Pavlova                        | RM  9.90     |"<<endl;
                                        cout<<"|    [E]    | New York Cheese                     | RM 12.90     |"<<endl;
                                        cout<<"|    [F]    | Caramels Chocolate                  | RM 12.90     |"<<endl;
                                        cout<<"|    [G]    | Chocolate Indulgence                | RM 12.90     |"<<endl;
                                        cout<<"|    [H]    | Classic Cappucino                   | RM 11.90     |"<<endl;
                                        cout<<"*==============================================================*"<<endl;


                                        cout<<"Enter the code:";
                                        cin>>dessertCode;
                                        switch(dessertCode)
                                        {
                                             case 'a':
                                             case 'A' : dessertPrice = 8.90; //initialize dessert price//
                                                       strcpy(nameDessert,"Burn Cheese"); //initialize dessert name//
                                                       break;

                                             case 'b':
                                             case 'B': dessertPrice = 12.90;
                                                      strcpy(nameDessert,"Tiramisu Almond");
                                                      break;

                                             case 'c':
                                             case 'C': dessertPrice = 12.90;
                                                      strcpy(nameDessert,"Red Velvet");
                                                      break;

                                             case 'd':
                                             case 'D': dessertPrice = 9.90;
                                                      strcpy(nameDessert,"Mini Pavlova");
                                                      break;

                                             case 'e':
                                             case 'E' : dessertPrice = 12.90;
                                                      strcpy(nameDessert,"Burn Cheese");
                                                      break;

                                             case 'f':
                                             case 'F': dessertPrice = 12.90;
                                                      strcpy(nameDessert,"Tiramisu Almond");
                                                      break;

                                             case 'g':
                                             case 'G': dessertPrice = 12.90;
                                                      strcpy(nameDessert,"Red Velvet");
                                                      break;

                                             case 'h':
                                             case 'H': dessertPrice = 11.90;
                                                     strcpy(nameDessert,"Mini Pavlova");
                                                      break;

                                            //error display//
                                             default: cout<<"Invalid code!!\n";
                                                      cout<<"Enter code 'A', 'B' and etc.\n";
                                        }
                                         cout<<"Enter quantity: ";
                                         cin>>dessertPax;
                                         finalDessertPrice = dessertPrice * dessertPax;

                                         cout<<"   "<<endl;
                                    }
                                    else if(choice3 == 'N' || choice3 =='n')
                                    {
                                         strcpy(nameDessert,"----");
                                         dessertPax = 0;
                                         dessertPrice = 0.00;
                                    }

                        }
                        else if(choice2 == 'N' || choice2 =='n')
                        {
                            strcpy(nameBeverage,"----");
                            beveragePax = 0;  
                            beveragePrice = 0.00;
                        }
            }
            else if(choice1 == 'N' || choice1 =='n')
            {
                strcpy(nameDishes,"----");
                dishesPax = 0;
                 dishesPrice = 0.00;
            }
    }
    else if(strcmp(choice,"NO") == 0 || strcmp(choice,"no") == 0)
    {
        cout<<"Thank you, please come again!\n";
        return 0;
    }
    //total purchase of customer//
    price = finalDishesPrice + finalBeveragePrice + finalDessertPrice;

    if(price >= 70)
    {
        discount = 0.03;
    }
    else if(price >= 99)
    {
        discount = 0.05;
    }
    else
    {
        discount = 0.00;
    }
    //discount formula//
    discountGet = price * discount;
    //taxes formula//
    tax = price * 0.08;
    //total payment for customer//
    finalPrice = price  + tax - discountGet;
    
    //PRINT TOTAL PRICE AND DETAILS//
    cout<<"***********************************ZYQ STEAK HOUSE***********************************"<<endl;
    cout<<"Hello "<<name<<","<<endl;
    cout<<"Please sit tight, we are serving your food :D\n";
    cout<<endl<<endl;
    cout<<"FOOD    :"<<nameDishes<<" "<<dishesPax<<"x\n";//display food name//
    cout<<"          RM "<<setprecision(2)<<fixed<<finalDishesPrice<<endl; //total food order//
    cout<<endl<<endl;         
    cout<<"BEVERAGE: "<<nameBeverage<<" "<<beveragePax<<"x\n"; //display beverage name
    cout<<"          RM "<<setprecision(2)<<fixed<<finalBeveragePrice<<endl; //total beverage price//
    cout<<endl<<endl; 
    cout<<"DESSERT : "<<nameDessert<<" "<<dessertPax<<"X\n"; //display dessert name//
    cout<<"          RM "<<setprecision(2)<<fixed<<finalDessertPrice<<endl; //total dessert price//
    cout<<endl<<endl;
    cout<<"TAXES 8%: RM "<<setprecision(2)<<fixed<<tax<<endl; //display total taxes included//
    cout<<endl<<endl;
    cout<<"DISCOUNT: -RM "<<setprecision(2)<<fixed<<discountGet<<endl; //display total discount get//
    cout<<"=====================================================================================\n";
    cout<<"TOTAL PAYMENT: RM "<<setprecision(2)<<fixed<<finalPrice<<endl; //price after deducted dicount and included taxes//
    cout<<"=====================================================================================\n";          

}
        
