
#include <iostream>
using namespace std;

int main(){

    int quant;
    int choice;

    int Qrooms=0, Qpasta=0, Qchicken=0, Qburger=0, Qshake=0, Qnoodles=0;

    int Srooms=0, Spasta=0, Schicken=0, Sburger=0, Sshake=0, Snoodles=0;
    int  Total_rooms=0, Total_pasta=0, Total_chicken=0, Total_burger=0, Total_shake=0, Total_noodles=0;


    cout<<"\n\t  availability of things we have" ;
    cout<<"\n rooms available: ";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta: ";
    cin>>Qpasta;
    cout<<"\n Quantity of chicken: ";
    cin>>Qchicken;
    cout<<"\n Quantity of burger: ";
    cin>>Qburger;
    cout<<"\n Quantity of shake: ";
    cin>>Qshake;
    cout<<"\n Quantity of noodles: ";
    cin>>Qnoodles;

    
 m:
    cout<<"\n\t\t\t please select from the menu options: ";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) chicken";
    cout<<"\n4) burger";
    cout<<"\n5) shake";
    cout<<"\n6) noodles";
    cout<<"\n7) information regarding sales and collection";
    cout<<"\n8) exit";

    cout<<"\n\n please enter your choice! ";
    cin>>choice;

    switch(choice){
        case 1:
        cout<<"\n\n enter the no. of roooms you want: ";
        cin>>quant;
        if(Qrooms-Srooms >= quant){
            Srooms=Srooms+quant;
            Total_rooms=(Total_rooms+quant*1200);
            cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you!";

        }
        else
        cout<<"\n\t Only"<<Qrooms-Srooms<<"rooms remaining in the hotel";
        break;


        case 2:
        cout<<"\n\n enter pasta quantity ";
        cin>>quant;
        if(Qpasta-Spasta >= quant){
            Spasta=Spasta+quant;
            Total_pasta=(Total_pasta+quant*250);
            cout<<"\n\n\t\t"<<quant<<"pasta is the order!";

        }
        else
        cout<<"\n\t Only"<<Qpasta-Spasta<<"pasta remaining in the hotel";
        break;

        case 3:
        cout<<"\n\n enter chicken quantity ";
        cin>>quant;
        if(Qchicken-Schicken >= quant){
            Schicken=Schicken+quant;
            Total_chicken=(Total_chicken+quant*120);
            cout<<"\n\n\t\t"<<quant<<"chicken is the order!";

        }
        else
        cout<<"\n\t Only"<<Qchicken-Schicken<<"chicken remaining in the hotel";
        break;

        case 4:
        cout<<"\n\n enter burger quantity ";
        cin>>quant;
        if(Qburger-Sburger >= quant){
            Sburger=Sburger+quant;
            Total_burger=(Total_burger+quant*250);
            cout<<"\n\n\t\t"<<quant<<"burger is the order!";

        }
        else
        cout<<"\n\t Only"<<Qburger-Sburger<<"burger remaining in the hotel";
        break;

        case 5:
        cout<<"\n\n enter shake quantity ";
        cin>>quant;
        if(Qshake-Sshake >= quant){
            Sshake=Sshake+quant;
            Total_shake=(Total_shake+quant*200);
            cout<<"\n\n\t\t"<<quant<<"shake is the order!";

        }
        else
        cout<<"\n\t Only"<<Qshake-Sshake<<"shake remaining in the hotel";
        break;

        case 6:
        cout<<"\n\n enter noodles quantity ";
        cin>>quant;
        if(Qnoodles-Snoodles >= quant){
            Snoodles=Snoodles+quant;
            Total_noodles=(Total_noodles+quant*250);
            cout<<"\n\n\t\t"<<quant<<"noodles is the order!";

        }
        else
        cout<<"\n\t Only"<<Qnoodles-Snoodles<<"noodles remaining in the hotel";
        break;

        case 7:

        cout<<"\n\t\t details of sales and collection ";
        cout<<"\n\n number of rooms we had: "<<Qrooms;
        cout<<"\n\n number of rooms we gave for rent: "<<Srooms;
        cout<<"\n\n number of rooms we have remaining: "<<Qrooms-Srooms;
        cout<<"\n\n total room collection of the day: "<<Total_rooms;

        cout<<"\n\n number of pastas we had: "<<Qpasta;
        cout<<"\n\n number of pastas we sold: "<<Spasta;
        cout<<"\n\n number of pastas we have remaining: "<<Qpasta-Spasta;
        cout<<"\n\n total pasta collection of the day: "<<Total_pasta;

        cout<<"\n\n number of chicken we had: "<<Qchicken;
        cout<<"\n\n number of chicken we sold: "<<Schicken;
        cout<<"\n\n number of chicken we have remaining: "<<Qchicken-Schicken;
        cout<<"\n\n total chicken collection of the day: "<<Total_chicken;

        cout<<"\n\n number of burgers we had: "<<Qburger;
        cout<<"\n\n number of burgers we sold: "<<Sburger;
        cout<<"\n\n number of burgers we have remaining: "<<Qburger-Sburger;
        cout<<"\n\n total burger collection of the day: "<<Total_burger;

        cout<<"\n\n number of shakes we had: "<<Qshake;
        cout<<"\n\n number of shakes we sold: "<<Sshake;
        cout<<"\n\n number of shakes we have remaining: "<<Qshake-Sshake;
        cout<<"\n\n total shake collection of the day: "<<Total_shake;

        cout<<"\n\n number of noodles we had: "<<Qnoodles;
        cout<<"\n\n number of noodles we sold: "<<Snoodles;
        cout<<"\n\n number of noodles we have remaining: "<<Qnoodles-Snoodles;
        cout<<"\n\n total  noodles collection of the day: "<<Total_noodles;

        case 8:

            exit(0);

        default:

           cout<<"\n please select the numbers mentioned above! ";


               











    }

goto m ;

}
