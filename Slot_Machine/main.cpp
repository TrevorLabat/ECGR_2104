#include <iostream> 
#include <stdlib.h>
#include <time.h>

using namespace std;

char map(int rand) {

  switch (rand) {
      case 1:
          return '7';
      case 2:
          return '$';
      case 3:
          return '#';
      case 4:
          return 'X';
      default :
        return ' ';
  }
}
    
main() {
    srand(time(0));
    char choice;

    cout << "Game rules: " << endl;

    cout << "777 = 100 dollars" << endl;
    cout << "$$$ = 50 dollars" << endl;
    cout << "### = 25 dollars" << endl;
    cout << "XXX = 10 dollars" << endl;

    cout << "Do you want to play Slot Machine for $10? (y/n)" << endl;
    
    cin >> choice;
    
    while (choice != 'n') {
        
        int credit = 10;
        char handle;
        cout << "Starting credit: $10" << endl;

        if (choice == 'n') {
            break;
        }
        
        while (handle != 'e') {
             
        int rand1 = rand() % 4 +1;
        int rand2 = rand() % 4 +1;
        int rand3 = rand() % 4 +1;
        
        cout << endl;
        cout << endl;
        cout << "Press 'p' to pull the imaginary handle down or 'e' to exit" << endl;
        cin >> handle;
            
            if (handle == 'e') {
                cout << "You have left the game with: " << credit << " dollar(s)" << endl;
                break;
            }
            credit = credit - 1;
            if (credit < 0) {
                cout << "Out of money! Maybe consider inserting more >:}" << endl;
                return 0;
            }
            
            cout << "Credit remaining: " << credit << endl;
            cout << endl;
            cout << "Result: ";
            
            char symb1 = map(rand1);
            char symb2 = map(rand2);
            char symb3 = map(rand3);
        
            cout << symb1 << symb2 << symb3 << endl;
              
              if (rand1 == 1 && rand2 == 1 && rand3 == 1)  {
                cout << "Jackpot! You won $100!" << endl;
                credit = credit + 100;
              }
              else if (rand1 == 2 && rand2 == 2 && rand3 == 2)  {
                cout << "Big money! You won $50!" << endl;
                credit = credit + 50;
              }
              else if (rand1 == 3 && rand2 == 3 && rand3 == 3) {
                cout << "Nice! You won $25!" << endl;
                credit = credit + 25;
              }
              else if (rand1 == 4 && rand2 == 4 && rand3 == 4) {
                cout << "You won $10! Now you can go buy a small starbucks coffee!" << endl;
                credit = credit + 10;
              }
              else {
                cout << "99% of gamblers quit before their big win!" << endl;
                cout << "this is a test" << endl;
              }

        }
         if (handle == 'e') {
        return 0;
        }
    }
  return 0;
  
}
