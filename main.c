#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int win[70][25];
int alf[] = {32, 176, 177, 178, 219};

void update() {
	int i, j;
	for (i=0; i<25; i++) {
		for (j=0; j<70; j++) {
			printf("%c", alf[win[j][i]]);
		}
		printf("|\n");
	}
}

void render_text(int x, int y, char mes[]) {
	int c;
	for (c=0; c<strlen(mes); c++) {
		if (mes[c]=='A') {
			win[x+1+c*4][y] = 4;
			win[x+c*4][y+1] = 4;
			win[x+c*4][y+2] = 4;
			win[x+c*4][y+3] = 4;
			win[x+c*4][y+4] = 4;
			win[x+1+c*4][y+2] = 4;
			win[x+2+c*4][y+1] = 4;
			win[x+2+c*4][y+2] = 4;
			win[x+2+c*4][y+3] = 4;
			win[x+2+c*4][y+4] = 4;
		}
		if (mes[c]=='C') {
			win[x+1+c*4][y] = 4;
			win[x+2+c*4][y] = 4;
			win[x+c*4][y+1] = 4;
			win[x+c*4][y+2] = 4;
			win[x+c*4][y+3] = 4;
			win[x+1+c*4][y+4] = 4;
			win[x+2+c*4][y+4] = 4;
		}
		if (mes[c]=='L') {
			win[x+1+c*4][y] = 4;
			win[x+c*4][y+1] = 4;
			win[x+c*4][y+2] = 4;
			win[x+c*4][y+3] = 4;
			win[x+c*4][y+4] = 4;
			win[x+2+c*4][y+1] = 4;
			win[x+2+c*4][y+2] = 4;
			win[x+2+c*4][y+3] = 4;
			win[x+2+c*4][y+4] = 4;
		}
		if (mes[c]=='V') {
			win[c*4+x][y] = 4;
			win[c*4+x+1][y] = 4;
			win[c*4+x+2][y] = 4;
			win[c*4+x][y+1] = 4;
			win[c*4+x+2][y+1] = 4;
			win[c*4+x][y+2] = 4;
			win[c*4+x+1][y+2] = 4;
			win[c*4+x][y+3] = 4;
			win[c*4+x+2][y+3] = 4;
			win[c*4+x][y+4] = 4;
			win[c*4+x+1][y+4] = 4;
			win[c*4+x+2][y+4] = 4;
		}
		if (mes[c]==' ') {}
		if (mes[c]=='Y') {
			win[c*4+x][y] = 4;
			win[c*4+x+2][y] = 4;
			win[c*4+x][y+1] = 4;
			win[c*4+x+2][y+1] = 4;
			win[c*4+x][y+2] = 4;
			win[c*4+x+1][y+2] = 4;
			win[c*4+x+2][y+2] = 4;
			win[c*4+x+2][y+3] = 4;
			win[c*4+x+2][y+4] = 4;
			win[c*4+x+1][y+4] = 4;
			win[c*4+x][y+4] = 4;
		}
		if (mes[c]=='K') {
			win[c*4+x][y] = 4;
			win[c*4+x+2][y] = 4;
			win[c*4+x][y+1] = 4;
			win[c*4+x+2][y+1] = 4;
			win[c*4+x][y+2] = 4;
			win[c*4+x+1][y+2] = 4;
			win[c*4+x][y+3] = 4;
			win[c*4+x+2][y+3] = 4;
			win[c*4+x][y+4] = 4;
			win[c*4+x+2][y+4] = 4;	
		}
		if (mes[c]=='R') {
			win[c*4+x][y] = 4;
			win[c*4+x+1][y] = 4;
			win[c*4+x+2][y] = 4;
			win[c*4+x][y+1] = 4;
			win[c*4+x+2][y+1] = 4;
			win[c*4+x][y+2] = 4;
			win[c*4+x+1][y+2] = 4;
			win[c*4+x+2][y+2] = 4;
			win[c*4+x][y+3] = 4;
			win[c*4+x][y+4] = 4;		
		}
		if (mes[c]=='I') {
			win[c*4+x][y] = 4;
			win[c*4+x+1][y] = 4;	
			win[c*4+x+2][y] = 4;	
			win[c*4+x+1][y+1] = 4;
			win[c*4+x+1][y+2] = 4;
			win[c*4+x+1][y+3] = 4;
			win[c*4+x][y+4] = 4;
			win[c*4+x+1][y+4] = 4;
			win[c*4+x+2][y+4] = 4;
		}
		if (mes[c]=='N') {
			win[c*4+x][y] = 4;
			win[c*4+x+2][y] = 4;
			win[c*4+x][y+1] = 4;
			win[c*4+x+2][y+1] = 4;
			win[c*4+x][y+2] = 4;
			win[c*4+x+1][y+2] = 4;
			win[c*4+x+2][y+2] = 4;
			win[c*4+x][y+3] = 4;
			win[c*4+x+2][y+3] = 4;
			win[c*4+x][y+4] = 4;
			win[c*4+x+2][y+4] = 4;
		}
		if (mes[c]=='E') {
			win[c*4+x][y] = 4;
			win[c*4+x+1][y] = 4;
			win[c*4+x+2][y] = 4;
			win[c*4+x][y+1] = 4;
			win[c*4+x][y+2] = 4;
			win[c*4+x+1][y+2] = 4;
			win[c*4+x+2][y+2] = 4;
			win[c*4+x][y+3] = 4;
			win[c*4+x][y+4] = 4;
			win[c*4+x+1][y+4] = 4;
			win[c*4+x+2][y+4] = 4;
		}	
	}
}


int main(void) 
{
	int i, n = 0;
	char str[14];
	scanf("%15s", str);
    while (str[n] != '\0') {
        n++; 
    }
    n--;
	char txt[] = "          ";
	
	for (i=0; i<strlen(str); i++) {
		txt[i] = str[i];
		system("cls");
		render_text(1, 1, txt);
		update();
	}
	getchar();
	return 0;
}