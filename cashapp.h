#ifndef cashapp
#define cashapp

class cashapp
{
  public:
  cashapp();
  int conversion(int);
  // converts money if money is being sent to another country
  int connect(int,int);
  //connects two users of app and creates line to send currency over
  int send (int, int, int);
  //sends money alloted between two users
}
#endif
