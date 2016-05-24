// https://global.novationmusic.com/sites/default/files/novation/downloads/10598/launchpad-pro-programmers-reference-guide_0.pdf

/* Launchpad Pro sysex ref
 *
 * Param Name       Param Byte  Val1    Val2    Val3    Val4    Repeats     Notes
 * ============================================================================================
 * Set LEDs         LED         Colour
 * (standard mode)  0a          01-63   00-7f                   Yes *97
 * --------------------------------------------------------------------------------------------
 * Set LEDs         LED         Red     Green   Blue
 * (RGB mode)       0b          01-63   00-3f   00-3f   00-3f   Yes *78
 * --------------------------------------------------------------------------------------------
 * Set Column
 * 
 * --------------------------------------------------------------------------------------------
 * Set Row
 * 
 * --------------------------------------------------------------------------------------------
 * Set All
 * 
 * --------------------------------------------------------------------------------------------
 * Set Grid
 * 
 * --------------------------------------------------------------------------------------------
 * Flash LED
 * 
 * --------------------------------------------------------------------------------------------
 * Pulse LED
 * 
 * --------------------------------------------------------------------------------------------
 * Scroll Text
 * 
 * --------------------------------------------------------------------------------------------
 * Mode Select
 * 
 * --------------------------------------------------------------------------------------------
 * Mode Status
 * 
 * --------------------------------------------------------------------------------------------
 * Live Layout
 * Selection
 * --------------------------------------------------------------------------------------------
 * Live Layout
 * Status
 * --------------------------------------------------------------------------------------------
 * Standalone
 * Layout Select
 * --------------------------------------------------------------------------------------------
 * Fader Setup
 * 
 * --------------------------------------------------------------------------------------------
 */