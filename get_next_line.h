#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define ERROR -1
# define SUCCESS 1
# define DONE 0
# define BUFFER_SIZE 10

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

int		ft_strlen(const char *s);
char	*gnl_strjoin(char *s1, char *s2);
int		ft_hasnewline(char *str);
char	*ft_newline(char *s);
char	*ft_prep_s(char *s);
int		get_next_line(int fd, char **line);
#endif