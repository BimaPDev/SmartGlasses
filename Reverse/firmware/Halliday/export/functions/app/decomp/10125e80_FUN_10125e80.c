/* FUN_10125e80 @ 0x10125e80 */

uint FUN_10125e80(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_28;
  byte local_24;
  undefined1 auStack_20 [16];
  
  iVar1 = FUN_10124cb8(param_1,2);
  if ((iVar1 != 0) && (iVar1 = FUN_10124cd6(param_1,0x80), iVar1 == 0)) {
    FUN_10125e56(param_1,auStack_20);
    uVar2 = FUN_1012a90e(auStack_20,param_2,0);
    if (uVar2 != 0) {
      iVar1 = FUN_10124cb8(param_1,0x10000);
      if (iVar1 == 0) {
        return uVar2;
      }
      local_24 = 1;
      local_28 = param_2;
      FUN_10086f50(param_1,0x11,&local_28);
      return (uint)local_24;
    }
  }
  return 0;
}

