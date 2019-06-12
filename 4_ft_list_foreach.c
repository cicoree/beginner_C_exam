#include "ft_list.h" //make sure to include the prototype along with the typedef and the ifndef / define / endif in your .h

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list		*list_ptr;

	list_ptr = begin_list;
	while(list_ptr)
	{
		(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}
