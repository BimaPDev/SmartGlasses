/* FUN_1005dc4c @ 0x1005dc4c */

int FUN_1005dc4c(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_1005dc84;
  iVar2 = *DAT_1005dc84;
  if (iVar2 == 0) {
    FUN_10119dc2(DAT_1005dc90,DAT_1005dc8c,DAT_1005dc88,0x54,param_1,param_2,0,param_4,param_4);
    FUN_1011a1f0(DAT_1005dc88,0x54,iVar2,param_4);
  }
  if (param_1 < 0x1e) {
    iVar2 = param_1 * 0x18 + 0x10 + *piVar1;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

