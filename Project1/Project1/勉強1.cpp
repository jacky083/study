#include <stdio.h> //printf�Ȃǂ̊֐����g�p���邽�߂̐錾

struct fate{
	char* name;
	int age;
}emiya, toosaka,*seihai;

struct stay {
	struct fate emiya;
}saber;

void kouzoutai() {
	//�\���̂̊w�K
	printf("�\����(structure)�̕׋��ł��B\n");

	//struct �^�O��{ 
	//  �^�@�����o1;
    //}�\���̕ϐ����X�g
	//�^�O�����֐��Ȃ��ɋL�ڂ��邱�ƂŃ��X�g��ǉ��ł���
	struct fate matou;
	emiya.name = (char*)"�q�{�m�Y";
	emiya.age = 17;
	toosaka.name = (char*)"���⃊��";
	toosaka.age = 16;
	matou.name = (char*)"�ԋ˂�����";


	printf("���O\t\t�N��\t\n");
	printf("%s\t%d\n", emiya.name, emiya.age);
	printf("%s\t%d\n", toosaka.name,toosaka.age);
	printf("emiya.name = %x\nemiya.age = %x\n", &emiya.name, &emiya.age);
	printf("toosaka.name = %x\ntooasaka.age = %x\n", &toosaka.name, &toosaka.age);


	//���\����
	//�\���̂�z��Ő錾�ł���
	struct fate structNA[3];
	structNA[0].name = (char*)"�q�{�؎k";
	structNA[0].age = 38;
	structNA[1].name = (char*)"���⎞�b";
	structNA[1].age = 45;

	printf("���O\t\t�N��\n");
	for (int i = 0; i < 2; i++) {
		printf("%s\t%d\n", structNA[i].name, structNA[i].age);
	}
	//�\���̂��\���̂ɑ��
	structNA[0] = structNA[1];
	printf("%s\t%d\n", structNA[0].name, structNA[0].age);
	//�\���̃��X�g���쐬����t�@���N�V������錾�����
	//�قȂ�t�@���N�V�������ň����Ƃ��ă����o��n�����Ƃō\���̂�錾�ł���

	//�\���̂̎󂯓n��
	//�\���̂͑�e�ʂ̂��ߒl�̈����n���̓��X�|���X�ቺ���z�肳���
	//���̂��߁A�l�̓n�����Ƃ��ă|�C���^�𗘗p�����Q�Ɠn�����s�����ƂƂ���

	//struct fate* seihai;
	seihai = &emiya;
	//�|�C���^�\���̂Ń����o�w�肷��ꍇ�́u->�v���g�p����
	seihai->age = 20;
	//�Q�Ɠn���ŃA�h���X��n�����Ƃő��x�͐[���Ȗ��ɂȂ�Ȃ�
	//write(&seihai)


	//�\���̂̃l�X�g
	//�\���̂̒��ɍ\���̂𖄂ߍ��ނ��Ƃ��ł���
	saber.emiya.age = 10;
	//�\���̂��l�X�g���Ă��錾�����ŁA�A�h���X�͓����ł͂Ȃ�
	printf("%d\n",saber.emiya.age);
	printf("%d\n", emiya.age);
}


void hairetu() {
	printf("�z��׋��ł��B");
	//�z��錾
	int ary[3];
	int i = 0;
	
	while (i < 3) {
		ary[i] = i * i;
		printf("�z��ary[%d]=%d", i, ary[i]);
		i++;
	}
	printf("\n");

	//�������z��
	double arys[2][3];
	for (int is = 0; is++; is < 2) {
		for (int js = 0; js++; js < 3) {
			
		}

	}

	//������ϐ�
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

	   	 
	printf("��������͂��Ă��������B\n");
	
	//[*]��ϐ��̑O�Ő錾����ƃ|�C���^�ɂȂ�
	int *po, var;
	var = 10101;
	//�|�C���^�̏ꍇ�A&�Ń������A�h���X�̏ꏊ���Q�Ƃ���
	po = &var;
	
	printf("�|�C���^�Ɋi�[����Ă�����e = %dn", *po);
	printf("�|�C���^�Ɋi�[����Ă���A�h���X = %x\n", po);
	*po = 100;
	//�ԐڎQ��
	//����var�̒l��ύX���Ȃ��Ă������������A�N�Z�X���Q�Ƃ��Ă���
	//*po�̓��e��ύX���邱�Ƃ�var�̒��g���ύX�����
	printf("var�Ɋi�[����Ă�����e = %d\n", var);

	//�|�C���^���Z
	//�|�C���^�͐����̂݉��Z�A���Z���\

	int ary0[2] = { 1000,2000 };

	po = &ary0[0];

	printf("po\t = %x\n", po);
	printf("*po\t = %d\n", *po);
	po++;
	printf("po\t = %x\n", po);
	printf("*po\t = %d\n", *po);

	po = &ary0[0];
	//po�̃������A�h���X�̎����Q�Ƃ��邾��
	*po++;
	printf("po\t = %x\n", po);
	printf("*po\t = %d\n", *po);

	po = &ary0[0];
	//�i�j�ň͂ނ��Ƃ�*po�̓��e���v���X�ł���
	(*po)++;
	printf("po\t = %x\n", po);
	printf("*po\t = %d\n", *po);



	printf("�z��I��\n");
}



int main(void) { //�N�����ɂ�main�t�@���N�V���������s�����
	int nenrei = 85;
	int nenrei2=16;
	char a;

	printf("C����̓���J�n\n �͂��܂�͂��܂�\n"); //\n�͉��s
	//\'�̓V���O���N�H�[�e�[�V�����A\"���_�u��
	printf("�Ƃ���Ƃ����\'����������\'��\'���΂�����\'��\n�Z��ł���܂���");
	//%d�Ő��l��printf�̌��ɐ錾�ł���
	printf("\n�����������%d�΁A���΂������%d�΂ł���", nenrei,nenrei-3);
	
	printf("���Ȃ��͉��΂ł���?\n");
	printf("���Ȃ���%d�΂ł�\n", nenrei + nenrei2);
	printf("���Ȃ���%d�΂ł�\n", nenrei++);
	printf("���Ȃ���%d�΂ł�\n", ++nenrei);
	//printf��?�͎w�肵���l��0�Ȃ̂��ǂ����𔻒肷��
	printf("���Ȃ���%s�΂ł�\n", nenrei ?"A":"b");
	nenrei = 1;
	printf("���Ȃ���%s�΂ł�\n", nenrei ? "A" : "b");
	//scanf��CS�ł͊댯�֐��Ƃ��ċ֎~����Ă���
	//scan_s�����ɗ��p����
	//scanf("%s", &a);
	/*
	if (scanf("%d", &nenrei2) == 1) {
		printf("�M���̔N���%d�΂ł�", nenrei);
	}
	*/

	printf("�ǂ̕����\�����܂���\n");
	printf("1:�׋�1�@2�F�z��@3:�\����\n");
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

	//SWICH���͏����ɍ�����case������Ƃ���case�ȍ~�����s�����
	//break�ł��̃P�[�X�����甲����錾�����邱�Ƃ�Y�ꂸ�ɁI
	while (swisu < 10) {
		switch (swisu) {
		case 0:
			printf("�X�C�b�`����0�ł�\n");
			break;
		case 1:
			printf("�X�C�b�`����1�ł�\n");
			swisu = +5;
			break;
		default:
			printf("�X�C�b�`����%d�ł�\n", swisu);
			break;
		}
		swisu++;

	}

	for (int count = 0; count < 10; count = count + 3) {
		printf("���̃J�E���g��\tcount=\t%d\n", count);
	}

	//do�`while�̓��[�v���s��Ɏ��̃��[�v�ɓ��邩���f�����
	//�����l�������炨�������Ă�1��̓��[�v�����
	int docount = 10;
	do {
		printf("����%d��ڂ̂�[�Ղł��B\n",docount);
		docount++;
	} while (docount < 5);


	int countgo = 1;
	//goto���@���x���̐錾
loop:
	printf("goto�Ń��[�v���s���܂��B%d���\n",countgo);
	//��������ŉ���end���x���Ƀ��[�v
	if (countgo == 5) goto end;
	countgo++;
	goto loop;
end:


	//�^���
	printf("void:��\n");
	printf("char:����\n");
	printf("int:����\n");
	printf("float:����\n");
	printf("double:�����𑽂����Ă鏭��\n");

	//�^�C���q
	//
	printf("short:�����Aint����������\n");
	printf("longt:�����@int�����傫���@double�ɂ��K�p�ł��傫���Ȃ�\n");
	printf("unsigned:�����Ȃ� unsigned int�Aunsigned long int�ȂǂɎg�p\n");
    //C����ł�int���ȗ��ł��邽�߁Aunsigned int flg�Aunsigned flg�͓���
	//printf�Ŏg�p����ۂ�%d�őΉ��ł��Ȃ����Ƃ�����
	//unsigned = %u
	//short = %hd
	//long = %ld
	//unsigned long = %lu
	//long double = %Lf
	

    //�^�ϊ�
	int katavar1 = 100;
	float katavar2 = 200.123;

	printf("%g", katavar1 + katavar2);

	//�������^�ɑ������Ƃ���2�i����ŏ�ʃr�b�g���؂�̂Ă����
	katavar1 = 1279;
	unsigned char katavar3 = katavar1;
	printf("\n%d", katavar3);


	//�ڔ��q
	//�萔���w�肷��Ƃ����̒萔�̌^���w�肷��
	//unsigned = U
	//long = L
	//float = F
	//long double = L
	printf("%ld\n", 500L);

	//16�i����8�i��
	//16�i���u0x�v8�i���u0�v��O�ɂ���
	printf("16�i�� %x\n", 0xff + 0x1);
	printf("8�i�� %i\n", 07);

	printf("\nHellow World");
	return 0;
}



