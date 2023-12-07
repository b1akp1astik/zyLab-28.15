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
PlaylistNode* ExecuteMenu(char option, string playlistTitle, PlaylistNode* head) {



  //Step 6: Implement "Output full playlist" menu option in ExecuteMenu().
  if (option == 'o'){
    cout << playlistTitle << " - OUTPUT FULL PLAYLIST" << endl;

    if (head == nullptr){
      cout << "Playlist is empty" << endl;
    }

    else if(head->GetNext() == nullptr){
      cout << 1 << "." << endl;
      head->PrintPlaylistNode();
    }

    else{
      PlaylistNode* currNode = head->GetNext();
    int i = 1;
    cout << i << "." << endl;

    while(currNode != NULL){
    currNode->PrintPlaylistNode();
    currNode = currNode->GetNext();
    i++;
    if (currNode != NULL){cout << i << "." << endl;}
    }
    }
  }

//step 7: implement add song option
  else if (option == 'a') {
    string ID;
    string SongName;
    string artistName;
    int length;
    cout << "ADD SONG" << endl;
    cout << "Enter song's unique ID:" << endl;
    cin >> ID;
    cout << "Enter song's name:" << endl;
    cin.ignore();
    getline(cin, SongName);
    cout << "Enter artist's name:" << endl;
    getline(cin, artistName);
    cout << "Enter song's length (in seconds):" << endl;
    cin >> length;
    cout << endl;

	  PlaylistNode* currNode;
	  PlaylistNode* lastNode = head;
    while(lastNode->GetNext() != NULL){
      lastNode = lastNode->GetNext();
    }
    currNode = new PlaylistNode(ID, SongName, artistName, length);
		lastNode->InsertAfter(currNode);
		lastNode = currNode;
  }

//step 8: implement remove song
  else if (option == 'd'){
    string removeID;
    cout << "REMOVE SONG" << endl;
    cout << "Enter song's unique ID:" << endl;
    cin >> removeID;

    PlaylistNode* curr = head->GetNext();
    PlaylistNode* prev = head;

    while(curr != NULL){
      if(curr->GetID() == removeID){
        prev->SetNext(curr->GetNext());
        cout << "\"" << curr->GetSongName() << "\" removed." << endl;
        cout << endl;
        delete curr;
        break;
      }
      prev = curr;
      curr = curr->GetNext();
    }

  }

  return head;
}

int main() {

  PlaylistNode* headNode;

  // Front of nodes list                                                                         
	headNode = new PlaylistNode();

  string playListTitle;
  char choice;

  //step 2 prompt for playlist title
  cout << "Enter playlist's title:\n" << endl;
  getline(cin, playListTitle);


//step 5 call printmenu and prompt for choice
  PrintMenu(playListTitle);

  cout << "Choose an option:" << endl;
  cin >> choice;

  while(choice != 'q'){
  
  ExecuteMenu(choice, playListTitle, headNode);

  PrintMenu(playListTitle);
  cout << "Choose an option:" << endl;;
  cin >> choice;
}

   
   return 0;
}

