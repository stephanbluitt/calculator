#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int buscar(char info[], char tag[], int j);
int SubStr(char info[], char valor[], int j);
int imprimir(char info[], int j);

int main()
{
	int i = 0;
	char info[] = " <div class=\"list_product\"> \n                                  <div class=\"list_desc_product\" style=\"position:relative;\"> \n                                    <a href=\"product.php?product_id=1011&id_category=23&id_sub_category=78\"><img src=\"images/products/thumbs/1_1011_1520736266.jpg\" width=\"170\" height=\"170\" class=\"im_border\"></a> \n                                    <br><br>\n                                    <div class=\"list_name\"> <a href=\"product.php?product_id=1011&id_category=23&id_sub_category=78\" class=\"link13\">'65 Twin Reverb - V?lvula</a><br />\n                                      <a href=\"product.php?product_id=1011&id_category=23&id_sub_category=78\" class=\"link13\">Fender</a> \n                                    </div>\n                                  </div>\n                                </div></td>\n                                                            <td align=\"center\" valign=\"top\" width=\"190\" height=\"190\"> \n                                <div class=\"list_product\"> \n                                  <div class=\"list_desc_product\" style=\"position:relative;\"> \n                                    <a href=\"product.php?product_id=416&id_category=23&id_sub_category=78\"><img src=\"images/products/thumbs/1_416_1656127575.jpg\" width=\"170\" height=\"170\" class=\"im_border\"></a> \n                                    <br><br>\n                                    <div class=\"list_name\"> <a href=\"product.php?product_id=416&id_category=23&id_sub_category=78\" class=\"link13\">Amplificador BACKSTAGE</a><br />\n                                      <a href=\"product.php?product_id=416&id_category=23&id_sub_category=78\" class=\"link13\">Peavey</a> \n                                    </div>\n                                  </div>\n                                </div></td>\n                                                            <td align=\"center\" valign=\"top\" width=\"190\" height=\"190\"> \n                                <div class=\"list_product\"> \n                                  <div class=\"list_desc_product\" style=\"position:relative;\"> \n                                    <a href=\"product.php?product_id=417&id_category=23&id_sub_category=78\"><img src=\"images/products/thumbs/1_417_1852490511.jpg\" width=\"170\" height=\"170\" class=\"im_border\"></a> \n                                    <br><br>\n                                    <div class=\"list_name\"> <a href=\"product.php?product_id=417&id_category=23&id_sub_category=78\" class=\"link13\">Amplificador BANDIT 112</a><br />\n                                      <a href=\"product.php?product_id=417&id_category=23&id_sub_category=78\" class=\"link13\">Peavey</a> \n                                    </div>\n                                  </div>\n                                </div></td>";
	char instrumentos[] = "class=\"link13\"";


for (i = 0; info[i] != '\0'; i++) {
		i = buscar(info, instrumentos, i);
		if (i == 0)
			return 0;

		if (i > 0)
		{
				imprimir(info, i);
		}
	}

	return 0;
}

int buscar(char info[], char tag[], int j)
{
	for (;info[j] != '\0';j++)
	{
		if (SubStr(info, tag, j))
		{
			j += strlen(tag);
			while (info[j++] != '>');
			return (j);
		}
	}
	return 0;
}

int imprimir(char info[], int j)
{
	for (;info[j] != '\0' && info[j] != '<';j++)
		printf("%c", info[j]);

	printf("\n");
	return j;
}

int SubStr(char info[], char valor[], int j)
{
	int i=0;

	while (valor[i] != '\0' && info[i + j] != '\0' )
	{
		if (valor[i] != info[i + j])
		{
			break;
		}
		i++;
	}

	if (i == strlen(valor))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
