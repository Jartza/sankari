// Export data from FLF files to binaries
@vbmexport "chr/font8x8.flf" "chr/font8x8.bin" 0 64  1 0	// S E  H M 
@vbmexport "chr/font4x8.flf" "chr/font4x8.bin" 0 64  1 0	// S E  H M 
@vbmexport "graph/tiles.flf" "graph/tiles.bin" 0 8   1 0

// Load addresses
const aTiles:	address = $5800;
const aFont8:	address = $5a00;
const aFont4:	address = $5c00;
const aMusic:	address = $5e00;
	
// Include binary data
tiles:		incbin("graph/tiles.bin", aTiles);
font8:		incbin("chr/font8x8.bin", aFont8);
font4:		incbin("chr/font4x8.bin", aFont4);
musicData:	incbin("music/csankari.bin", aMusic);
