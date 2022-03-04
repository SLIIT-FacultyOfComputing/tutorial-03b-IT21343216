#include <iostream>

using namespace std;

int volume(int height, int width, int length);

struct Box{
  int height;
  int width;
  int length;
};

// 1. Define a structure called Box
// have the integer data types Height, Width, Length

// Do not change the main function
int main() {
  int Box1height, Box1width, Box1length;
  int Box2height, Box2width, Box2length;
    // 2. Create a variable called box1 of the Box structure type
    // int box1Height, box1Width, box1Length;
    // 3. Create a variable called box2 of the Box structure type
    
    // int box2Height, box2Width, box2Length;
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> Box1height;
    cout << "Enter Box 1 Width : ";
    cin >> Box1width;
    cout << "Enter Box 1 Length : ";
    cin >> Box1length;
    
    cout << "Enter Box 2 Height : ";
    cin >> Box2height;
    cout << "Enter Box 2 Width : ";
    cin >> Box2width;
    cout << "Enter Box 2 Length : ";
    cin >> Box2length;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume( Box1height,Box1width,Box1length )
             + volume( Box2height,Box2width,Box2length );
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}
int volume(int height, int width, int length)
{
  int vol;
  return vol=height*width*length;
}

// Implement the functions here
