//HOTTLE MANAGE MENT PROJECT 
#include<iostream>
#include<windows.h>
#include<string.h>
#define AC 1000						//use for macro 
#define Non_AC 500					//use for macro
using namespace std;
class HOTEL_MANAGEMENT{
	public:
		
	void welcome(){			//%%%%%%%%%%%%%%%%%%%%%%%%  NEW FUNCTION  %%%%%%%%%%%%%%%%%%%%%%%%%  ( 1 )
		char str[]="						________WELCOME JANATA HOTEL_______";
		for(int i=0; i<40; i++){
			cout<<str[i];
			Sleep(400);				//sleep mode
		}
	}
	
	void registration(){		//%%%%%%%%%%%%%%%%%%%%  NEW FUNCTION %%%%%%%%%%%%%%%%%%%%%		( 2 )
		string name;
		string id;
		long int age;
		int number;
		cout<<"\n\n\n";
		cout<<"plese enter your name : ";
		cin>>name;
		cout<<"plese enter your aadhara id : ";
		cin>>id;
		cout<<"plese enter your age : ";
		cin>>age;
		cout<<"plese enter your phone number : ";
		cin>>number;
		cout<<"\n";
		Gender:				//working goro statement 
		cout<<"plese enter your Gender :- \n\n";
			char g;
		cout<<"\n\n";
		cout<<" you male so enter this button : M / m "<<endl<<"\n";
		cout<<"you female so enter this button : F / f \n\n";
		cout<<"\t\t plese conform your gender :- ";
		cin>>g;
		Sleep(2000);
		system("cls");
		cout<<"------------------------------------------------------------"<<endl;
		cout<<"------------------------------------------------------------"<<endl;
		cout<<"your name : "<<name<<endl;
		cout<<"your aadhar id : "<<id<<endl;
		cout<<"your age : "<<age<<endl;
		cout<<"your phone number : "<<number<<endl;
	//	Gender:
		if(g=='M'||g=='m'){
			cout<<"\n";
			cout<<"  your gender is :- male";
		}
		else if(g=='F'||g=='f'){
			cout<<"\n";
			cout<<"  your gender is :- female ";
		}
		else {
			cout<<"\t\t\t\t WORNG CHOICE \n\n";
			cout<<"\t\t\t plese try again \n\n";
			Sleep(1000);
			//	goto Gender;
			Sleep(555);
			system("cls");
				goto Gender;
		}
		
		cout<<"\n\n";
		
		cout<<"----------CONFORM YOUR REGISTRATION-----------"<<endl;
		
		cout<<"\n\n";
		cout<<" ..............................Plese wait loading is started............... "<<endl;
		Sleep(5000);
		system("cls");				//clear screen 
		
	}
	
	
	void loading(){				//%%%%%%%%%%%%%%%%% NEW FUNCTION %%%%%%%%%%%%%%%%%%%		( 3  )
		//	system("color 02");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t Loading..";
	char x=219;
	for(int i=0; i<50; i++){
		cout<<x;
		if(i<10){
			Sleep(500);
		}
		else if(i>=10&&i<20){
			Sleep(200);
		}
		else if(i>=10){
			Sleep(55);
		}
	}
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t WELCOME "<<endl;
	cout<<"\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
	cout<<"                                                                ";
	cout<<"                                                                ";
//	system("color 20");
	cout<<"\t\t Your registration is compleat successful \n";
	cout<<"\n\n";
	Sleep(3000);
	system("cls");
	}
	
	
	void Rooms(){				// %%%%%%%%%%%%%%%%%%  NEW FUNCTION %%%%%%%%%%%%%%%%%%		( 4 )
		//	void RoomBook()
	int rooms=50;
	cout<<"\n\n";
	cout<<"Total rooms available in this hotel : "<<rooms;
	cout<<endl;
	cout<<"\n\n";
	hii:							//not working so other time doubt ?? 
	cout<<" can you room book so plese press tha 'Y' button "<<endl;
	cout<<"\n";
	cout<<" can't you room not book so plese press tha 'N' button "<<endl;
	cout<<"\n";
//	char Y,N;
	char c;		//choice
	cout<<"plese choose your choice \n";
	cin>>c;
	if(c=='Y'||c=='y'){			
	cout<<"\n\n";				// Room book
		cout<<"\t\t\t WELCOME "<<endl;
		cout<<"\t\t**********";
		cout<<"\n\n\n\n";
		Sleep(1500);
		system("cls");
			//	RoomBook();
		enter(); 					//%%%%%%% creat function into function %%%%%%%%%%      
	}
	
	else if(c=='N'||c=='n'){					//Not room book 
		cout<<"exit";
		system("exit");
		Sleep(1000);
		system("cls");
		exit(0);
	}
	
	else if(c==!'Y'||c==!'N'){		//  Worng choice 
		Sleep(1000);
		system("cls");
		cout<<"\n\n";
		cout<<"\t\t   WORNG CHOICE !!"<<endl;
		cout<<"\t\t__________";
		cout<<"\n\n";
		cout<<"\t Plese enter your desison"<<endl;
		cout<<"\n";
		goto hii;
	}
	
//	void RoomBook(){
//		cout<<"hii";	?????????????????????????/??????????????????//%%%%%%%%%%%%% enter function decleration %%%%%%%%%%%%%%
	}
	void enter(){
			cout<<"\n\n";
			char arr[]="\t\t\t Welcome to you for booking janata hotel room ";
			for(int i=0; i<48; i++){
				cout<<arr[i];
				Sleep(200);
			}
		}
		void show(){
			call:
			cout<<"\n\n";
			cout<<"in this hotel two types rooms available :- "<<endl;
			cout<<"\t\t\t\t\t  1 : AC room "<<endl;
			cout<<"\n";
			cout<<"\t\t\t\t\t  2 : Non_AC room "<<endl;
			cout<<"\n";
			cout<<"\t AC room price is :- "<<AC<<endl<<"\n";
			cout<<"\t Non_AC room price is :- "<<Non_AC<<"\n\n";
			cout<<"you need AC room book so enter this button :- A / a \n\n";
			cout<<"you need Non_AC room book so enter this button :- N / n \n\n ";
			char c; 			//enter this button so AC /  Non_AC
			cout<<"\t\t\t plese enter your decision :- ";
			cin>>c;
			cout<<"\n\n";
			if(c=='A'||c=='a'){
			cout<<"\t\t your AC room is booking "<<endl;
			cout<<endl;
			
			ac();								//function in function call-------------( 1 )
			}						
			else if(c=='N'||c=='n'){
				cout<<"\t\t your Non_AC room is booking "<<endl;
				
			non_ac();					//	//function in function call-------------( 2 )
			}
			else{
				cout<<"\t\t\t\t WORNG CHOICE "<<endl;				//doubt..................
				cout<<"\t\t\t ........................................\n\n";
				Sleep(2500);
				system("cls");
				cout<<endl;
				cout<<"\t\t\t plese enter your decision \n\n";
				goto call;
			}				
			}
	
		void ac(){									//decleration--------------------( 1 )
		
		Sleep(1500);
		system("cls");
			cout<<" ";
			mark:
			int room_no=1;			//AC rooms 1 to 25
			int room_pas=4220;
			int pas;		//pasword 
			cout<<"your room no is  :- "<<room_no<<endl;
			cout<<"your room pasword is :- "<<room_pas<<endl;
			cout<<"\n\n";
			cout<<"Go to your room and enjoy !! \n\n\n";
			cout<<"plese enter your room pasword \n\n";
			cin>>pas;		//enter ths pasword
			if(room_pas==pas){
				cout<<"\t\t\t\t OPEN THA DOOR\n\n";
				cout<<"\t\t\t\t  WELCOME YOUR ROOM \n\n\n";
				cout<<"\t\t\t\t... ENJOY ... ";
				
			}
			else{
				cout<<"\t\t\t\t  WORNG PASSWORD !!\n\n\n";
				cout<<"\t\t\t\t  Plese try again...... \n\n\n";
				Sleep(2000);
				system("cls");
				goto mark;
			}
		}
		void non_ac(){				//****			//decleration--------------------( 2 )
			Sleep(1500);
		system("cls");
			cout<<" ";
			mark:
			int room_no=27;			//AC rooms 1 to 25
			int room_pas=4802;
			int pas;		//pasword 
			cout<<"your room no is  :- "<<room_no<<endl;
			cout<<"your room pasword is :- "<<room_pas<<endl;
			cout<<"\n\n";
			cout<<"Go to your room and enjoy !! \n\n\n";
			cout<<"plese enter your room pasword \n\n";
			cin>>pas;		//enter ths pasword
			if(room_pas==pas){
				cout<<"\t\t\t\t OPEN THA DOOR\n\n";
				cout<<"\t\t\t\t  WELCOME YOUR ROOM \n\n\n";
				cout<<"\t\t\t\t... ENJOY ... ";
				
			}
			else{
				cout<<"\t\t\t\t  WORNG PASSWORD !!\n\n\n";
				cout<<"\t\t\t\t  Plese try again...... \n\n\n";
				Sleep(2000);
				system("cls");
				goto mark;
			}
		}//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
		
		void eating(){
			cout<<"\n\n";
			Sleep(1000);
			system("cls");
	cout<<"\n\n";
	cout<<"\t\t\t\t\t  'HELLO  SIR / MADAM '\n\n";
	order:
	cout<<"\t * Plese eat order now \n\n";
	cout<<"you order now so enter this button :- Y / y \n\n";
	cout<<"you not order so enter this button :- N / n \n\n";
	cout<<"Plese enter your choice :- ";
	char O; 		//order input 
	cin>>O;
	cout<<"\n\n";
	if(O=='Y'||O=='y'){
		cout<<"plese show menu list :- \n\n\n";
		menu_list();			//creat function into function
	}
	
	else if(O=='N'||O=='n'){
		cout<<"  OK thank you ";
	exit (0);
	}
	
	else{
		cout<<"\t\t\t\t WORNG CHOICE !! \n\n";
		cout<<"\t\t plese try again \n\n";
		Sleep(1500);
		system("cls");
		
		goto order;
	}
}
	 menu_list(){						//decleration function
	 	system("cls");
	 	Order:					//use jumping tatement 
	 	cout<<" you order plese veg / Non_veg \n\n";
	 	cout<<"you order veg, so enter this button : V / v \n\n";
	 	cout<<"you order Non_veg, so enter this button : N / n \n\n"; 
	 	cout<<"\t\t\t plese choice order : ";
	 	char c;
	 	cin>>c;
	 	cout<<"\n\n";
	 	if(c=='V'||c=='v'){
	 		cout<<"you order veg \n\n";
	 		cout<<"\t\t\t\t\t plese so and choose items \n\n";
	 		Sleep(2000);
	 		system("cls");
	 		Veg();														//new functiondecler 
		 }
		 else if(c=='N'||c=='n'){
		 	cout<<"you order Non_veg \n\n";
	 		cout<<"\t\t\t\t\t plese so and choose items \n\n";
	 		Sleep(2500);
	 		system("cls");
	 		Non();														//new function declear 
		 }
		 else{
		 	cout<<"\t\t\t\t WORNG CHOICE \n\n";
		 	cout<<"\t\t\t plese try again \n\n";
		 	Sleep(2500);
		 	system("cls");
		 	goto Order;			//call jumping statement
		 }
	 	
		cout<<"\n\n";
	 
	}
	Veg(){														//function call
		cout<<"\n\n";
	 	system("color a");
		char arr[]="\t\t\t\t\t\t MENU LIST";
		for(int i=0;i<17; i++){
			cout<<arr[i];
			Sleep(300);
		}
		cout<<"\n\n";
		cout<<" 1: Rice   		\t(50 rs ) \t\t 5: Paneer Masala\t\t(100 rs )"<<endl;
		cout<<" 2: Burger 		\t(80 rs ) \t\t 6: Sweets		\t(20 rs )"<<endl;
		cout<<" 3: Biryani		\t(80 rs ) \t\t 7: Pizza		\t(150 rs)"<<endl;
		cout<<" 4: Paneer atikka\t\t(100 rs )"<<endl;
	cout<<"\n\n";
//	system("color d");
	cout<<"\t\t\t Order now \n\n"; //*******************
	char ch;
	cout<<"you order Veg item so enter this button ( 1 , 2 , 3 , 4, 5 , 6 , 7 ) \n";
	cout<<"Not order so enter this button : N \n\n";
	ORDER:
		cout<<"plese choose item : ";
	cin>>ch;
	switch(ch){
		case '1':
			Sleep(900);
						system("cls");
						cout<<"\n\n";
			cout<<"\t your order is Rice (50 rs)";
			break;
			case '2':
						Sleep(900);
						system("cls");
						cout<<"\n\n";
				cout<<"\t your order is Burger (80 rs)";
				break;
				case '3':
					Sleep(900);
						system("cls");
						cout<<"\n\n";
					cout<<"\t your order is Biryani (80 rs)";
					break;
					case '4':
						Sleep(900);
						system("cls");
						cout<<"\n\n";
						cout<<"\t your order is Paneer Tikka  (100 rs) \n";
						break;
						case '5':
							Sleep(900);
							system("cls");
							cout<<"\n\n";
							cout<<"\t your order is Paneer Masala (100 rs) \n";
							break;
							case '6':
								Sleep(900);
								system("cls");
								cout<<"\n\n";
								cout<<"\t your order is Sweet (20 rs) \n";
								break;
								case '7':
									Sleep(900);
									system("cls");
									cout<<"\n\n";
									cout<<"\t your order is Pizza (150 rs) \n";
									break;
										case 'N':
											Sleep(900);
											system("cls");
											cout<<"\n\n";
											cout<<"\t\t OK sir / mam";
											break;
						default :
							cout<<"worng choice :\n\n";
							goto ORDER;
						//	break;
	}
	}
	Non(){													//function call
		cout<<"\n\n";
	 	system("color a");
		char arr[]="\t\t\t\t\t\t MENU LIST";
		for(int i=0;i<17; i++){
			cout<<arr[i];
			Sleep(300);
		}
		cout<<"\n\n";
		cout<<" 3 types Non_Veg recipe available :-\n\n";
		cout<<" * chicken :					* mutton :					* fish :\n\n";
		cout<<" 1: chicken biryani	(100 rs)		A: mutton biryani (240 rs) 			a: fish fry \n\n";
		cout<<" 2: chicken chilli      (90 rs)	 		B: mutton chilli (250 rs )			b: fish curry \n\n ";
		cout<<" 3: Leg piece 		(80 rs)			C: mutto pakoda  (140 rs)			c: _____ \n\n";
		cout<<" \t choose yourr item :- \n\n";  //************************
			char ch;
	cout<<"you order chicken item so enter this button ( 1 , 2 , 3 ) \n";
	cout<<"you order mutton item so enter this button  ( A , B , C ) \n";
	cout<<"you order fish item so enter this button    ( a , b , c ) \n";
	cout<<"Not order so enter this button : N \n\n";
	ORDER:
		cout<<"plese choose item : \n\n";
	cin>>ch;
	switch(ch){
		case '1':
						Sleep(900);
						system("cls");
						cout<<"\n\n";
			cout<<" your order is Chicken Biryani (100 rs)";
			break;
			case '2':
						Sleep(900);
						system("cls");
						cout<<"\n\n";
				cout<<"your order is Chicken Chilli (90 rs)";
				break;
				case '3':
						Sleep(900);
						system("cls");
						cout<<"\n\n";
					cout<<"your order is Leg Piece (80 rs)";
					break;
					case 'A':
						Sleep(900);
						system("cls");
						cout<<"\n\n";
						cout<<"your order is Mutton Biryani (240 rs) \n";
						break;
						case 'B':
							Sleep(900);
							system("cls");
							cout<<"\n\n";
							cout<<"your order is Mutton Chilli (250 rs) \n";
							break;
							case 'C':
								Sleep(900);
								system("cls");
								cout<<"\n\n";
								cout<<"your order is Mutton Pakoda (140 rs) \n";
								break;
								case 'a':
									Sleep(900);
									system("cls");
									cout<<"\n\n";
									cout<<"your order is Fish Fry (80 rs) \n";
									break;
									case 'b':
										Sleep(900);
										system("cls");
										cout<<"\n\n";
										cout<<"your order is Fish Curry (80 rs) \n";
										break;
										case 'N':
											Sleep(900);
											system("cls");
											cout<<"\n\n";
											cout<<"\t\t OK sir / mam";
											break;
						default :
							cout<<"worng choice :\n\n";
							goto ORDER;
						//	break;
	}
	}
		void thanku(){
			cout<<"\n\n\n\n\n";
			system("color b6");
			char arr[]="\t\t\t\t.........THANK YOU...........";
			for(int i=0; i<35; i++ ){
				cout<<arr[i];
				Sleep(300);
			}
			cout<<"\n\n\n\n\n\n\n\n";
		}
		void payment(){
		    //write code
		}
};

int main(){
	
	HOTEL_MANAGEMENT obj;
	
	obj.welcome();
	
	obj.registration();
	
	obj.loading();
	
	obj.Rooms();
	
	obj.show();
	
	obj.eating();
	
	obj.thanku();
	
	return 0;
}
