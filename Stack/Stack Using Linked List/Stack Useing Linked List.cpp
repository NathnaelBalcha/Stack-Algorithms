#include <iostream>
using namespace std;
int counter_size = 1, Re = 0;
struct node{
		int data;
		node *next;
	};
node *Tops = NULL;
bool isEempty(){
	if (Tops == NULL){
			return true;
		}
	else{
			return false;
		}
}
void push(int values){
	node *temp=new node;
	temp->data=values;
	temp->next=Tops;
	Tops=temp;
}
void pop(){
	int value;
	if (isEempty()){
			cout <<" Stack is Eempty\n";
		}
	else{
			node *temp=Tops;
			Tops=Tops->next;
			cout << " Your Data Is Deleted (" << temp->data << ")\n";
			delete (temp);
		}
}
void size(){
	if (isEempty()){
			cout<<" Stack is Eempty\n";
		}
	else{
			node *temp2=Tops;
			while (temp2->next!= NULL){
					temp2=temp2->next;
					counter_size++;
				}
			cout << " Stack Size is: " << counter_size << endl;
		}
	counter_size = 1;
}
void top(){
	if (isEempty()){
			cout <<" Stack is Eempty\n";
		}
	else{
			cout << " Top Stack is: " << Tops->data << endl;
		}
}
void Display(){
	if (Tops == NULL){
			cout<<" Stack is Eempty";
		}
	else{
			node *temp=Tops;
			while (temp->next!=NULL){
					cout<<" " <<temp->data << " ";
					temp=temp->next;
				}
			cout<<temp->data;
		}
	cout<<endl;
}
int main(){
	int Choise1,Choise2,Data;
	cout << "\t  Stack Useing Linked List\n";
	cout << "\t============================\n\n";
	do{
			cout << "\tMain Menu";
			cout <<"\n ------------------------------\n";
			cout << " |1 Display All Stack         |\n";
			cout << " |2 Push Stack                |\n";
			cout << " |3 Pop Stack                 |\n";
			cout << " |4 Top Stack                 |\n";
			cout << " |5 Stack Size                |\n";
			cout << " |6 Is the Stack Eempty       |\n";
			cout << " |7 Exit                      |";
			cout <<"\n ------------------------------";
			cout << "\n Enter your Choise ";
			cin >> Choise1;
			cout <<endl;
			switch (Choise1){
				case 1:
					cout << " --------------------------\n";
					Display();
					cout << " --------------------------\n";
					cout << endl;
					break;
				case 2:
					do {
							cout << " Enter Data to Push: ";
							cin >> Data;
							push(Data);
							cout << " Do You Want To Insert Another Data (1/0): ";
							cin >> Choise2;
							cout << endl;
							if (Choise2 == 1){
									Re = 0;
								}
							else if (Choise2 == 0){
									Re = 1;
								}
							else{
									cout << " Enter the corrt No\n\n";
								}
						}while (Re == 0);
					Re = 0;
					break;
				case 3:
					do {
							cout << " Do You Want To POP Data (1/0): ";
							cin >> Choise2;
							cout << endl;
							if (Choise2 == 1){
									cout << " --------------------------\n";
									pop();
									cout << " --------------------------\n";
								}
							else if (Choise2 == 0){
									Re = 1;
								}
							else{
									cout << " Enter the corrt No\n\n";
								}
						}while (Re == 0);
					Re = 0;
					cout << endl;
					break;
				case 4:
					cout << " --------------------------\n";
					top();
					cout << " --------------------------\n";
					cout << endl;
					break;
				case 5:
					cout << " --------------------------\n";
					size();
					cout << " --------------------------\n";
					cout << endl;
					break;
				case 6:
					cout << " --------------------------\n";
					cout<<" Is the Stack Eempty: "<< isEempty() << endl;
					cout << " --------------------------\n";
					cout << endl;
					break;;
				case 7:
					return 0;
					break;
				default:
					cout << " Enter the corrt No\n\n";
				}
		}while (Re == 0);
	return 0;
}

