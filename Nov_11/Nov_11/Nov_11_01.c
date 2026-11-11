#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//.表示目标，@表示玩家，$表示箱子
	char map[7][9] =
	{
		"########",
		"#      #",
		"#      #",
		"#      #",
		"#  .   #",
		"#      #",
		"########"
	};

	int px = 5, py = 4;//玩家位置
	int bx = 2, by = 4;//箱子位置
	int i, j;
	char ch;           //移动方向
	int dx, dy;        //移动距离
	int nx, ny;        //移动后的位置

	while (1)
	{
		system("cls");
		//1.显示地图
		printf("\n---推箱子小游戏---\n");

		for (i = 0;i < 7;i++)
		{
			for (j = 0;j < 8;j++)
			{
				if (i == px && j == py)
					printf("@");
				else if (i == bx && j == by)
				{
					if (map[i][j] == '.')
						printf("*");
					else
						printf("$");
				}
				else
					printf("%c", map[i][j]);
			}
			printf("\n");
		}

		//2.输入移动方向
		printf("W上 S下 A左 D右 Q退出: ");
		scanf_s(" %c", &ch);

		//3.开始移动
		int nx = px, ny = py;

		if (ch == 'w' || ch == 'W')
			nx = px - 1;
		else if (ch == 's' || ch == 'S')
			nx = px + 1;
		else if (ch == 'a' || ch == 'A')
			ny = py - 1;
		else if (ch == 'd' || ch == 'D')
			ny = py + 1;
		else continue;

		if (map[nx][ny] == '#')
			continue;
		if (nx == bx && ny == by)
		{
			int nnx = bx + (bx - px);
			int nny = by + (by - py);
			if (map[nnx][nny] == '#')
				continue;
			bx = nnx;
			by = nny;
		}
		px = nx;
		py = ny;
	}
	return 0;
}