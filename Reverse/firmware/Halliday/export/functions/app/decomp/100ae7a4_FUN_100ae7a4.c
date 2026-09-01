/* FUN_100ae7a4 @ 0x100ae7a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100ae7a4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0xfffffffd;
  }
  if ((_DAT_00000148 & 0xffff0000 | _DAT_00000140 & 0xffff) == DAT_100ae7e4) {
    iVar1 = *(int *)(param_1 + 4);
    if ((iVar1 != 0x15) && (iVar1 != 0x10)) {
      uVar2 = 0;
      if (iVar1 != 0xf) {
        uVar2 = 0xffffffff;
      }
      return uVar2;
    }
    return 0;
  }
  return 0xfffffffc;
}

