// PairedBrackets.inl


namespace EA
{

namespace Text
{
	///////////////////////////////////////////////////////////////////////////////
	// BidiBracket
	//
	struct BidiPairedBracket
	{
		Char mChar;     // Unicode code point value, represented as a hexadecimal value
		Char mPair;     // Bidi_Paired_Bracket property value, a code point value or <none>
		uint8_t mType;  // BidiPairedBracketType enum value
	};


	// Commented out lines are Bracket Pairings which the Unicode Standard specifies but touches characters
	// EAText does not support since most games will never need to use such characters. If this table grows
	// large enough in the future, consider updating GetBidiPairedBracketType(Char c) to do something other than
	// a linear search
	const BidiPairedBracket gBidiPairedBracketArray[] = 
	{
		{ 0x0028, 0x0029, kBPBTOpen  }, // LEFT PARENTHESIS
		{ 0x0029, 0x0028, kBPBTClose }, // RIGHT PARENTHESIS
		{ 0x005B, 0x005D, kBPBTOpen  }, // LEFT SQUARE BRACKET
		{ 0x005D, 0x005B, kBPBTClose }, // RIGHT SQUARE BRACKET
		{ 0x007B, 0x007D, kBPBTOpen  }, // LEFT CURLY BRACKET
		{ 0x007D, 0x007B, kBPBTClose }, // RIGHT CURLY BRACKET

		/*
		{ 0x0F3A, 0x0F3B, kBPBTOpen  }, // TIBETAN MARK GUG RTAGS GYON
		{ 0x0F3B, 0x0F3A, kBPBTClose }, // TIBETAN MARK GUG RTAGS GYAS
		{ 0x0F3C, 0x0F3D, kBPBTOpen  }, // TIBETAN MARK ANG KHANG GYON
		{ 0x0F3D, 0x0F3C, kBPBTClose }, // TIBETAN MARK ANG KHANG GYAS
		{ 0x169B, 0x169C, kBPBTOpen  }, // OGHAM FEATHER MARK
		{ 0x169C, 0x169B, kBPBTClose }, // OGHAM REVERSED FEATHER MARK
		{ 0x2045, 0x2046, kBPBTOpen  }, // LEFT SQUARE BRACKET WITH QUILL
		{ 0x2046, 0x2045, kBPBTClose }, // RIGHT SQUARE BRACKET WITH QUILL
		{ 0x207D, 0x207E, kBPBTOpen  }, // SUPERSCRIPT LEFT PARENTHESIS
		{ 0x207E, 0x207D, kBPBTClose }, // SUPERSCRIPT RIGHT PARENTHESIS
		{ 0x208D, 0x208E, kBPBTOpen  }, // SUBSCRIPT LEFT PARENTHESIS
		{ 0x208E, 0x208D, kBPBTClose }, // SUBSCRIPT RIGHT PARENTHESIS
		{ 0x2308, 0x2309, kBPBTOpen  }, // LEFT CEILING
		{ 0x2309, 0x2308, kBPBTClose }, // RIGHT CEILING
		{ 0x230A, 0x230B, kBPBTOpen  }, // LEFT FLOOR
		{ 0x230B, 0x230A, kBPBTClose }, // RIGHT FLOOR
		{ 0x2329, 0x232A, kBPBTOpen  }, // LEFT-POINTING ANGLE BRACKET
		{ 0x232A, 0x2329, kBPBTClose }, // RIGHT-POINTING ANGLE BRACKET
		{ 0x2768, 0x2769, kBPBTOpen  }, // MEDIUM LEFT PARENTHESIS ORNAMENT
		{ 0x2769, 0x2768, kBPBTClose }, // MEDIUM RIGHT PARENTHESIS ORNAMENT
		{ 0x276A, 0x276B, kBPBTOpen  }, // MEDIUM FLATTENED LEFT PARENTHESIS ORNAMENT
		{ 0x276B, 0x276A, kBPBTClose }, // MEDIUM FLATTENED RIGHT PARENTHESIS ORNAMENT
		{ 0x276C, 0x276D, kBPBTOpen  }, // MEDIUM LEFT-POINTING ANGLE BRACKET ORNAMENT
		{ 0x276D, 0x276C, kBPBTClose }, // MEDIUM RIGHT-POINTING ANGLE BRACKET ORNAMENT
		{ 0x276E, 0x276F, kBPBTOpen  }, // HEAVY LEFT-POINTING ANGLE QUOTATION MARK ORNAMENT
		{ 0x276F, 0x276E, kBPBTClose }, // HEAVY RIGHT-POINTING ANGLE QUOTATION MARK ORNAMENT
		{ 0x2770, 0x2771, kBPBTOpen  }, // HEAVY LEFT-POINTING ANGLE BRACKET ORNAMENT
		{ 0x2771, 0x2770, kBPBTClose }, // HEAVY RIGHT-POINTING ANGLE BRACKET ORNAMENT
		{ 0x2772, 0x2773, kBPBTOpen  }, // LIGHT LEFT TORTOISE SHELL BRACKET ORNAMENT
		{ 0x2773, 0x2772, kBPBTClose }, // LIGHT RIGHT TORTOISE SHELL BRACKET ORNAMENT
		{ 0x2774, 0x2775, kBPBTOpen  }, // MEDIUM LEFT CURLY BRACKET ORNAMENT
		{ 0x2775, 0x2774, kBPBTClose }, // MEDIUM RIGHT CURLY BRACKET ORNAMENT
		{ 0x27C5, 0x27C6, kBPBTOpen  }, // LEFT S-SHAPED BAG DELIMITER
		{ 0x27C6, 0x27C5, kBPBTClose }, // RIGHT S-SHAPED BAG DELIMITER
		{ 0x27E6, 0x27E7, kBPBTOpen  }, // MATHEMATICAL LEFT WHITE SQUARE BRACKET
		{ 0x27E7, 0x27E6, kBPBTClose }, // MATHEMATICAL RIGHT WHITE SQUARE BRACKET
		{ 0x27E8, 0x27E9, kBPBTOpen  }, // MATHEMATICAL LEFT ANGLE BRACKET
		{ 0x27E9, 0x27E8, kBPBTClose }, // MATHEMATICAL RIGHT ANGLE BRACKET
		{ 0x27EA, 0x27EB, kBPBTOpen  }, // MATHEMATICAL LEFT DOUBLE ANGLE BRACKET
		{ 0x27EB, 0x27EA, kBPBTClose }, // MATHEMATICAL RIGHT DOUBLE ANGLE BRACKET
		{ 0x27EC, 0x27ED, kBPBTOpen  }, // MATHEMATICAL LEFT WHITE TORTOISE SHELL BRACKET
		{ 0x27ED, 0x27EC, kBPBTClose }, // MATHEMATICAL RIGHT WHITE TORTOISE SHELL BRACKET
		{ 0x27EE, 0x27EF, kBPBTOpen  }, // MATHEMATICAL LEFT FLATTENED PARENTHESIS
		{ 0x27EF, 0x27EE, kBPBTClose }, // MATHEMATICAL RIGHT FLATTENED PARENTHESIS
		{ 0x2983, 0x2984, kBPBTOpen  }, // LEFT WHITE CURLY BRACKET
		{ 0x2984, 0x2983, kBPBTClose }, // RIGHT WHITE CURLY BRACKET
		{ 0x2985, 0x2986, kBPBTOpen  }, // LEFT WHITE PARENTHESIS
		{ 0x2986, 0x2985, kBPBTClose }, // RIGHT WHITE PARENTHESIS
		{ 0x2987, 0x2988, kBPBTOpen  }, // Z NOTATION LEFT IMAGE BRACKET
		{ 0x2988, 0x2987, kBPBTClose }, // Z NOTATION RIGHT IMAGE BRACKET
		{ 0x2989, 0x298A, kBPBTOpen  }, // Z NOTATION LEFT BINDING BRACKET
		{ 0x298A, 0x2989, kBPBTClose }, // Z NOTATION RIGHT BINDING BRACKET
		{ 0x298B, 0x298C, kBPBTOpen  }, // LEFT SQUARE BRACKET WITH UNDERBAR
		{ 0x298C, 0x298B, kBPBTClose }, // RIGHT SQUARE BRACKET WITH UNDERBAR
		{ 0x298D, 0x2990, kBPBTOpen  }, // LEFT SQUARE BRACKET WITH TICK IN TOP CORNER
		{ 0x298E, 0x298F, kBPBTClose }, // RIGHT SQUARE BRACKET WITH TICK IN BOTTOM CORNER
		{ 0x298F, 0x298E, kBPBTOpen  }, // LEFT SQUARE BRACKET WITH TICK IN BOTTOM CORNER
		{ 0x2990, 0x298D, kBPBTClose }, // RIGHT SQUARE BRACKET WITH TICK IN TOP CORNER
		{ 0x2991, 0x2992, kBPBTOpen  }, // LEFT ANGLE BRACKET WITH DOT
		{ 0x2992, 0x2991, kBPBTClose }, // RIGHT ANGLE BRACKET WITH DOT
		{ 0x2993, 0x2994, kBPBTOpen  }, // LEFT ARC LESS-THAN BRACKET
		{ 0x2994, 0x2993, kBPBTClose }, // RIGHT ARC GREATER-THAN BRACKET
		{ 0x2995, 0x2996, kBPBTOpen  }, // DOUBLE LEFT ARC GREATER-THAN BRACKET
		{ 0x2996, 0x2995, kBPBTClose }, // DOUBLE RIGHT ARC LESS-THAN BRACKET
		{ 0x2997, 0x2998, kBPBTOpen  }, // LEFT BLACK TORTOISE SHELL BRACKET
		{ 0x2998, 0x2997, kBPBTClose }, // RIGHT BLACK TORTOISE SHELL BRACKET
		{ 0x29D8, 0x29D9, kBPBTOpen  }, // LEFT WIGGLY FENCE
		{ 0x29D9, 0x29D8, kBPBTClose }, // RIGHT WIGGLY FENCE
		{ 0x29DA, 0x29DB, kBPBTOpen  }, // LEFT DOUBLE WIGGLY FENCE
		{ 0x29DB, 0x29DA, kBPBTClose }, // RIGHT DOUBLE WIGGLY FENCE
		{ 0x29FC, 0x29FD, kBPBTOpen  }, // LEFT-POINTING CURVED ANGLE BRACKET
		{ 0x29FD, 0x29FC, kBPBTClose }, // RIGHT-POINTING CURVED ANGLE BRACKET
		{ 0x2E22, 0x2E23, kBPBTOpen  }, // TOP LEFT HALF BRACKET
		{ 0x2E23, 0x2E22, kBPBTClose }, // TOP RIGHT HALF BRACKET
		{ 0x2E24, 0x2E25, kBPBTOpen  }, // BOTTOM LEFT HALF BRACKET
		{ 0x2E25, 0x2E24, kBPBTClose }, // BOTTOM RIGHT HALF BRACKET
		{ 0x2E26, 0x2E27, kBPBTOpen  }, // LEFT SIDEWAYS U BRACKET
		{ 0x2E27, 0x2E26, kBPBTClose }, // RIGHT SIDEWAYS U BRACKET
		{ 0x2E28, 0x2E29, kBPBTOpen  }, // LEFT DOUBLE PARENTHESIS
		{ 0x2E29, 0x2E28, kBPBTClose }, // RIGHT DOUBLE PARENTHESIS
		{ 0x3008, 0x3009, kBPBTOpen  }, // LEFT ANGLE BRACKET
		{ 0x3009, 0x3008, kBPBTClose }, // RIGHT ANGLE BRACKET
		{ 0x300A, 0x300B, kBPBTOpen  }, // LEFT DOUBLE ANGLE BRACKET
		{ 0x300B, 0x300A, kBPBTClose }, // RIGHT DOUBLE ANGLE BRACKET
		{ 0x300C, 0x300D, kBPBTOpen  }, // LEFT CORNER BRACKET
		{ 0x300D, 0x300C, kBPBTClose }, // RIGHT CORNER BRACKET
		{ 0x300E, 0x300F, kBPBTOpen  }, // LEFT WHITE CORNER BRACKET
		{ 0x300F, 0x300E, kBPBTClose }, // RIGHT WHITE CORNER BRACKET
		{ 0x3010, 0x3011, kBPBTOpen  }, // LEFT BLACK LENTICULAR BRACKET
		{ 0x3011, 0x3010, kBPBTClose }, // RIGHT BLACK LENTICULAR BRACKET
		{ 0x3014, 0x3015, kBPBTOpen  }, // LEFT TORTOISE SHELL BRACKET
		{ 0x3015, 0x3014, kBPBTClose }, // RIGHT TORTOISE SHELL BRACKET
		{ 0x3016, 0x3017, kBPBTOpen  }, // LEFT WHITE LENTICULAR BRACKET
		{ 0x3017, 0x3016, kBPBTClose }, // RIGHT WHITE LENTICULAR BRACKET
		{ 0x3018, 0x3019, kBPBTOpen  }, // LEFT WHITE TORTOISE SHELL BRACKET
		{ 0x3019, 0x3018, kBPBTClose }, // RIGHT WHITE TORTOISE SHELL BRACKET
		{ 0x301A, 0x301B, kBPBTOpen  }, // LEFT WHITE SQUARE BRACKET
		{ 0x301B, 0x301A, kBPBTClose }, // RIGHT WHITE SQUARE BRACKET
		{ 0xFE59, 0xFE5A, kBPBTOpen  }, // SMALL LEFT PARENTHESIS
		{ 0xFE5A, 0xFE59, kBPBTClose }, // SMALL RIGHT PARENTHESIS
		{ 0xFE5B, 0xFE5C, kBPBTOpen  }, // SMALL LEFT CURLY BRACKET
		{ 0xFE5C, 0xFE5B, kBPBTClose }, // SMALL RIGHT CURLY BRACKET
		{ 0xFE5D, 0xFE5E, kBPBTOpen  }, // SMALL LEFT TORTOISE SHELL BRACKET
		{ 0xFE5E, 0xFE5D, kBPBTClose }, // SMALL RIGHT TORTOISE SHELL BRACKET
		*/

		{ 0xFF08, 0xFF09, kBPBTOpen  }, // FULLWIDTH LEFT PARENTHESIS
		{ 0xFF09, 0xFF08, kBPBTClose }, // FULLWIDTH RIGHT PARENTHESIS
		{ 0xFF3B, 0xFF3D, kBPBTOpen  }, // FULLWIDTH LEFT SQUARE BRACKET
		{ 0xFF3D, 0xFF3B, kBPBTClose }, // FULLWIDTH RIGHT SQUARE BRACKET
		{ 0xFF5B, 0xFF5D, kBPBTOpen  }, // FULLWIDTH LEFT CURLY BRACKET
		{ 0xFF5D, 0xFF5B, kBPBTClose }, // FULLWIDTH RIGHT CURLY BRACKET

		/*
		{ 0xFF5F, 0xFF60, kBPBTOpen  }, // FULLWIDTH LEFT WHITE PARENTHESIS
		{ 0xFF60, 0xFF5F, kBPBTClose }, // FULLWIDTH RIGHT WHITE PARENTHESIS
		{ 0xFF62, 0xFF63, kBPBTOpen  }, // HALFWIDTH LEFT CORNER BRACKET
		{ 0xFF63, 0xFF62, kBPBTClose } // HALFWIDTH RIGHT CORNER BRACKET
		*/
	};
} // namespace Text

} // namespace EA