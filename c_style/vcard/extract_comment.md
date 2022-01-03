# COMMENT EXTRACTER

## C/C++ COMMENTS
A comment start with;
1. Single Line Comment: Two or More FORWARD SLASHES (//...)
2. Multi Line Comment: One FORWARD SLASH followed by one or more astericks
   AND ends with an asterick and ONE FORWARD SLASH.
   (/* ... */)

### SINGLE LINE COMMENT (// This is a Comment)
Single line comment starts with 2 or more forward slashes AND ends at EOL
REQUIRES: TWO FORWARD SLASHES
	  END OF LINE (EOL)
If a sequence of characters starts with 2 forward slashes, it is a comment as
above.

WHILE character is not EOF
	IF character ONE is FORWARD SLASH
		MARK as character ONE
		APPEND to SINGLE LINE COMMENT
	END IF
	IF character TWO is FORWARD SLASH
		MARK as character TWO
		APPEND to SINGLE LINE COMMENT	
	END IF
	IF character ONE && TWO are FORWARD SLASHES
		IF character N is not EOL
			APPEND to SINGLE LINE COMMENT
		END IF
	END IF
END WHILE

### MULTI LINE COMMENT (/* .... */)
