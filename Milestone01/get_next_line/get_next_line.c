#include "get_next_line.h"

char	*get_next_line(int fd, int d)
{
    
    char *buffer;
    static char *result = NULL;
    buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
    if (!buffer)
        return NULL;
        
    int i = 1;
		i = read(fd, buffer, BUFFER_SIZE);
		int start = check_line_complated(buffer);
		if (start > 0)
		{
			if (!result)
				result = "";
			char *x = ft_strjoin(result, ft_substr(buffer, 0, start));
			result = ft_strchr(buffer, '\n');
			return x;
		}
		    
		if (!result)
			result = "";
		char *tmp  = ft_strjoin(result, ft_substr(buffer, 0, BUFFER_SIZE));
		result = tmp;
	    if (i < BUFFER_SIZE)
			return result;
		return "";
}
int main()
{
    int fd = open("test.txt", O_RDONLY);
    int i = 1;
    while(i <= 7)
    {
		char *x = get_next_line(fd, 1);//123456
        printf("%s",  x);
		
        i++;
    }
    return 0;
}
