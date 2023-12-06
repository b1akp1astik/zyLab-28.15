#include "iostream"
#include <string>

using namespace std;

class PlaylistNode {

    /*initialize Private data members
string uniqueID - Initialized to "none" in default constructor
string songName - Initialized to "none" in default constructor
string artistName - Initialized to "none" in default constructor
int songLength - Initialized to 0 in default constructor
PlaylistNode* nextNodePtr - Initialized to 0 in default constructor*/

private:
    string uniqueID;
	string songName;
    string artistName;
	int songLength;
	PlaylistNode* nextNodePtr; // Reference to the next node                                   

public:
    //default constructor
	PlaylistNode() {
        uniqueID = "none";
	    songName = "none";
        artistName = "none";
	    songLength = 0;
	    nextNodePtr = 0;
	}

	// parameterized Constructors

    PlaylistNode(string uniqueIDInit, string songNameInit, string ArtistNameInit, int songLengthInit);

	PlaylistNode(string uniqueIDInit, string songNameInit, string ArtistNameInit, int songLengthInit, PlaylistNode* nextLoc);

    /*Public member functions
GetID() - Accessor
GetSongName() - Accessor
GetArtistName() - Accessor
GetSongLength() - Accessor
GetNext() - Accessor
InsertAfter(PlaylistNode* nodePtr) - Mutator (1 pt)
SetNext(PlaylistNode* nodePtr) - Mutator (1 pt)
PrintPlaylistNode() - Outputs uniqueID, songname, artistName, and songLength based on the format example below.*/

    //Accessor returns ID
    string GetID();

    //accessor returns song name
    string GetSongName();

    //accessor returns artist name
    string GetArtistName();

    //accessor returns song length
    int GetSongLength();

    //accessor gets location of next node pointer
    PlaylistNode* GetNext();

    //mutator inserts node after
    void InsertAfter(PlaylistNode* nodePtr);

    //mutator sets next node
    void SetNext(PlaylistNode* nodePtr);

    //print function
    void PrintPlaylistNode();

};