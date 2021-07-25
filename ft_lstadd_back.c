#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*current;

	if (!alst || *alst == NULL)
	{
		*alst = new;
		return ;
	}
	current = *alst;
	if (!new)
		return ;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
}
