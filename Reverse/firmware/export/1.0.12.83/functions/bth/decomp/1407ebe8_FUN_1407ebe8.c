/* FUN_1407ebe8 @ 0x1407ebe8 */

int FUN_1407ebe8(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_140bd5f0(param_1,0xd,param_2,param_4,param_4);
  if (iVar1 != 0) {
    uVar2 = 0;
    do {
      uVar2 = uVar2 + (iVar1 - param_1) + 1U;
      if (((uint)(iVar1 - param_1) < param_2 - 1) && (*(char *)(iVar1 + 1) == '\n')) {
        return iVar1;
      }
      if (param_2 <= uVar2) {
        return 0;
      }
      iVar1 = FUN_140bd5f0(param_1 + uVar2,0xd,param_2 - uVar2,iVar1,param_4);
    } while (iVar1 != 0);
  }
  return 0;
}

