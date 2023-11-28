#include<bits/stdc++.h>
using namespace std;
int c=0;
class node
{

public:
    int nid;
    int num;
    int amnt;
    string name;
    string adr;
    node *next;
    node(int n,int nu,int am,string na,string  ad)
    {
        this->num=nu;
        this->nid=n;
        this->amnt=am;
        this->name=na;
        this->adr=ad;
        this->next=nullptr;
    }
};

void admin()
{
    cout<<"Enter password :";
    int ps;
    cin>>ps;

    if(ps==1311||ps==1274)
    {

          system("CLS");
    cout<<  "                               |Enter your choice :|"<<endl;
    cout << "                     |--------------------------------------------|"<<endl;
    cout << "                     |   4.list of lone receiving customers       |"<<endl;
    cout << "                     |--------------------------------------------|"<<endl;


    cout << "                     |--------------------------------------------|"<<endl;
    cout << "                     |   6.Removing existing account              |"<<endl;
    cout << "                     |--------------------------------------------|"<<endl;

    cout << "                     |--------------------------------------------|"<<endl;
    cout << "                     |   7.Show customers profile                 |"<<endl;
    cout << "                     |--------------------------------------------|"<<endl;

    cout << "                     |--------------------------------------------|"<<endl;
    cout << "                     |   8.Calculate after transaction            |"<<endl;
    cout << "                     |--------------------------------------------|"<<endl;
    cout << "                     |--------------------------------------------|"<<endl;
    cout << "                     |   5.Customer of the year                   |"<<endl;
    cout << "                     |--------------------------------------------|"<<endl;
    cout << "                     |--------------------------------------------|"<<endl;
    cout << "                     |   10.Show the list of existing account     |"<<endl;
    cout << "                     |--------------------------------------------|"<<endl;

    cout << "                     |--------------------------------------------|"<<endl;
    cout << "                     |     11.Exit                                |"<<endl;
    cout << "                     |--------------------------------------------|"<<endl;







    }
    else
    {
        system("CLS");
        cout<<"                             Incorrect password"<<endl;

    }

}
void customer()
{
    system("CLS");
    cout<<  "                                    |Enter your choice :|"<<endl;
    cout << "                     |--------------------------------------------|"<<endl;
    cout << "                     |             1.Create account               |"<<endl;
    cout << "                     |--------------------------------------------|"<<endl;

    cout << "                     |--------------------------------------------|"<<endl;
    cout << "                     |             2.Add different schemes        |"<<endl;
    cout << "                     |--------------------------------------------|"<<endl;
    cout << "                     |--------------------------------------------|"<<endl;
    cout << "                     |             3.Add loan system              |"<<endl;
    cout << "                     |--------------------------------------------|"<<endl;

    cout << "                     |--------------------------------------------|"<<endl;
    cout << "                     |             5.Update information           |"<<endl;
    cout << "                     |--------------------------------------------|"<<endl;

    cout << "                     |--------------------------------------------|"<<endl;
    cout << "                     |            11.Exit                         |"<<endl;
    cout << "                     |--------------------------------------------|"<<endl;

}

void menu()
{
//    cout<<"1.Create account"<<endl;//done
//    cout<<"2.Add different schemes"<<endl;;
//    cout<<"3.Add loan system"<<endl;
//    cout<<"4.list of lone receiving customers"<<endl;
//    cout<<"5.Update information"<<endl;//done
//    cout<<"6.Removing existing account"<<endl;//
//    cout<<"7.Show customers profile"<<endl;//done
//    cout<<"8.Calculate after transaction"<<endl;
////    cout<<"9.Customer of the year"<<endl;
//    cout<<"10.Show the list of existing account"<<endl;//done
//    cout<<"11.Exit"<<endl;//done
//    cout<<"   Enter your choice"<<endl;


//cout<<"1.ADMIN PANEL"<<endl;
//cout<<"2.CUSTOMER PANEL"<<endl;
//cout<<"11.EXIT"<<endl;



    cout << "                     |--------------------------------------------|"<<endl;
    cout << "                     |              <<Welcome >>                  |"<<endl;
    cout << "                     |--------------------------------------------|"<<endl;
cout<<endl<<endl;





    cout << "                     |--------------------------------------------|"<<endl;
    cout << "                     |              A.Admin pannel                |"<<endl;
    cout << "                     |--------------------------------------------|"<<endl;

    cout << "                     |--------------------------------------------|"<<endl;
    cout << "                     |              B.Customer pannel             |"<<endl;
    cout << "                     |--------------------------------------------|"<<endl;


    cout<<"Enter your choice :";
    char x;
    cin>>x;

    if(x=='A')
    {
        admin();
    }
    else if(x=='B')
    {
        customer();
    }

}

void create(node*&head,int n,int nu,int am,string na,string ad)
{
    node*newnd=new node(n,nu,am,na,ad);
    if(head==nullptr)
    {
        head=newnd;
        return;
    }
    node*tmp=head;
    while(tmp->next!=nullptr)
    {
        tmp=tmp->next;
        c++;
    }
    tmp->next=newnd;
}
void print(node*head)
{
    node*tmp=head;
    while(tmp!=nullptr)
    {
        cout<<endl;
         cout<<"-----------------------------"<<endl;
        cout<<"|NAME :"<<tmp->name<<endl;
         cout<<"-----------------------------"<<endl;
        cout<<"|ADDRESS :"<<tmp->adr <<endl;
         cout<<"-----------------------------"<<endl;
        cout<<"|NUMBER NO:"<<tmp->num<<endl;
         cout<<"-----------------------------"<<endl;
        cout<<"|NID NO:"<<tmp->nid<<endl;
         cout<<"-----------------------------"<<endl;
        cout<<"|AMMOUNT NO:"<<tmp->amnt<<endl;
         cout<<"-----------------------------"<<endl;

        cout<<endl<<endl;
        tmp=tmp->next;
    }
}
void update_info(node*head,int pos,int n,int nu,int am,string na,string ad)
{
    node*newnd=new node(n,nu,am,na,ad);
    node*tmp=head;
    for(int i=1; i<pos-1; i++)
    {
        tmp=tmp->next;
    }
    newnd->next=tmp->next;
    tmp->next=newnd;
}
void remove_acc(node*head,int pos)
{
    node*tmp=head;
    for(int i=1; i<pos-1; i++)
    {
        tmp=tmp->next;
    }
    node*delnd=tmp->next;
    tmp->next=tmp->next->next;
    delete delnd;

}
void addlone(node*&head2,int n,int nu,int am,string na,string ad)
{
    node*newnode=new node (n,nu,am,na,ad);
    if(head2==nullptr)
    {
        head2=newnode;
        return ;
    }
    node*temp=head2;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next=newnode;

}
void addprint(node*head2)
{
    node*tmp=head2;
    while(tmp!=nullptr)
    {

        cout<<endl;
         cout<<"-----------------------------"<<endl;
            cout<<"|NAME :"<<tmp->name<<endl;
         cout<<"-----------------------------"<<endl;
            cout<<"|ADDRESS :"<<tmp->adr <<endl;
         cout<<"-----------------------------"<<endl;
            cout<<"|NUMBER NO:"<<tmp->num<<endl;
         cout<<"-----------------------------"<<endl;
            cout<<"|NID NO:"<<tmp->nid<<endl;
         cout<<"-----------------------------"<<endl;
            cout<<"|AMMOUNT NO:"<<tmp->amnt<<endl;

         cout<<"-----------------------------"<<endl;
            cout<<endl<<endl;
        tmp=tmp->next;
    }
}
void addscms(node*&head)
{
    node*tmp=head;
    cout<<"enter your position :";
    int pos;
    cin>>pos;
    for(int i=0; i<pos-1; i++)
    {
        tmp=tmp->next;
    }
    cout << "                     |--------------------------------------------|"<<endl;
    cout << "                     |            1.Withdraw Money                |"<<endl;
    cout << "                     |--------------------------------------------|"<<endl;

    cout << "                     |--------------------------------------------|"<<endl;
    cout << "                     |            2.ADD money                     |"<<endl;
    cout << "                     |--------------------------------------------|"<<endl;

    cout << "                     |--------------------------------------------|"<<endl;
    cout << "                     |            3.Main menu                     |"<<endl;
    cout << "                     |--------------------------------------------|"<<endl;


    int ch;
    cout<<"Enter your choice :"<<endl;
    cin>>ch;
    int nwamt;
    cout<<"Enter your amount :";
    cin>>nwamt;

    if(ch==1)
    {

        tmp->amnt-=nwamt;
    }
    else if(ch==2)
    {
        tmp->amnt+=nwamt;
    }
    else menu();



}
void saveToFile(node *head, const string &filename)
{
    ofstream outFile(filename);

    if (!outFile)
    {
        cerr << "Error opening file: " << filename << endl;
        return;
    }

    node *tmp = head;
    while (tmp != nullptr)
    {
        outFile << tmp->nid << " " << tmp->num << " " << tmp->amnt << " "
                << tmp->name << " " << tmp->adr << endl;
        tmp = tmp->next;
    }

    outFile.close();
}


void loadFromFile(node *&head, const string &filename)
{
    ifstream inFile(filename);

    if (!inFile)
    {
        cerr << "Error opening file: " << filename << endl;
        return;
    }

    int n, nu, am;
    string na, ad;

    while (inFile >> n >> nu >> am >> na >> ad)
    {
        create(head, n, nu, am, na, ad);
    }

    inFile.close();
}

int main()
{
    node*head=nullptr;
    node*head2=nullptr;

    while(true)
    {
        menu();
        int op;
        cin>>op;
        if(op==1)
        {
            system("CLS");

            int n,nu,am,ok;

            string na,ad;
            cout<<"Enter your NId :";
            cin>>n;
            cout<<"Enter your NUMBER :";
            cin>>nu;
            cout<<"Enter your name :";
            cin>>na;
            cin.ignore();
            cout<<"Enter your ADDRESS :";
            cin>>ad;
            cout<<"Enter your AMMOUNT :";
            cin>>am;
            cout<<"press 1 to Save :";
            cin>>ok;
            if(ok==1)
            {
                system("CLS");

                create(head,n,nu,am,na,ad);
                const string filename = "customer_data.txt";

                loadFromFile(head, filename) ;


                saveToFile(head, filename);
                //print(head);
            }
        }
        else if(op==2)
        {
            system("CLS");
            addscms(head);
            print(head);

        }
        else if(op==3)
        {
            system("CLS");

            cout<<"1. Mortgages"<<endl;
            cout<<"2. Personal"<<endl;
            int x;
            cin>>x;


            if(x==1)
            {
                system("CLS");
                cout<<"             "<<"Mortgages Lone"<<endl;
                int n;
                int nu;
                int am;
                string na;
                string ad;
                cout<<"Enter your NId :";
                cin>>n;
                cout<<"Enter your NUMBER :";
                cin>>nu;
                cout<<"Enter your name :";
                cin>>na;
                cin.ignore();
                cout<<"Enter your ADDRESS :";
                cin>>ad;
                cout<<"Enter your AMMOUNT :";
                cin>>am;
                addlone(head2,n,nu,am,na,ad) ;


            }
            else if(x==2)
            {
                system("CLS");
                cout<<"             "<<"Personal Lone"<<endl;
                int n;
                int nu;
                int am;
                string na;
                string ad;
                cout<<"Enter your NId :";
                cin>>n;
                cout<<"Enter your NUMBER :";
                cin>>nu;
                cout<<"Enter your name :";
                cin>>na;
                cin.ignore();
                cout<<"Enter your ADDRESS :";
                cin>>ad;
                cout<<"Enter your AMMOUNT :";
                cin>>am;
                addlone(head2,n,nu,am,na,ad) ;

            }
            menu();
        }
        else if(op==4)
        {
            system("CLS");
            addprint(head2);

        }
        else if(op==5)
        {
            system("CLS");
            int n,nu,am;
            string na,ad;
            cout<<"Enter your NId :";
            cin>>n;
            cout<<"Enter your NUMBER :";
            cin>>nu;
            cout<<"Enter your name :";
            cin>>na;
            cin.ignore();
            cout<<"Enter your ADDRESS :";
            cin>>ad;
            cout<<"Enter your AMMOUNT :";
            cin>>am;
            int pos;
            cin>>pos;
            update_info(head,pos,n,nu,am,na,ad);

        }
        else if(op==6)
        {
            system("CLS");
            int pos;
            cin>>pos;
            remove_acc(head,pos);

        }
        else if(op==7)
        {
            system("CLS");
            getchar();
            print(head);

        }
        else if(op==8)
        {
            system("CLS");
            print(head);
        }
        else if(op==9)
        {
            system("CLS");
            cout<<c<<endl;

        }
        else if(op==10)
        {
            const string filename = "bank.txt";
            cout<<"enter your choice :";
            int x;
            cin>>x;
            if(x==1)
            {
                loadFromFile(head, filename);
            }



            else if(x==2)
            {
                saveToFile(head, filename);
            }



        }
        else if(op==11)break;
    }

}
