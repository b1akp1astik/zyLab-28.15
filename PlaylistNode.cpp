#include "PlaylistNode.h"

// Parameterized Constructors  

PlaylistNode::PlaylistNode(string uniqueIDInit, string songNameInit, string ArtistNameInit, int songLengthInit) {
	this->uniqueID = uniqueIDInit;
	this->songName = songNameInit;
	this->artistName = ArtistNameInit;
	this->songLength = songLengthInit;
    this->nextNodePtr = NULL;
}

PlaylistNode::PlaylistNode(string uniqueIDInit, string songNameInit, string ArtistNameInit, int songLengthInit, PlaylistNode* nextLoc) {
	this->uniqueID = uniqueIDInit;
	this->songName = songNameInit;
	this->artistName = ArtistNameInit;
	this->songLength = songLengthInit;
    this->nextNodePtr = nextLoc;
}


    //Accessor returns ID
    string PlaylistNode::GetID(){
        return uniqueID;
    }

    //accessor returns song name
    string PlaylistNode::GetSongName(){
        return songName;
    }

    //accessor returns artist name
    string PlaylistNode::GetArtistName(){
        return artistName;
    }

    //accessor returns song length
    int PlaylistNode::GetSongLength(){
        return songLength;
    }

    //accessor gets location of next node pointer
    PlaylistNode* PlaylistNode::GetNext(){
        return this->nextNodePtr;
    }

// insertAfter
void PlaylistNode::InsertAfter(PlaylistNode* nodePtr){
	PlaylistNode* tmpNext;
	tmpNext = this->nextNodePtr;
	this->nextNodePtr = nodePtr;
	nodePtr->nextNodePtr = tmpNext;
}

//sets next node
void PlaylistNode::SetNext(PlaylistNode* nodePtr){
    this->nextNodePtr = nodePtr;
}

// TODO: Write PrintSongInfo() function
void PlaylistNode::PrintPlaylistNode() {
        cout << "Unique ID: " << uniqueID << endl;
        cout << "Song Name: " << songName << endl;
        cout << "Artist Name: " << artistName << endl;
        cout << "Song Length (in seconds): " << songLength << endl;
	}