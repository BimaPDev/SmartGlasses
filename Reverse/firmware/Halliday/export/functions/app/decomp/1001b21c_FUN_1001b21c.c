/* FUN_1001b21c @ 0x1001b21c */

void FUN_1001b21c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *DAT_1001b258;
  iVar1 = FUN_1009e9f8(DAT_1001b25c,param_2,param_3,0,param_1,iVar3,param_3);
  if (iVar1 != 0) goto LAB_1001b24c;
  uVar2 = FUN_1009e86c(DAT_1001b25c);
  iVar1 = -((uVar2 ^ 1) & 0xff);
  while( true ) {
    if (*DAT_1001b258 == iVar3) break;
    FUN_1013cdc0(iVar1);
LAB_1001b24c:
    iVar1 = 0;
  }
  return;
}

