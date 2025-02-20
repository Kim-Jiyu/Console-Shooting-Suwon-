#include "include.h"
Enemy enemys[D_ENEMY_MAX];

void EnemyInit()
{
	for (int i = 0; i < D_BULLET_MAX; i++)
	{
		enemys[i].bColor = BLACK;
		enemys[i].fColor = RED;
		bullet[i].x = 0;
		bullet[i].y = 0;
		bullet[i].body = 'O';
		bullet[i].isAlive = false;
	}
}

void EnemyUpdate()
{
	EnemyMove();
	EnemyClipping();
}

void EnemyDraw()
{
	for (int i = 0; i < D_ENEMY_MAX; i++)
	{
		if (enemys[i].isAlive)
			DrawChar(enemys[i].x, enemys[i].y, enemys[i].body, enemys[i].fColor, enemys[i].bColor);
	}
}

void EnemyMove()
{
}

void EnemyClipping()
{
}

//x°ª 0~119 ·£´ý, y=-1
void CreateEnemy(int x, int y)
{
}
