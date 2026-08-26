# include<iostream>
using namespace std;
class Volume
{
    public:
    double length;
    double width;
    double height;
    // default constructor
    Volume()
    {
        length = 5;
        width = 5;
        height = 5; 
    }
    // single psramaterized
    Volume(double side)
    {
        length = side;
        width = side;
        height = side;
    }
    //double parameterized 
    Volume(double l, double w, double h)
    {
      length = l;
      width = w;
      height = h;
    }

    // define a member fxn
    double calculateMemberfunction()
    {
        return length * width* height;    
    }
};
int main()
{
    int choice;
    do
    {
        cout << "Date menu\n";
        cout << "1. Volume with default values \n";
        cout << "2. Volume with length,breadth and height with same value \n";
        cout << "3. Volume with different length,breadth and height values\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
              case 1: {
                Volume V1;
                cout << "Volume default: " << V1.calculateMemberfunction() << endl;
                break;
            }
            case 2: {
                double side;
                cout << "Enter the value for all sides: ";
                cin >> side;
                Volume V2(side);
                cout << "Volume box: " << V2.calculateMemberfunction() << endl;
                break;
            }
            case 3: {
                double l, w, h;
                cout << "Enter length, width, and height: ";
                cin >> l >> w >> h;
                Volume V3(l, w, h);
                cout << "Volume: " << V3.calculateMemberfunction() << endl;
                break;
            }
            case 4:{
                cout << "Exit" << endl;
                break;}
            default:
                cout << "Invalid choice " << endl;
        }
    } while (choice != 4);
   
    return 0;
}