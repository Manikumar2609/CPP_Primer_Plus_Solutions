#include <iostream>

using namespace std;

struct Box
{
  char maker[40];
  float height;
  float width;
  float length;
  float volume;
};
void f_display_Box(Box box1);
void f_set_Volume(Box* ptr_box);

int main()
{
  struct Box box1;
  cout << "Enter the name of the maker of the box: ";
  cin.getline(box1.maker,40);
  cout << "Enter the height of the box: ";
  cin >> box1.height;
  cout << "Enter the width of the box: ";
  cin >> box1.width;
  cout << "Enter the length of the box: ";
  cin >> box1.length;
  cout << "Enter the volume of the box: ";
  cin >> box1.volume;

  Box* ptr_box = &box1;
  cout << "Box_1 has following characters: " << endl;
  f_display_Box(box1);
  cout << endl;
  cout << "After calculating volume of the box: " << endl;
  cout << "------------------------------------\n";
  f_set_Volume(ptr_box);
  f_display_Box(box1);
  cout <<"-------------------------------------\n";

  return 0;
}
void f_display_Box(Box box1)
{

  cout <<"The maker is "<< box1.maker << "\n"
       <<"The height is "<< box1.height << "\n"
       <<"The width is "<< box1.width << "\n"
       <<"The length is "<< box1.length << "\n"
       <<"The volume is "<< box1.volume << "\n";

  return;//optional
}
void f_set_Volume(Box* ptr_box)
{
  ptr_box->volume = ptr_box->length * ptr_box->width * ptr_box->height;
  return;//optional
}
