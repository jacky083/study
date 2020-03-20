#include <stdio.h> //printfなどの関数を使用するための宣言

struct fate{
	char* name;
	int age;
}emiya, toosaka,*seihai;

struct stay {
	struct fate emiya;
}saber;

void kouzoutai() {
	//構造体の学習
	printf("構造体(structure)の勉強です。\n");

	//struct タグ名{ 
	//  型　メンバ1;
    //}構造体変数リスト
	//タグ名を関数ないに記載することでリストを追加できる
	struct fate matou;
	emiya.name = (char*)"衛宮士郎";
	emiya.age = 17;
	toosaka.name = (char*)"遠坂リン";
	toosaka.age = 16;
	matou.name = (char*)"間桐さくら";


	printf("名前\t\t年齢\t\n");
	printf("%s\t%d\n", emiya.name, emiya.age);
	printf("%s\t%d\n", toosaka.name,toosaka.age);
	printf("emiya.name = %x\nemiya.age = %x\n", &emiya.name, &emiya.age);
	printf("toosaka.name = %x\ntooasaka.age = %x\n", &toosaka.name, &toosaka.age);


	//続構造体
	//構造体を配列で宣言できる
	struct fate structNA[3];
	structNA[0].name = (char*)"衛宮切嗣";
	structNA[0].age = 38;
	structNA[1].name = (char*)"遠坂時臣";
	structNA[1].age = 45;

	printf("名前\t\t年齢\n");
	for (int i = 0; i < 2; i++) {
		printf("%s\t%d\n", structNA[i].name, structNA[i].age);
	}
	//構造体を構造体に代入
	structNA[0] = structNA[1];
	printf("%s\t%d\n", structNA[0].name, structNA[0].age);
	//構造体リストを作成するファンクションを宣言すれば
	//異なるファンクション内で引数としてメンバを渡すことで構造体を宣言できる

	//構造体の受け渡し
	//構造体は大容量のため値の引き渡しはレスポンス低下が想定される
	//そのため、値の渡し方としてポインタを利用した参照渡しを行うこととする

	//struct fate* seihai;
	seihai = &emiya;
	//ポインタ構造体でメンバ指定する場合は「->」を使用する
	seihai->age = 20;
	//参照渡しでアドレスを渡すことで速度は深刻な問題にならない
	//write(&seihai)


	//構造体のネスト
	//構造体の中に構造体を埋め込むこともできる
	saber.emiya.age = 10;
	//構造体をネストしても宣言だけで、アドレスは同じではない
	printf("%d\n",saber.emiya.age);
	printf("%d\n", emiya.age);
}


void hairetu() {
	printf("配列勉強です。");
	//配列宣言
	int ary[3];
	int i = 0;
	
	while (i < 3) {
		ary[i] = i * i;
		printf("配列ary[%d]=%d", i, ary[i]);
		i++;
	}
	printf("\n");

	//多次元配列
	double arys[2][3];
	for (int is = 0; is++; is < 2) {
		for (int js = 0; js++; js < 3) {
			
		}

	}

	//文字列変数
	char str[4];
	str[0] = 'A';
	str[1] = 'R';
	str[2] = 'Y';
	str[3] = 0;
	for (int ii = 0; ii <= 3; ii++) {
		printf("%c", str[ii]);
	}
	printf("\n");
	printf(str);
	printf("\n");

	   	 
	printf("文字を入力してください。\n");
	
	//[*]を変数の前で宣言するとポインタになる
	int *po, var;
	var = 10101;
	//ポインタの場合、&でメモリアドレスの場所を参照する
	po = &var;
	
	printf("ポインタに格納されている内容 = %dn", *po);
	printf("ポインタに格納されているアドレス = %x\n", po);
	*po = 100;
	//間接参照
	//直接varの値を変更しなくても同じメモリアクセスを参照している
	//*poの内容を変更することでvarの中身も変更される
	printf("varに格納されている内容 = %d\n", var);

	//ポインタ演算
	//ポインタは整数のみ加算、減算が可能

	int ary0[2] = { 1000,2000 };

	po = &ary0[0];

	printf("po\t = %x\n", po);
	printf("*po\t = %d\n", *po);
	po++;
	printf("po\t = %x\n", po);
	printf("*po\t = %d\n", *po);

	po = &ary0[0];
	//poのメモリアドレスの次を参照するだけ
	*po++;
	printf("po\t = %x\n", po);
	printf("*po\t = %d\n", *po);

	po = &ary0[0];
	//（）で囲むことで*poの内容をプラスできる
	(*po)++;
	printf("po\t = %x\n", po);
	printf("*po\t = %d\n", *po);



	printf("配列終了\n");
}



int main(void) { //起動時にはmainファンクションが実行される
	int nenrei = 85;
	int nenrei2=16;
	char a;

	printf("C言語の入門開始\n はじまりはじまり\n"); //\nは改行
	//\'はシングルクォーテーション、\"がダブル
	printf("とあるところに\'おじいさん\'と\'おばあさん\'が\n住んでおりました");
	//%dで数値をprintfの後ろに宣言できる
	printf("\nおじいさんは%d歳、おばあさんは%d歳でした", nenrei,nenrei-3);
	
	printf("あなたは何歳ですか?\n");
	printf("あなたは%d歳です\n", nenrei + nenrei2);
	printf("あなたは%d歳です\n", nenrei++);
	printf("あなたは%d歳です\n", ++nenrei);
	//printfの?は指定した値が0なのかどうかを判定する
	printf("あなたは%s歳です\n", nenrei ?"A":"b");
	nenrei = 1;
	printf("あなたは%s歳です\n", nenrei ? "A" : "b");
	//scanfはCSでは危険関数として禁止されている
	//scan_sを代わりに利用する
	//scanf("%s", &a);
	/*
	if (scanf("%d", &nenrei2) == 1) {
		printf("貴方の年齢は%d歳です", nenrei);
	}
	*/

	printf("どの分岐を表示しますか\n");
	printf("1:勉強1　2：配列　3:構造体\n");
	double flg;
	scanf_s("%lf", &flg);
	if (flg == 2) {
		hairetu();
		return 0;
	}
	else if(flg==3){
		kouzoutai();
		return 0;
	}


	int swisu = 0;

	//SWICH文は条件に合ったcaseがあるとそのcase以降が実行される
	//breakでそのケース文から抜ける宣言をすることを忘れずに！
	while (swisu < 10) {
		switch (swisu) {
		case 0:
			printf("スイッチ数は0です\n");
			break;
		case 1:
			printf("スイッチ数は1です\n");
			swisu = +5;
			break;
		default:
			printf("スイッチ数は%dです\n", swisu);
			break;
		}
		swisu++;

	}

	for (int count = 0; count < 10; count = count + 3) {
		printf("今のカウントは\tcount=\t%d\n", count);
	}

	//do～whileはループ実行後に次のループに入るか判断される
	//初期値がいくらおかしくても1回はループされる
	int docount = 10;
	do {
		printf("今は%d回目のるーぷです。\n",docount);
		docount++;
	} while (docount < 5);


	int countgo = 1;
	//goto文　ラベルの宣言
loop:
	printf("gotoでループを行います。%d回目\n",countgo);
	//条件次第で下のendラベルにループ
	if (countgo == 5) goto end;
	countgo++;
	goto loop;
end:


	//型種類
	printf("void:空白\n");
	printf("char:文字\n");
	printf("int:整数\n");
	printf("float:少数\n");
	printf("double:桁数を多く持てる少数\n");

	//型修飾子
	//
	printf("short:整数、intよりも小さい\n");
	printf("longt:整数　intよりも大きい　doubleにも適用でき大きくなる\n");
	printf("unsigned:符号なし unsigned int、unsigned long intなどに使用\n");
    //C言語ではintを省略できるため、unsigned int flg、unsigned flgは同じ
	//printfで使用する際は%dで対応できないことがある
	//unsigned = %u
	//short = %hd
	//long = %ld
	//unsigned long = %lu
	//long double = %Lf
	

    //型変換
	int katavar1 = 100;
	float katavar2 = 200.123;

	printf("%g", katavar1 + katavar2);

	//小さい型に代入するときは2進数上で上位ビットが切り捨てされる
	katavar1 = 1279;
	unsigned char katavar3 = katavar1;
	printf("\n%d", katavar3);


	//接尾子
	//定数を指定するときその定数の型を指定する
	//unsigned = U
	//long = L
	//float = F
	//long double = L
	printf("%ld\n", 500L);

	//16進数と8進数
	//16進数「0x」8進数「0」を前につける
	printf("16進数 %x\n", 0xff + 0x1);
	printf("8進数 %i\n", 07);

	printf("\nHellow World");
	return 0;
}



