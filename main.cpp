#include <iostream>
#include "PlaylistNode.h"

using namespace std;

//step 3 - implement PrintMenu function
void PrintMenu(const string playlistTitle) {
   cout << playlistTitle << " PLAYLIST MENU" << endl;
   cout << "a - Add song" << endl;
   cout << "d - Remove song" << endl;
   cout << "c - Change position of song" << endl;
   cout << "s - Output songs by specific artist" << endl;
   cout << "t - Output total time of playlist (in seconds)" << endl;
   cout << "o - Output full playlist" << endl;
   cout << "q - Quit\n" << endl;
   
}

/*Step 4: Implement the ExecuteMenu() function. (1 pt)
ExecuteMenu() takes 3 parameters: a character representing the user's choice, a playlist title,
and the pointer to the head node of a playlist. ExecuteMenu() performs the menu options (described below)
according to the user's choice and returns the pointer to the head node of the playlist.*/
PlaylistNode* ExecuteMenu(char option, string playlistTitle, PlaylistNode* headNode) {
   /* Type your code here */
   return headNode;
}

int main() {
   
  string playListTitle;
  char choice;

  //step 2 prompt for playlist title
  cout << "Enter playlist's title:\n" << endl;
  getline(cin, playListTitle);

//step 5 call printmenu and prompt for choice
  PrintMenu(playListTitle);

  cout << "Choose an option:" << endl;
  cin >> choice;

   
   return 0;
}

