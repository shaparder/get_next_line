# get_next_line @ 42
After finishing [libft](https://github.com/shaparder/libft_shp), get next line
is the second mandatory project, requiring us to make a function reading
line by line from a file descriptor, like the terminal command `cat`.

## Usage
```c
char *line;

// To get a single line
get_next_line(fd, &line);
...
ft_strdel(&line); // You should free after you're done using your line

// To read a whole file
while (get_next_line(fd, &line))
{
	// process the line here, here we'll just output it
	ft_putstr(line);

	// free the line to avoid leaking memory
	ft_strdel(&line);
}

// GNL will automatically free appropriately whenever it reaches EOF.
```
