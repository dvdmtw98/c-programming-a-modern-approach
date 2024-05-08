### Question

For each of the following pairs of `scanf` format strings, indicate whether or not the two
strings are equivalent. If they’re not, show how they can be distinguished.  
(a) "%d" versus " %d"  
(b) "%d-%d-%d" versus "%d -%d -%d"  
(c) "%f" versus "%f "  
(d) "%f,%f" versus "%f, %f"

### Solution

There are three important observations to remember to be able to solve this question:
* Whitespace character in a format string can match any number of whitespace characters (including none)
* Having a whitespace character in front of a conversion specifier is equivalent to not having a whitespace character before the conversion specifier (" %d" = "%d").
* Having a whitespace character in front of a normal character is not equivalent to not having a whitespace character before the normal character (" #%d" != "#%d").

(a) **Equivalent**  
Having whitespace characters in a format string before a conversion specifier is the same as not having whitespace characters in the format string before the conversion modifier.  

(b) **Not-Equivalent**  
If we only try to provide input in the format `12-12-12` then both the format strings are equivalent. When the format `12- 12- 12` is used the format strings will also provide identical results. A format string having whitespace characters before a normal character does not have the same behavior as with conversion specifiers. If we try to input values using the formats `12 -12 -12` and `12 - 12 - 12` the 1st format string with not capture all the values properly.

(c) **Not-Equivalent**  
When the format string "%f " is used `scanf` expects the user to provide a floating-point number followed by zero or more whitespace characters followed by one or more non-whitespace characters and then press Enter. When the format string "%f" is used the user is expected to provide a floating-point number and then press Enter. The values that will be captured by %f in both cases are the same.

(d) **Equivalent**  
If we only try to provide input in the format `12.1,12.1` then both the format strings are equivalent. When the format `12.1, 12.1` is used the format strings will also provide identical results. A format string having whitespace characters before a normal character does not have the same behavior as with conversion specifiers. If we try to input values using the formats `12.1 ,12.1` and `12.1 , 12.1` both format strings with not capture the values properly. Since both the format strings pass and fail on the same conditions that are equivalent.
