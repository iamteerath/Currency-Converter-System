#include<iostream>
using namespace std;

int main(){
    char startValue;
    char selectAgain;
    float converter(void);
    start:
    cout<<"---------- WELCOME CURRENCY CONVERTER SYSTEM----------"<<endl;
    cout<<"--------pLEASE FOLLOW THE FOLLOWING INSTRUCTION--------"<<endl;
    cout<<"You can currencies Dollar , Rupees , Euro , Pound "<<endl;
    cout<<"You can type a,b,c,d respectively for curriencies dollar, rupees, euro, pound "<<endl;
    cout<<"Enter currency1 which you want to convert "<<endl;
    cout<<"Enter value for currency1"<<endl;
    cout<<"Enter currency2 in which you want to convert currency1"<<endl;
    cout<<"(a) Dollar (b) Rupees (c) Euro (d) Pound"<<endl;
    cout<<"Please press s to start "<<endl;
    selectChoice:
    cin>>startValue;
    if(startValue=='s'|| startValue=='S'){
        float finalValue=converter();       // here we call a method called converter, & whatever it will return it will be a float value.
        cout<<"Result is "<<finalValue<<endl;
        cout<<"Do tou want to use the application again Y or N"<<endl;
        typeAgain:
        cin>>selectAgain;
        if(selectAgain=='y'||selectAgain=='Y'){
            goto start;
        }
        else if(selectAgain=='n'||selectAgain=='N'){
            cout<<"Thank you for using our application !"<<endl;
        }
        else {
            cout<<"You have entered wrong value , please type again"<<endl;
            goto typeAgain;
        }
    }
    else{
        cout<<"You have entered wrong value , please type s "<<endl;
        goto selectChoice;
    }

}

float converter(){     // yadi agr kuch argument nhi le rha hai aur kuch agr le rha hai then it is text nothong for that i have to declare void on earlier in protype case
    char currNAME1;
    char currNAME2;
    float currency1;
    float currency2;
    currLevel:
    cout<<"Enter currency1 Name"<<endl;
    cin>>currNAME1;
    cout<<"Enter currency1 value"<<endl;
    cin>>currency1; 
    switch(currNAME1){
        case 'a':
            currLevel1:
            cout<<"Enter currency2 Name"<<endl; // Jab user ne enter kr liya currency1 Name aur yaha pe condition a pe pata chal ja rha hai ki wo dollar hai to yaha pe user ko messege denge ki kisme convert krna hai.
            cin>>currNAME2;
            if(currNAME2=='a'|| currNAME2=='A'){
                currency2=currency1*1; //when u convert dollar to dollar
            }
            else if(currNAME2=='b'|| currNAME2=='B'){
                currency2=currency1*73.84; //when u convert dollar to inr
            }
            else if(currNAME2=='c'|| currNAME2=='C'){
                currency2=currency1*0.85;   //when u convert dollar to euro
            }
            else if(currNAME2=='d'|| currNAME2=='D'){
                currency2=currency1*0.72;   //when u convert dollar to pound
            }
            else{
                cout<<"You have entered wrong value, plaese type again"<<endl;
                goto currLevel1;
            }
            break;

            case 'b':
            currLevel2:
            cout<<"Enter currency2 Name"<<endl; // Jab user ne enter kr liya currency1 Name aur yaha pe condition a pe pata chal ja rha hai ki wo dollar hai to yaha pe user ko messege denge ki kisme convert krna hai.
            cin>>currNAME2;
            if(currNAME2=='a'|| currNAME2=='A'){
                currency2=currency1*0.01; //when u convert dollar to dollar
            }
            else if(currNAME2=='b'|| currNAME2=='B'){
                currency2=currency1*1; //when u convert dollar to inr
            }
            else if(currNAME2=='c'|| currNAME2=='C'){
                currency2=currency1*0.01;   //when u convert dollar to euro
            }
            else if(currNAME2=='d'|| currNAME2=='D'){
                currency2=currency1*0.009;   //when u convert dollar to pound
            }
            else{
                cout<<"You have entered wrong value, plaese type again"<<endl;
                goto currLevel2;
            }
            break;

            case 'c':
            currLevel3:
            cout<<"Enter currency2 Name"<<endl; // Jab user ne enter kr liya currency1 Name aur yaha pe condition a pe pata chal ja rha hai ki wo dollar hai to yaha pe user ko messege denge ki kisme convert krna hai.
            cin>>currNAME2;
            if(currNAME2=='a'|| currNAME2=='A'){
                currency2=currency1*1.16; //when u convert dollar to dollar
            }
            else if(currNAME2=='b'|| currNAME2=='B'){
                currency2=currency1*86.37; //when u convert dollar to inr
            }
            else if(currNAME2=='c'|| currNAME2=='C'){
                currency2=currency1*1;   //when u convert dollar to euro
            }
            else if(currNAME2=='d'|| currNAME2=='D'){
                currency2=currency1*0.85;   //when u convert dollar to pound
            }
            else{
                cout<<"You have entered wrong value, plaese type again"<<endl;
                goto currLevel3;
            }
            break;

            case 'd':
            currLevel4:
            cout<<"Enter currency2 Name"<<endl; // Jab user ne enter kr liya currency1 Name aur yaha pe condition a pe pata chal ja rha hai ki wo dollar hai to yaha pe user ko messege denge ki kisme convert krna hai.
            cin>>currNAME2;
            if(currNAME2=='a'|| currNAME2=='A'){
                currency2=currency1*1.37; //when u convert dollar to dollar
            }
            else if(currNAME2=='b'|| currNAME2=='B'){
                currency2=currency1*101.20; //when u convert dollar to inr
            }
            else if(currNAME2=='c'|| currNAME2=='C'){
                currency2=currency1*1.17;   //when u convert dollar to euro
            }
            else if(currNAME2=='d'|| currNAME2=='D'){
                currency2=currency1*1;   //when u convert dollar to pound
            }
            else{
                cout<<"You have entered wrong value, plaese type again"<<endl;
                goto currLevel4;
            }
            break;

        default:{
            cout<<"You have entered wrong value, please type again"<<endl;
            goto currLevel;
            break;
        }
    }

    return currency2;
}