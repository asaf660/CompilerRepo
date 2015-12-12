#include <stdio.h>

#include <stdlib.h>

#include <memory.h>

int *Temp_0;

int *Temp_1;

int *Temp_2;

int *Temp_3;

int *Temp_4;

int *Temp_5;

int *Temp_6;

int *Temp_7;

int *Temp_8;

int *Temp_9;

int *Temp_10;

int *Temp_11;

int *Temp_12;

int *Temp_13;

int *Temp_14;

int *Temp_15;

int *Temp_16;

int *Temp_17;

int *Temp_18;

int *Temp_19;

int *Temp_20;

int *Temp_21;

int *Temp_22;

int *Temp_23;

int *Temp_24;

int *Temp_25;

int *Temp_26;

int *Temp_27;

int *Temp_28;

int *Temp_29;

int *Temp_30;

int *Temp_31;

int *Temp_32;

int *Temp_33;

int *Temp_34;

int *Temp_35;

int *Temp_36;

int *Temp_37;

int *Temp_38;

int *Temp_39;

int *Temp_40;

int *Temp_41;

int *Temp_42;

int *Temp_43;

int *Temp_44;

int *Temp_45;

int *Temp_46;

int *Temp_47;

int *Temp_48;

int *Temp_49;

int *Temp_50;

int *Temp_51;

int *Temp_52;

int *Temp_53;

int *Temp_54;

int *Temp_55;

int *Temp_56;

int *Temp_57;

int *Temp_58;

int *Temp_59;

int *Temp_60;

int *Temp_61;

int *Temp_62;

int *Temp_63;

int *Temp_64;

int *Temp_65;

int *Temp_66;

int *Temp_67;

int *Temp_68;

int *Temp_69;

int *Temp_70;

int *Temp_71;

int *Temp_72;

int *Temp_73;

int *Temp_74;

int *Temp_75;

int *Temp_76;

int *Temp_77;

int *Temp_78;

int *Temp_79;

int *Temp_80;

int *Temp_81;

int *Temp_82;

int *Temp_83;

int *Temp_84;

int *Temp_85;

int *Temp_86;

int *Temp_87;

int *Temp_88;

int *Temp_89;

int *Temp_90;

int *Temp_91;

int *Temp_92;

int *Temp_93;

int *Temp_94;

int *Temp_95;

int *Temp_96;

int *Temp_97;

int *Temp_98;

int *Temp_99;

int *Temp_100;

int *Temp_101;

int *Temp_102;

int *Temp_103;

int *Temp_104;

int *Temp_105;

int *Temp_106;

int *Temp_107;

int *Temp_108;

int *Temp_109;

int *Temp_110;

int *Temp_111;

int *Temp_112;

int *Temp_113;

int *Temp_114;

int *Temp_115;

int *sp;

int *fp;

int *ra;

int *rv;

int *a0;

int *a1;

int *a2;

int *a3;

int *v0;

int *v1;

int *t0;

int *t1;

int *t2;

int *t3;

int *t4;

int *t5;

int *t6;

int *t7;

void main()

{

	int b1=1;
	int b2=2;
	int b3=3;
	int b4=4;
	int b5=5;
	int b6=6;
	sp = &b3;
	fp = &b2;
	__asm
	{
		call _here0
		_here0: pop eax
		add eax,14
		mov ra,eax
	}

	goto Label_0_main;

Label_0_main:

	fp = (int *) ((int) sp + 40);

	goto Label_7_Skip_This_Function_For_Now;

Label_8_PrintPrimesInRange:

	*(sp) = (int) (ra+(0));

	Temp_5 = (int *) 4;

	Temp_4 =(int *) (((int) sp) - ((int) Temp_5));

	sp = (int *) ((int) Temp_4 + 0);

	*(sp) = (int) (fp+(0));

	fp = (int *) ((int) sp + 0);

	Temp_7 = (int *) 4;

	Temp_6 =(int *) (((int) sp) - ((int) Temp_7));

	sp = (int *) ((int) Temp_6 + 0);

	goto Label_9_Skip_This_Function_For_Now;

Label_10_IsPrime:

	*(sp) = (int) (ra+(0));

	Temp_9 = (int *) 4;

	Temp_8 =(int *) (((int) sp) - ((int) Temp_9));

	sp = (int *) ((int) Temp_8 + 0);

	*(sp) = (int) (fp+(0));

	fp = (int *) ((int) sp + 0);

	Temp_11 = (int *) 12;

	Temp_10 =(int *) (((int) sp) - ((int) Temp_11));

	sp = (int *) ((int) Temp_10 + 0);

	Temp_13 = (int *) -4;

	Temp_12 =(int *) (((int) fp) + ((int) Temp_13));

	Temp_14 = (int *) 1;

	*(Temp_12) = (int) (Temp_14+(0));

	Temp_16 = (int *) -8;

	Temp_15 =(int *) (((int) fp) + ((int) Temp_16));

	Temp_17 = (int *) 2;

	*(Temp_15) = (int) (Temp_17+(0));

	Temp_18 = (int *) 2;

	Temp_22 = (int *) 8;

	Temp_21 =(int *) (((int) fp) + ((int) Temp_22));

	Temp_20 = (int *) *(Temp_21 + 0);

	Temp_23 = (int *) 1;

	Temp_19 =(int *) (((int) Temp_20) - ((int) Temp_23));

	if (((int) (Temp_18)) <= ((int) (Temp_19)))
	{
		goto Label_11_for_loop;
	}

	if (((int) (Temp_18)) > ((int) (Temp_19)))
	{
		goto Label_12_exit_loop;
	}

Label_11_for_loop:

	Temp_25 = (int *) -12;

	Temp_24 =(int *) (((int) fp) + ((int) Temp_25));

	Temp_26 = (int *) 2;

	*(Temp_24) = (int) (Temp_26+(0));

	Temp_27 = (int *) 2;

	Temp_31 = (int *) 8;

	Temp_30 =(int *) (((int) fp) + ((int) Temp_31));

	Temp_29 = (int *) *(Temp_30 + 0);

	Temp_32 = (int *) 1;

	Temp_28 =(int *) (((int) Temp_29) - ((int) Temp_32));

	if (((int) (Temp_27)) <= ((int) (Temp_28)))
	{
		goto Label_23_for_loop;
	}

	if (((int) (Temp_27)) > ((int) (Temp_28)))
	{
		goto Label_24_exit_loop;
	}

Label_23_for_loop:

	Temp_36 = (int *) -8;

	Temp_35 =(int *) (((int) fp) + ((int) Temp_36));

	Temp_34 = (int *) *(Temp_35 + 0);

	Temp_39 = (int *) -12;

	Temp_38 =(int *) (((int) fp) + ((int) Temp_39));

	Temp_37 = (int *) *(Temp_38 + 0);

	Temp_33 =(int *) (((int) Temp_34) * ((int) Temp_37));

	Temp_42 = (int *) 8;

	Temp_41 =(int *) (((int) fp) + ((int) Temp_42));

	Temp_40 = (int *) *(Temp_41 + 0);

	if (((int) (Temp_33)) == ((int) (Temp_40)))
	{
		goto Label_52_T;
	}

	if (((int) (Temp_33)) != ((int) (Temp_40)))
	{
		goto Label_53_F;
	}

Label_52_T:

	Temp_43 = (int *) 1;

	Temp_2 = (int *) ((int) Temp_43 + 0);

	goto Label_54_END;

Label_53_F:

	Temp_44 = (int *) 0;

	Temp_2 = (int *) ((int) Temp_44 + 0);

	goto Label_54_END;

Label_54_END:

	Temp_45 = (int *) 0;

	if (((int) (Temp_2)) != ((int) (Temp_45)))
	{
		goto Label_35_if_taken;
	}

	if (((int) (Temp_2)) == ((int) (Temp_45)))
	{
		goto Label_36_if_not_taken;
	}

Label_35_if_taken:

	Temp_47 = (int *) -4;

	Temp_46 =(int *) (((int) fp) + ((int) Temp_47));

	Temp_48 = (int *) 0;

	*(Temp_46) = (int) (Temp_48+(0));

Label_36_if_not_taken:

	Temp_50 = (int *) -12;

	Temp_49 =(int *) (((int) fp) + ((int) Temp_50));

	Temp_54 = (int *) -12;

	Temp_53 =(int *) (((int) fp) + ((int) Temp_54));

	Temp_52 = (int *) *(Temp_53 + 0);

	Temp_55 = (int *) 1;

	Temp_51 =(int *) (((int) Temp_52) + ((int) Temp_55));

	*(Temp_49) = (int) (Temp_51+(0));

	Temp_58 = (int *) -12;

	Temp_57 =(int *) (((int) fp) + ((int) Temp_58));

	Temp_56 = (int *) *(Temp_57 + 0);

	Temp_62 = (int *) 8;

	Temp_61 =(int *) (((int) fp) + ((int) Temp_62));

	Temp_60 = (int *) *(Temp_61 + 0);

	Temp_63 = (int *) 1;

	Temp_59 =(int *) (((int) Temp_60) - ((int) Temp_63));

	if (((int) (Temp_56)) <= ((int) (Temp_59)))
	{
		goto Label_23_for_loop;
	}

	if (((int) (Temp_56)) > ((int) (Temp_59)))
	{
		goto Label_24_exit_loop;
	}

Label_24_exit_loop:

	Temp_65 = (int *) -8;

	Temp_64 =(int *) (((int) fp) + ((int) Temp_65));

	Temp_69 = (int *) -8;

	Temp_68 =(int *) (((int) fp) + ((int) Temp_69));

	Temp_67 = (int *) *(Temp_68 + 0);

	Temp_70 = (int *) 1;

	Temp_66 =(int *) (((int) Temp_67) + ((int) Temp_70));

	*(Temp_64) = (int) (Temp_66+(0));

	Temp_73 = (int *) -8;

	Temp_72 =(int *) (((int) fp) + ((int) Temp_73));

	Temp_71 = (int *) *(Temp_72 + 0);

	Temp_77 = (int *) 8;

	Temp_76 =(int *) (((int) fp) + ((int) Temp_77));

	Temp_75 = (int *) *(Temp_76 + 0);

	Temp_78 = (int *) 1;

	Temp_74 =(int *) (((int) Temp_75) - ((int) Temp_78));

	if (((int) (Temp_71)) <= ((int) (Temp_74)))
	{
		goto Label_11_for_loop;
	}

	if (((int) (Temp_71)) > ((int) (Temp_74)))
	{
		goto Label_12_exit_loop;
	}

Label_12_exit_loop:

	Temp_81 = (int *) -4;

	Temp_80 =(int *) (((int) fp) + ((int) Temp_81));

	Temp_79 = (int *) *(Temp_80 + 0);

	v0 = (int *) ((int) Temp_79 + 0);

	sp = (int *) ((int) fp + 0);

	Temp_83 = (int *) *(sp + 0);

	fp = (int *) ((int) Temp_83 + 0);

	Temp_85 = (int *) 4;

	Temp_84 =(int *) (((int) sp) + ((int) Temp_85));

	sp = (int *) ((int) Temp_84 + 0);

	Temp_86 = (int *) *(sp + 0);

	ra = (int *) ((int) Temp_86 + 0);

	__asm
	{
		jmp ra
	}

Label_9_Skip_This_Function_For_Now:

	Temp_88 = (int *) -4;

	Temp_87 =(int *) (((int) fp) + ((int) Temp_88));

	Temp_91 = (int *) 8;

	Temp_90 =(int *) (((int) fp) + ((int) Temp_91));

	Temp_89 = (int *) *(Temp_90 + 0);

	*(Temp_87) = (int) (Temp_89+(0));

	Temp_94 = (int *) 8;

	Temp_93 =(int *) (((int) fp) + ((int) Temp_94));

	Temp_92 = (int *) *(Temp_93 + 0);

	Temp_97 = (int *) 12;

	Temp_96 =(int *) (((int) fp) + ((int) Temp_97));

	Temp_95 = (int *) *(Temp_96 + 0);

	if (((int) (Temp_92)) <= ((int) (Temp_95)))
	{
		goto Label_65_for_loop;
	}

	if (((int) (Temp_92)) > ((int) (Temp_95)))
	{
		goto Label_66_exit_loop;
	}

Label_65_for_loop:

	Temp_98 = (int *) 0;

	if (((int) (v0)) != ((int) (Temp_98)))
	{
		goto Label_87_if_taken;
	}

	if (((int) (v0)) == ((int) (Temp_98)))
	{
		goto Label_88_if_not_taken;
	}

Label_87_if_taken:

Label_88_if_not_taken:

	Temp_100 = (int *) -4;

	Temp_99 =(int *) (((int) fp) + ((int) Temp_100));

	Temp_104 = (int *) -4;

	Temp_103 =(int *) (((int) fp) + ((int) Temp_104));

	Temp_102 = (int *) *(Temp_103 + 0);

	Temp_105 = (int *) 1;

	Temp_101 =(int *) (((int) Temp_102) + ((int) Temp_105));

	*(Temp_99) = (int) (Temp_101+(0));

	Temp_108 = (int *) -4;

	Temp_107 =(int *) (((int) fp) + ((int) Temp_108));

	Temp_106 = (int *) *(Temp_107 + 0);

	Temp_111 = (int *) 12;

	Temp_110 =(int *) (((int) fp) + ((int) Temp_111));

	Temp_109 = (int *) *(Temp_110 + 0);

	if (((int) (Temp_106)) <= ((int) (Temp_109)))
	{
		goto Label_65_for_loop;
	}

	if (((int) (Temp_106)) > ((int) (Temp_109)))
	{
		goto Label_66_exit_loop;
	}

Label_66_exit_loop:

	sp = (int *) ((int) fp + 0);

	Temp_112 = (int *) *(sp + 0);

	fp = (int *) ((int) Temp_112 + 0);

	Temp_114 = (int *) 4;

	Temp_113 =(int *) (((int) sp) + ((int) Temp_114));

	sp = (int *) ((int) Temp_113 + 0);

	Temp_115 = (int *) *(sp + 0);

	ra = (int *) ((int) Temp_115 + 0);

	__asm
	{
		jmp ra
	}

Label_7_Skip_This_Function_For_Now:

	exit(0);

Label_1_AllocateRecord:

Label_2_AllocateArray:

Label_3_PrintInt:

	a0 = (int *) *(sp + 0);

	printf("%d ",(int) a0);

	a0 = (int *) 32;

	printf("%c ",(char) a0);

	__asm
	{
		jmp ra
	}

Label_4_Access_Violation:

	a0 = (int *) 65;

	printf("%c ",(char) a0);

	a0 = (int *) 99;

	printf("%c ",(char) a0);

	a0 = (int *) 99;

	printf("%c ",(char) a0);

	a0 = (int *) 101;

	printf("%c ",(char) a0);

	a0 = (int *) 115;

	printf("%c ",(char) a0);

	a0 = (int *) 115;

	printf("%c ",(char) a0);

	a0 = (int *) 32;

	printf("%c ",(char) a0);

	a0 = (int *) 86;

	printf("%c ",(char) a0);

	a0 = (int *) 105;

	printf("%c ",(char) a0);

	a0 = (int *) 111;

	printf("%c ",(char) a0);

	a0 = (int *) 108;

	printf("%c ",(char) a0);

	a0 = (int *) 97;

	printf("%c ",(char) a0);

	a0 = (int *) 116;

	printf("%c ",(char) a0);

	a0 = (int *) 105;

	printf("%c ",(char) a0);

	a0 = (int *) 111;

	printf("%c ",(char) a0);

	a0 = (int *) 110;

	printf("%c ",(char) a0);

	exit(0);

}

