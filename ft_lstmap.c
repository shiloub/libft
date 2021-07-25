#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*newelem;
	t_list	*newlist;

	newlist = NULL;
	current = lst;
	while (current != NULL)
	{
		newelem = ft_lstnew(f(current->content));
		if (!newelem)
		{
			ft_lstclear(&newlist, (*del));
			return (NULL);
		}
		ft_lstadd_back(&newlist, newelem);
		current = current->next;
	}
	return (newlist);
}
