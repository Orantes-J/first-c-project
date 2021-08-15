#include <iostream>

using namespace std;

int main(){
    const int exp_date {30};
    
    //price per size
    
    const int small_room_price {25};
    const int large_room_price {35};
    const double sales_tax {0.06};
    
    
    cout << "Welcome to Juan's carpet cleaning services" << endl;
    cout << endl;
    
    int small_room_requested {0};
    cout << "How many small rooms would you like cleaned? ";
    cin >> small_room_requested;
    int large_room_requested {0};
    cout << "How many large rooms would you like cleaned? ";
    cin >> large_room_requested;
    
    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms selected: " << small_room_requested << endl << endl;
    cout << "Number of large rooms selected: " << large_room_requested << endl << endl;
    cout << "Price per small room is: $" << small_room_price<< endl <<endl;
    cout << "Price per large room is: $" << large_room_price << endl <<endl;
    int small_room_cost {small_room_price * small_room_requested};
    int large_room_cost {large_room_price * large_room_requested};
    int customer_cost {small_room_cost + large_room_cost};
    cout<< "Your cost is: $" << customer_cost << endl << endl;
    double customer_total_tax {customer_cost * sales_tax};
    cout << "Sales tax is: $" << customer_total_tax << endl;

    cout <<  "=====================================" << endl;
    
    cout << "Your total is: $" << customer_cost + customer_total_tax<<endl << endl;
    cout << "This price is valid for " << exp_date << " days" << endl << endl;
    cout << "Thank you for shopping with us (:" << endl;
    
    return 0;
}
