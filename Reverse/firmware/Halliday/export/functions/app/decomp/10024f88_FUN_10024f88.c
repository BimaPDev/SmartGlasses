/* FUN_10024f88 @ 0x10024f88 */

void FUN_10024f88(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r3;
  
  iVar2 = *DAT_10024fb8;
  iVar1 = 0;
  if (param_1 == (int *)0x0) goto LAB_10024f9c;
  iVar3 = *param_1;
  iVar1 = 0;
  do {
    if (iVar3 == 0) {
LAB_10024f9c:
      if (*DAT_10024fb8 == iVar2) {
        return;
      }
      iVar1 = FUN_1013cdc0(iVar1);
      iVar3 = extraout_r3;
    }
    iVar3 = *(int *)(iVar3 + 0x30);
    iVar1 = iVar1 + 1;
  } while( true );
}

