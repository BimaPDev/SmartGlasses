/* FUN_1005dbec @ 0x1005dbec */

int FUN_1005dbec(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = DAT_1005dc3c;
  iVar2 = *DAT_1005dc3c;
  if (iVar2 == 0) {
    FUN_10119dc2(DAT_1005dc48,DAT_1005dc44,DAT_1005dc40,0x43,param_1,param_2,0,param_4,param_4);
    FUN_1011a1f0(DAT_1005dc40,0x43,iVar2,param_4);
  }
  iVar3 = 0;
  iVar2 = *piVar1;
  while ((param_1 < *(uint *)(iVar2 + 0x1c) ||
         (*(uint *)(iVar2 + 0x1c) + *(int *)(iVar2 + 0x20) <= param_1))) {
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x18;
    if (iVar3 == 0x1e) {
      return 0;
    }
  }
  return iVar3 * 0x18 + *piVar1 + 0x10;
}

