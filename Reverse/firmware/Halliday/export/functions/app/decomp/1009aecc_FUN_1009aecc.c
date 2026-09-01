/* FUN_1009aecc @ 0x1009aecc */

undefined4 FUN_1009aecc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  int iVar2;
  
  iVar1 = DAT_1009aee8;
  iVar2 = DAT_1009aee8 + 0x40;
  while (*(int *)(iVar1 + 0x58) != 0) {
    FUN_1011dbde(iVar2,0xffffffff,param_3,*(int *)(iVar1 + 0x58),param_4);
    param_3 = extraout_r2;
  }
  return 1;
}

