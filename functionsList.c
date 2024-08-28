Functions extracted from the TFT_eSPI.h:

void drawPixel(int32_t x, int32_t y, uint32_t color)
	** Function name:           drawPixel
	** Description:             push a single pixel at an arbitrary position

void drawChar(int32_t x, int32_t y, uint16_t c, uint32_t color, uint32_t bg, uint8_t size)
	** Function name:           drawChar
	** Description:             draw a single character in the GLCD or GFXFF font
	
void drawLine(int32_t x0, int32_t y0, int32_t x1, int32_t y1, uint32_t color)
	** Function name:           drawLine
	** Description:             draw a line between 2 arbitrary points
	
void drawFastVLine(int32_t x, int32_t y, int32_t h, uint32_t color)
	** Function name:           drawFastVLine
	** Description:             draw a vertical line

void drawFastHLine(int32_t x, int32_t y, int32_t w, uint32_t color)
	** Function name:           drawFastHLine
	** Description:             draw a horizontal line
	
void fillRect(int32_t x, int32_t y, int32_t w, int32_t h, uint32_t color)
	** Function name:           fillRect
	** Description:             draw a filled rectangle
	
int16_t drawChar(uint16_t uniCode, int32_t x, int32_t y, uint8_t font)
	** Function name:           drawChar
	** Description:             draw a Unicode glyph onto the screen

int16_t drawChar(uint16_t uniCode, int32_t x, int32_t y)
	** Function name:           drawChar
	** Description:             draw a Unicode glyph onto the screen
	
void fillScreen(uint32_t color)
	** Function name:           fillScreen
	** Description:             Clear the screen to defined colour
	
void drawRect(int32_t x, int32_t y, int32_t w, int32_t h, uint32_t color)
	** Function name:           drawRect
	** Description:             Draw a rectangle outline
	
void drawRoundRect(int32_t x, int32_t y, int32_t w, int32_t h, int32_t r, uint32_t color)
	** Function name:           drawRoundRect
	** Description:             Draw a rounded corner rectangle outline
		
void fillRectVGradient(int16_t x, int16_t y, int16_t w, int16_t h, uint32_t color1, uint32_t color2)
	** Function name:           fillRectVGradient
	** Description:             draw a filled rectangle with a vertical colour gradient
	
void fillRectHGradient(int16_t x, int16_t y, int16_t w, int16_t h, uint32_t color1, uint32_t color2)
	** Function name:           fillRectHGradient
	** Description:             draw a filled rectangle with a horizontal colour gradient

void drawCircle(int32_t x0, int32_t y0, int32_t r, uint32_t color)
	** Function name:           drawCircle
	** Description:             Draw a circle outline

void drawCircleHelper( int32_t x0, int32_t y0, int32_t rr, uint8_t cornername, uint32_t color)
	** Function name:           drawCircleHelper
	** Description:             Support function for drawRoundRect()
	
void fillCircle(int32_t x0, int32_t y0, int32_t r, uint32_t color)
	** Function name:           fillCircle
	** Description:             draw a filled circle

void drawEllipse(int16_t x0, int16_t y0, int32_t rx, int32_t ry, uint16_t color)
	** Function name:           drawEllipse
	** Description:             Draw a ellipse outline
	
void fillEllipse(int16_t x0, int16_t y0, int32_t rx, int32_t ry, uint16_t color)
	** Function name:           fillEllipse
	** Description:             draw a filled ellipse
	
void drawTriangle(int32_t x0, int32_t y0, int32_t x1, int32_t y1, int32_t x2, int32_t y2, uint32_t color)
	** Function name:           drawTriangle
	** Description:             Draw a triangle outline using 3 arbitrary points
	
void fillTriangle ( int32_t x0, int32_t y0, int32_t x1, int32_t y1, int32_t x2, int32_t y2, uint32_t color)
	** Function name:           fillTriangle
	** Description:             Draw a filled triangle using 3 arbitrary points

uint16_t drawPixel(int32_t x, int32_t y, uint32_t color, uint8_t alpha, uint32_t bg_color)
	** Function name:           drawPixel (alpha blended)
	** Description:             Draw a pixel blended with the screen or bg pixel colour

void drawSmoothArc(int32_t x, int32_t y, int32_t r, int32_t ir, uint32_t startAngle, uint32_t endAngle, uint32_t fg_color, uint32_t bg_color, bool roundEnds)
	** Function name:           drawSmoothArc
	** Description:             Draw a smooth arc clockwise from 6 o'clock
	
void drawArc(int32_t x, int32_t y, int32_t r, int32_t ir,
                       uint32_t startAngle, uint32_t endAngle,
                       uint32_t fg_color, uint32_t bg_color,
                       bool smooth)
	** Function name:           drawArc
	** Description:             Draw an arc clockwise from 6 o'clock position				   

void drawSmoothCircle(int32_t x, int32_t y, int32_t r, uint32_t fg_color, uint32_t bg_color)
	** Function name:           drawSmoothCircle
	** Description:             Draw a smooth circle

void fillSmoothCircle(int32_t x, int32_t y, int32_t r, uint32_t color, uint32_t bg_color)
	** Function name:           fillSmoothCircle
	** Description:             Draw a filled anti-aliased circle
	
void drawSmoothRoundRect(int32_t x, int32_t y, int32_t r, int32_t ir, int32_t w, int32_t h, uint32_t fg_color, uint32_t bg_color, uint8_t quadrants)
	** Function name:           drawSmoothRoundRect
	** Description:             Draw a rounded rectangle
	
void fillSmoothRoundRect(int32_t x, int32_t y, int32_t w, int32_t h, int32_t r, uint32_t color, uint32_t bg_color)
	** Function name:           fillSmoothRoundRect
	** Description:             Draw a filled anti-aliased rounded corner rectangle

void drawSpot(float ax, float ay, float r, uint32_t fg_color, uint32_t bg_color)
	** Function name:           drawSpot - maths intensive, so for small filled circles
	** Description:             Draw an anti-aliased filled circle at ax,ay with radius r

void drawWideLine(float ax, float ay, float bx, float by, float wd, uint32_t fg_color, uint32_t bg_color)
	** Function name:           drawWideLine - background colour specified or pixel read
	** Description:             draw an anti-aliased line with rounded ends, width wd

void drawWedgeLine(float ax, float ay, float bx, float by, float ar, float br, uint32_t fg_color, uint32_t bg_color)
	** Function name:           drawWedgeLine - background colour specified or pixel read
	** Description:             draw an anti-aliased line with different width radiused ends

int16_t height(void)
	** Function name:           height
	** Description:             Return the pixel height of display (per current rotation)
	
int16_t width(void)
	** Function name:           width
	** Description:             Return the pixel width of display (per current rotation)

uint16_t readPixel(int32_t x0, int32_t y0)
	** Function name:           read pixel (for SPI Interface II i.e. IM [3:0] = "1101")
	** Description:             Read 565 pixel colours from a pixel

void setWindow(int32_t x0, int32_t y0, int32_t x1, int32_t y1)
	** Function name:           setWindow
	** Description:             define an area to receive a stream of pixels
	
void pushColor(uint16_t color)
	** Function name:           pushColor
	** Description:             push a single pixel  // Push (aka write pixel) colours to the set window
	
void invertDisplay(bool i)
	** Function name:           invertDisplay
	** Description:             invert the display colours i = 1 invert, i = 0 normal
	
void setRotation(uint8_t m)
	** Function name:           setRotation
	** Description:             rotate the screen orientation m = 0-3 or 4-7 for BMP drawing

uint8_t getRotation(void)
	** Function name:           getRotation
	** Description:             Return the rotation value (as used by setRotation())




