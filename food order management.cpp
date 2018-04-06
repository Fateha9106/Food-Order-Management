#include <bits/stdc++.h>
using namespace std;
int token,i = 0, order_list[1000], j = 0, order_count = 0, served=0,waiting=0;
int menu();
int order()
{
    cout<<"Enter token number: ";
    int item_number, item_code, item_size, quantity;
    cin>>token;
    order_count++;
    cout<<endl;
    order_list[i] = token;
    i++;
    menu();
    cout<<"How many items you wanna order? : ";
    cin>>item_number;
    cout<<endl;
    int bill = 0;
    for(int count=1; count<=item_number; count++){


        cout<<"Enter the item code: ";
        cin>>item_code;
        cout<<endl;

        switch(item_code)
        {
            case 01:
            {
                cout<<"1. Small 2. Large"<<endl;
                cin>>item_size;
                cout<<endl;
                if(item_size == 1)
                {
                    bill = bill + 100;
                    cout<<"Enter the quantity: ";
                    cin>>quantity;
                    cout<<endl;
                    bill = bill * quantity;
                }
                else if(item_size == 2)
                {
                    bill = bill + 180;
                    cout<<"Enter the quantity: ";
                    cin>>quantity;
                    cout<<endl;
                    bill = bill * quantity;
                }
                break;

            }case 02:
            {
                cout<<"1. Small 2. Large"<<endl;
                cin>>item_size;
                cout<<endl;
                if(item_size == 1)
                {
                    bill = bill + 150;
                    cout<<"Enter the quantity: ";
                    cin>>quantity;
                    cout<<endl;
                    bill = bill * quantity;
                }
                else if(item_size == 2)
                {
                    bill = bill + 280;
                    cout<<"Enter the quantity: ";
                    cin>>quantity;
                    cout<<endl;
                    bill = bill * quantity;
                }
                break;

            }case 03:
            {
                cout<<"1. Half 2. Full"<<endl;
                cin>>item_size;
                cout<<endl;
                if(item_size == 1)
                {
                    bill = bill + 100;
                    cout<<"Enter the quantity: ";
                    cin>>quantity;
                    cout<<endl;
                    bill = bill * quantity;
                }
                else if(item_size == 2)
                {
                    bill = bill + 180;
                    cout<<"Enter the quantity: ";
                    cin>>quantity;
                    cout<<endl;
                    bill = bill * quantity;
                }
                break;

            }case 04:
            {
                cout<<"1. 500ml 2. 1000ml"<<endl;
                cin>>item_size;
                cout<<endl;
                if(item_size == 1)
                {
                    bill = bill + 35;
                    cout<<"Enter the quantity: ";
                    cin>>quantity;
                    cout<<endl;
                    bill = bill * quantity;
                }
                else if(item_size == 2)
                {
                    bill = bill + 60;
                    cout<<"Enter the quantity: ";
                    cin>>quantity;
                    cout<<endl;
                    bill = bill * quantity;
                }
                break;

            }
        }
    }
    cout<<"Your bill is: "<<bill<<endl;
    cout<<endl;
    cout<<endl;
}
int serve()
{
    if(i>=j){
        token = order_list[j];
        j++;
        served++;
        cout<<token<<" served"<<endl<<endl;

    }



}
int display()
{   int wait = 0;
    for(int waiting_count=j;waiting_count<i;waiting_count++){
        wait++;
    }


    cout<<"Number of order received: "<<order_count<<endl<<endl;
    cout<<"Number of served: "<<served<<endl<<endl;
    cout<<"Number of waiting: "<<wait<<endl;



}
int menu()
{
    cout<<"---------------------------MENU-------------------------------"<<endl;
    cout<<endl;
    cout<<"Item Number______Item Name__________Size_____________Price(Tk)"<<endl;

    cout<<"   01             Burger         Small/Large         100/180"<<endl;
    cout<<"   02              Pizza         Small/Large         150/280"<<endl;
    cout<<"   03            Chowmein         Half/Full          100/180"<<endl;
    cout<<"   04             Drinks        500ml/1000ml         35/60"<<endl;
    cout<<endl;
}
int main()
{
    int choose;

    cout<<"\t\t\tWelcome to my cafe"<<endl;

    while(1){
        cout<<"1. Order\n2. Serve\n3. Dispaly\n4. Exit the program"<<endl;
        cout<<endl;

        cin>>choose;
        cout<<endl;

        if(choose==1){
            order();
        }
        else if(choose==2){
            serve();
        }
        else if(choose==3){
            display();
        }
        else if(choose==4){
            return 0;
        }

    }
}
