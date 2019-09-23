#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	void	*tmp;
	t_list	*lst;

	if (lst = (t_list *)malloc(sizeof(t_list)))
	{
		if (tmp = ft_memalloc(content size))
		{
			ft_memcpy(tmp, content, content_size);
			lst->content = tmp;
			if (!content)
				lst->content_size = 0;
			else
				lst->content_size = content_size;
			lst->next = NULL;
		}
		else
			return (tmp);
	}
	return (lst);
}
