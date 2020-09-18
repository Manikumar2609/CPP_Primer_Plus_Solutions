#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int Num_Scores = 10;

int input(double* ptr_scores);
void display(double* ptr_scores,int size);
double average(double* ptr_scores, int size);

int main()
{
  int size;
  double score,avg;
  double scores[Num_Scores];
  double* ptr_scores = scores;

  size = input(ptr_scores);
  display(ptr_scores,size);
  avg = average(ptr_scores,size);

  cout << "The average is " << avg << ".\n";

  return 0;
}
int input(double* ptr_scores)
{
  double score;
  int cnt = 0;
  cout << "ENter up to 10 golf scores(to stop enter a non-digit): " << endl;
  for(int i = 0; i < Num_Scores; i++){
    if(cin >> score){
      ptr_scores[i] = score;
      ++cnt;
    }
    else
    {
      break;
    }
  }
  return cnt;
}
void display(double* ptr_scores, int size)
{
  cout << "The scores are ";
  for(int i = 0; i < size; ++i){
    if(ptr_scores[i] >= 0){
      cout << ptr_scores[i] << " ";
    }
  }
  cout << endl;
}
double average(double* ptr_scores, int size)
{
  double sum  = 0.0;
  for(int i = 0; i < size; ++i){
    sum += ptr_scores[i];
  }
  return sum / double(size);
}
