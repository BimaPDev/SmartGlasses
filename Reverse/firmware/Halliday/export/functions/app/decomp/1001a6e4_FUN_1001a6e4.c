/* FUN_1001a6e4 @ 0x1001a6e4 */

void FUN_1001a6e4(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r3;
  undefined4 uVar4;
  
  iVar3 = *DAT_1001a744;
  uVar4 = param_1;
  do {
    iVar1 = FUN_100a0654(param_1,param_2,param_3);
    if (0 < iVar1) goto LAB_1001a734;
    FUN_100a5b78((DAT_1001a74c - DAT_1001a748) * 0x20 & 0xff00U | 0xfd0011,DAT_1001a754,DAT_1001a750
                 ,param_3,uVar4);
    uVar2 = 0xfffffffb;
    while( true ) {
      if (*DAT_1001a744 == iVar3) {
        return;
      }
      FUN_1013cdc0(uVar2);
      iVar1 = extraout_r3;
LAB_1001a734:
      param_3 = param_3 - iVar1;
      if (0 < param_3) break;
      uVar2 = 0;
    }
  } while( true );
}

