// Address of bitmap (screen and characters)
@userdata 		$1000 $1FFF "Bitmap"

// Declare variables
// ------------------------------
// Zero Page: 			$35 - $5d

// game tick counter + 1 per FPS
ticks : 		byte at $35;		// incremented 1 per frame
oldticks : 		byte at $3d;

// Working Zero Page pointers
p1: 			pointer;			// general pointer

// Fisichella player variables
fis1: byte at $36;
fis2: byte at $37;
fis3: byte at $38;
fis4: byte at $39;
fis_offset: byte at $3a;
