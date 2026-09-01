/* FUN_100250f8 @ 0x100250f8 */

int FUN_100250f8(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *DAT_10025130;
  iVar3 = *param_1;
  do {
    if (iVar3 != 0) goto LAB_10025118;
    do {
      if (*DAT_10025130 == iVar2) {
        return iVar3;
      }
      FUN_1013cdc0();
LAB_10025118:
      iVar1 = FUN_1011ea20(iVar3,param_2,0x24);
    } while (iVar1 == 0);
    iVar3 = *(int *)(iVar3 + 0x30);
  } while( true );
}

