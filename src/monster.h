struct EnemyObject{
	//기본정보
	int NameNumber;		//이름목록의 번호
	int	BatX, BatY;		//전투맵상의 위치
	int BatD	;		//전투맵상의 방향
	int graphic;		//적이미지

	//출력정보
	int frame;
	int ScrollMapX;
	int ScrollMapY;

	//능력치
	int LV; 

	int MAXHP, HP;
	int MAXSP, SP;

	int Turn;
	int STR, DEF, INT, DEX;
	int MOV;	//한턴 이동거리

	//획득
	int gExp, gGold;

}EnemyObject[1];

const int EnemyGroup[] = {0,0,0,0,0,0,0,0,0,0};

void SetEnemy(){
	EnemyObject[0].NameNumber = 1;		//테스트 코드
	EnemyObject[0].graphic = 6;			//테스트 코드
	EnemyObject[0].BatX = 5;			//테스트 코드
	EnemyObject[0].BatY = 5;			//테스트 코드
	EnemyObject[0].BatD = 2;			//테스트 코드
	EnemyObject[0].frame = 0;			//테스트 코드

	EnemyObject[0].LV = 50;				//테스트 코드
	EnemyObject[0].MAXHP = 40;
	EnemyObject[0].HP = EnemyObject[0].MAXHP;
	EnemyObject[0].MAXSP = 10;
	EnemyObject[0].SP = EnemyObject[0].MAXSP;

	EnemyObject[0].Turn = 0;

	EnemyObject[0].STR = 30;
	EnemyObject[0].DEF = 30;
	EnemyObject[0].INT = 30;
	EnemyObject[0].DEX = 30;
	EnemyObject[0].gExp = 15;
	EnemyObject[0].gGold = 50;

	EnemyObject[0].ScrollMapX = 0;
	EnemyObject[0].ScrollMapY = 0;
}