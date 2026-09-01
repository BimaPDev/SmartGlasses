/* FUN_10011460 @ 0x10011460 */

int FUN_10011460(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *DAT_100114c0;
  iVar2 = thunk_FUN_10115958();
  uVar1 = DAT_100114c4;
  iVar5 = 0;
  do {
    if (param_2 != 0) goto LAB_10011490;
    do {
      do {
        if (*DAT_100114c0 == iVar4) {
          return iVar5;
        }
        FUN_1013cdc0();
LAB_10011490:
        iVar3 = FUN_100545e4(uVar1,param_1,param_2);
        iVar5 = iVar5 + iVar3;
        if (param_1 != 0) {
          param_1 = param_1 + iVar3;
        }
        param_2 = param_2 - iVar3;
      } while (param_2 == 0);
      iVar3 = thunk_FUN_10115958();
    } while (param_3 <= (uint)(iVar3 - iVar2));
    FUN_101153fc(1,0);
  } while( true );
}

