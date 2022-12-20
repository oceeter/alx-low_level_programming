#include "main.h"
/**
<<<<<<< HEAD
 * puts2 - prints every other char of a string starting
 * with first character followed by a new line
 * @str: parameter that points to a tring
 * Return: void
 */
void puts2(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
=======
 *  * puts2 - prints every other char of a string starting
 *   * with first character followed by a new line
 *    * @str: parameter that points to a tring
 *     * Return: void
 *      */
void puts2(char *str)
{
		int index = 0, len = 0;

			while (str[index++])
						len++;

				for (index = 0; index < len; index += 2)
							_putchar(str[index]);

					_putchar('\n');
>>>>>>> 953ebf8017ec258d410ed011c8105b143b3dba6f
}
