/* FUN_10034a08 @ 0x10034a08 */

int FUN_10034a08(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = *DAT_10034a84;
  uVar4 = (DAT_10034a8c - DAT_10034a90) * 0x20 & 0xff00;
  uVar1 = param_1;
  if (param_1 < *DAT_10034a88) goto LAB_10034a4c;
  FUN_100a5b78(DAT_10034a94 | uVar4,DAT_10034a9c,DAT_10034a98,param_1,(uint)*DAT_10034a88);
  do {
    iVar5 = 0;
    while( true ) {
      if (*DAT_10034a84 == iVar3) {
        return iVar5;
      }
      uVar1 = FUN_1013cdc0();
LAB_10034a4c:
      iVar5 = uVar1 * 0x101 + DAT_10034aa0;
      iVar2 = FUN_1011ea10(iVar5);
      if (iVar2 == 0) break;
      FUN_100a5b78(DAT_10034aac | uVar4,DAT_10034a9c,DAT_10034ab0,param_1,iVar5);
    }
    FUN_100a5b78(DAT_10034aa4 | uVar4,DAT_10034a9c,DAT_10034aa8,param_1);
  } while( true );
}

