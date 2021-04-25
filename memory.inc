// -------------------------------------------------------------------------------
// Variables:	(for assignable/changing data, use these addresses)
// Not suitable for Cartridge projects - use _memoryzp instead


	// Declare variables
	// ------------------------------


//	myvar : byte = 0;	// example variable in main RAM


// -------------------------------------------------------------------------------
// CString

strTitle: cstring = ("F1 = change song");
strSongTitle: cstring = ("Title song  ");
strSongGame: cstring =  ("In-game song");

song_strs: array[] of integer = (
	#strSongTitle,
	#strSongGame
);
