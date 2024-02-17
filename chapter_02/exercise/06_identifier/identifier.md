Why is it not a good idea for an identifier to contain more than one adjacent underscore (as
in `current___balance`, for example)?

It’s generally not recommended to use identifiers with more than one adjacent underscore for a few reasons:

**Readability**  
Multiple adjacent underscores can make an identifier harder to read and understand  
It’s easy to miss an extra underscore when scanning code quickly

**Confusion with System Names**  
The C standard reserves identifiers that begin with two underscores or an underscore followed by a capital letter for implementation (compiler and standard library) use  
So, using multiple underscores could potentially lead to name clashes with system names

**Portability**  
While multiple underscores are not technically illegal in C, some compilers or coding standards may warn against or disallow them  
This could cause portability issues if you’re trying to use your code across different compilers or platforms

Therefore, it’s best to stick to single underscores to separate words in an identifier, like `current_balance`, to ensure your code is clear, portable, and doesn’t risk conflicting with system-defined names.
