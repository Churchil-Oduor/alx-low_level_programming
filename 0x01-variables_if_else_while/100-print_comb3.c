/*
 * main - Returns number 01 -89.
 *
 * Return: Always returns a zero.
 */
int main(void)
{
        int x, y;

        for (x = 48; x < 58; x++)
        {

                for(y = 49; y < 58; y++)
                {
                        if (x != y)
                        {
                                putchar(x);
                                putchar(y);

				if ((x + y) != 16)
				{
					putchar(',');
					putchar(' ');
				}
		
			}

                }
                if (x == 56)
                        break;
        }
	putchar('\n');
        return (0);
}
