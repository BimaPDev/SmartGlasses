/* FUN_10025134 @ 0x10025134 */

void FUN_10025134(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_24;
  uint uStack_20;
  int local_1c;
  
  piVar1 = DAT_100251b4;
  local_1c = *DAT_100251b0;
  local_24 = 0;
  uStack_20 = 0;
  iVar4 = *DAT_100251b4;
  iVar2 = FUN_10024f88(DAT_100251b4);
  if (iVar2 != 0) goto LAB_10025166;
LAB_10025156:
  uVar3 = 0;
  do {
    if (*DAT_100251b0 == local_1c) {
      return;
    }
    FUN_1013cdc0(uVar3);
LAB_10025166:
    FUN_100434c0(&local_24);
    while( true ) {
      while( true ) {
        if (iVar4 == 0) goto LAB_10025156;
        FUN_101221f0(iVar4 + 0x24,&uStack_20);
        if (local_24 <= uStack_20) break;
        FUN_10025024(piVar1,iVar4);
        iVar4 = *piVar1;
      }
      iVar2 = FUN_1011ea20(iVar4,param_1,0x24);
      if (iVar2 == 0) break;
      iVar4 = *(int *)(iVar4 + 0x30);
    }
    FUN_101188d0(DAT_100251b8,param_1);
    uVar3 = 1;
  } while( true );
}

