/* FUN_10025948 @ 0x10025948 */

int FUN_10025948(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = CONCAT44(param_2,param_1);
  iVar2 = *DAT_10025994;
  if (param_1 != 0) goto LAB_1002596a;
LAB_1002595a:
  do {
    iVar3 = 0;
    while( true ) {
      if (*DAT_10025994 == iVar2) {
        return iVar3;
      }
      uVar4 = FUN_1013cdc0();
LAB_1002596a:
      if ((int)((ulonglong)uVar4 >> 0x20) == 0) break;
      iVar3 = *(int *)uVar4;
      while( true ) {
        if (iVar3 == 0) goto LAB_1002595a;
        iVar1 = FUN_100257f0(iVar3,param_2);
        if ((iVar1 != 0) && (*(byte *)(iVar3 + 0x40) == param_3)) break;
        iVar3 = *(int *)(iVar3 + 0x48);
      }
    }
  } while( true );
}

