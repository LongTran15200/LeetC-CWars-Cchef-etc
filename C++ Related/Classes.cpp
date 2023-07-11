#include <iostream>

using namespace std;

//Simpler Class & Objective
/*
#include <iostream>

using namespace std;

class simpleStr{
    public:
        void saying(){
            cout << "This is Class";
        }
};
 
int main()
{
    
    simpleStr isObject;
    isObject.saying();

    return 0;
}
*/


//creating class variable as Cookie
class Cookie {
    private:
        //setting up variables in private help to keep track of your variable and reuse them
        string color;

    public:
        //This main code is to create a cookie that expressly points to color
        Cookie (string color) {
            this->color = color;
        }
        //This function is to get the specific color of a cookie
        string getColor () {
            return color;
        }
        //This function is to set the color to a cookie in case you want to switch to a different color
        void setColor (string color) {
            this->color = color;
        }
};


int main() {


  //Get cookie
    Cookie* cookieOne = new Cookie("green");
    Cookie* cookieTwo = new Cookie("blue");

  //Switching color of the cookieOne to yellow
    cookieOne->setColor("yellow"); 


  //outputting the cookie
    cout << "C1: " << cookieOne->getColor() << endl;
    cout << "C2: " << cookieTwo->getColor() << endl;

}

