#include <iostream.h>
const int sizes = 5;
int Tops = -1,counter_size = 0,Re = 0;
int stack_array[sizes];
bool isFull(){
	if (Tops == (sizes - 1)){
			return true;
		}
	else{
			return false;
		}
}
bool isEempty(){
	if (Tops == -1){
			return true;
		}
	else{
			return false;
		}
}
void push(int data){
	if (isFull()){
			cout << " Stack Over Flow\n";
		}
	else{
			Tops = Tops + 1;
			stack_array[Tops]=data;
		}
}
void pop(){
	int value;
	if (isEempty()){
			cout <<" Stack is Eempty\n";
		}
	else{
			value = stack_array[Tops];
			Tops = Tops - 1;
			cout << " Your Data Is Deleted (" << value << ")\n";
		}
}
void size(){
	for (int i = -1; i < Tops; i++){
			counter_size ++;
		}
	if (isEempty()){
			cout <<" Stack is Eempty\n";
		}
	else{
			cout << " Stack Size is: " << counter_size << endl;
		}
	counter_size = 0;
}
void top(){
	int value = stack_array[Tops];
	if (isEempty()){
			cout <<" Stack is Eempty\n";
		}
	else{
			cout << " Top Stack is: " << value << endl;
		}
}
void Display(){
	int value;
	if (isEempty()){
			cout <<" Stack is Eempty";
		}
	else{
			int z = 0;
			for (int y = -1; y < Tops; y++){
					value = stack_array[z];
					cout <<" " << value <<" ";
					z++;
				}
		}
}
int main(){
	int Choise1,Choise2,Data;
	cout << "\t     Stack Useing Array\n";
	cout << "\t============================\n\n";
	do{
			cout << "\tMain Menu";
			cout <<"\n ------------------------------\n";
			cout << " |1 Display All Stack         |\n";
			cout << " |2 Push Stack                |\n";
			cout << " |3 Pop Stack                 |\n";
			cout << " |4 Top Stack                 |\n";
			cout << " |5 Stack Size                |\n";
			cout << " |6 Is the Stack Full         |\n";
			cout << " |7 Is the Stack Eempty       |\n";
			cout << " |8 Exit                      |";
			cout <<"\n ------------------------------";
			cout << "\n Enter your Choise ";
			cin >> Choise1;
			cout <<endl;
			switch (Choise1){
				case 1:
					cout << " --------------------------\n";
					Display();
					cout << endl;
					cout << " --------------------------\n";
					cout << endl;
					break;
				case 2:
					do {
							cout << " Enter Data to Push: ";
							cin >> Data;
							push(Data);
							if (! isFull()){
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
								}
							else{
									Re = 1;
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
					cout<<" Is the Stack Full: "<< isFull() << endl;
					cout << " --------------------------\n";
					cout << endl;
					break;
				case 7:
					cout << " --------------------------\n";
					cout<<" Is the Stack Eempty: "<< isEempty() << endl;
					cout << " --------------------------\n";
					cout << endl;
					break;;
				case 8:
					return 0;
					break;
				default:
					cout << " Enter the corrt No\n\n";
				}
		}while (Re == 0);
	return 0;
}

