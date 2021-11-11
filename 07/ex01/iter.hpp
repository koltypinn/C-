#ifndef ITER_H
# define ITER_H

template < typename T >
void	iter(T *array, unsigned int len, void (*f)(T const &)) {
	if (!array)
		return;

	unsigned int i = 0;
	while (i < len)
		f(array[i++]);

	return;
}

#endif
