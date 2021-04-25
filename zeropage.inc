// -------------------------------------------------------------------------------
// Variables:	(for assignable/changing data, use these addresses)


	// Address of bitmap (screen and characters)
	@userdata 		$1000 $1FFF "Bitmap"


	// Declare variables
	// ------------------------------
	// Zero Page: 			$35 - $5d

	// game tick counter + 1 per FPS
	ticks : 		byte at $35;		// incremented 1 per frame
	oldticks : 		byte at $3d;


	// ------------------------------
	// Cassette buffer:		$033C-$03FB (828-1019)



	// ------------------------------	
	// Working Zero Page pointers
	p1: 			pointer;			// general pointer



	// Fisichella player variables
	fis1: byte at $36;
	fis2: byte at $37;
	fis3: byte at $38;
	fis4: byte at $39;
	fis_offset: byte at $3a;

// -------------------------------------------------------------------------------
// Data


// export data
const fontSize: address = 8 * 64;	// 64 characters using 8 bytes each
@vbmexport "chr/font8x8.flf" "chr/font8x8.bin" 0 64  1 0	// S E  H M 
@vbmexport "chr/font4x8.flf" "chr/font4x8.bin" 0 64  1 0	// S E  H M 
@vbmexport "graph/tiles.flf" "graph/tiles.bin" 0 8   1 0


// memory - load addresses
const aTiles:		address = $5800;
const aFont8:		address = $5a00;
const aFont4:		address = $5c00;
const aMusic:		address = $5e00;
	
//	const aNext: 	address = aFont4 + fontSize; // where next data can start


// incbin data
tiles:		incbin("graph/tiles.bin", aTiles);
font8:		incbin("chr/font8x8.bin", aFont8);
font4:		incbin("chr/font4x8.bin", aFont4);
musicData:	incbin("music/csankari.bin", aMusic);