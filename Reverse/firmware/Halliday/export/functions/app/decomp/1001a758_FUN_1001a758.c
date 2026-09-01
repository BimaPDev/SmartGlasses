/* FUN_1001a758 @ 0x1001a758 */

void FUN_1001a758(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *DAT_1001a7a8;
  iVar1 = FUN_100a07a0();
  if (param_3 == iVar1) goto LAB_1001a79e;
  FUN_100a5b78(DAT_1001a7b8 | (DAT_1001a7b0 - DAT_1001a7ac) * 0x20 & 0xff00U,DAT_1001a7bc,
               DAT_1001a7b4,iVar1,param_3);
  uVar2 = 0xfffffffb;
  while( true ) {
    if (*DAT_1001a7a8 == iVar3) break;
    FUN_1013cdc0(uVar2);
LAB_1001a79e:
    uVar2 = 0;
  }
  return;
}

