/* FUN_10012210 @ 0x10012210 */

void FUN_10012210(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *DAT_10012260;
  iVar1 = FUN_100b59a4(DAT_10012268,DAT_10012264,param_3,0,param_1,iVar3,param_3);
  if (iVar1 != 0) goto LAB_10012254;
  FUN_100a5b78((DAT_10012270 - DAT_1001226c) * 0x20 & 0xff00U | 0xec0031,DAT_10012278,DAT_10012274);
  uVar2 = 0xffffffed;
  while( true ) {
    if (*DAT_10012260 == iVar3) break;
    FUN_1013cdc0(uVar2);
LAB_10012254:
    uVar2 = 0;
  }
  return;
}

