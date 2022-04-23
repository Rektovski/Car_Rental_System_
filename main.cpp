#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,customerName,customerID,paymentAmount;
    int i,choiceNumber;
    char restartCharacter;
    string arr[46]={"Alfa" ,"Romeo" ,"Alpina" ,"Aston" ,"Martin" ,"Audi" ,"Bentley" ,"BMW" ,"Citroen" ,"Dacia" ,"DS"
                   ,"Ferrari" ,"Fiat" ,"Ford" ,"Honda" ,"Hyundai" ,"Infiniti" ,"Jaguar" ,"Jeep" ,"Kia" ,"Lamborghini"
                   ,"Land" ,"Rover" ,"Lexus" ,"Lotus" ,"Maserati" ,"Mazda" ,"McLaren" ,"Mercedes-Benz" ,"MG" ,"Mini"
                   ,"Mitsubishi" ,"Morgan" ,"Nissan" ,"Peugeot" ,"Porsche" ,"Renault" ,"Rolls-Royce" ,"Seat" ,"Skoda"
                   ,"Smart" ,"SsangYong" ,"Subaru" ,"Suzuki" ,"Tesla" ,"Toyota"};
    while(true){
        cout<<"-----------------------------------------------------------------------------\n";
        cout<<"                               Car Rental System                             \n";
        cout<<"                  Welcome to our Company. Choose from the menu               \n";
        cout<<"-----------------------------------------------------------------------------\n";
        for(i=0;i<46;++i){
            cout<<"Enter "<<i<<" - To Select "<<arr[i]<<endl;
        }
        cout<<"Your Choice: ";
        cin>>choiceNumber;
        cout<<"To take the car model - \""<<arr[choiceNumber]<<"\" you have to fill the form\n";
        cout<<"-----------------------------------------------------------------------------\n";
        cout<<"                     Please Provied Your Personal Details                    \n";
        cout<<"-----------------------------------------------------------------------------\n\n";
        cout<<"NOTE: PROVIDE FIRST NAME ONLY, DO NOT ENTER SPACE WHILE PROVIDING NAME,\n";
        cout<<"PAYEMENT WON'T PROCEED IF THE GIVEN AMOUNT IS LESS THEN THE RATE OF CAR\n\n";
        cout<<"                                                                             \n";
        cout<<"                     Enter Your Name: ";
        cin>>customerName;
        cout<<"\n                   Enter Your National ID: ";
        cin>>customerID;
        cout<<"\n                   Payment Amount: ";
        cin>>paymentAmount;
        cout<<"                                                                             \n\n\n";
        cout<<"Process has beed done successfully!!\n\n";
        cout<<"Do you want to continue ? (Y/N)";
        cin>>restartCharacter;
        if(restartCharacter=='Y')continue;
        else if(restartCharacter=='N')break;
        else {cout<<"Error!";break;}
    }
}
