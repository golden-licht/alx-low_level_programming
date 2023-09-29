/**
 * prime_helper - helper function for is_prime_number
 * @n: the number to check for primality
 * @i: the current divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int prime_helper(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0)
	{
		return (0);
	}
	return (prime_helper(n, i + 2));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check for primality
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (prime_helper(n, 3));
}
