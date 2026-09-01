/* FUN_100d5544 @ 0x100d5544 */

undefined4 FUN_100d5544(undefined4 param_1,byte param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_100d4588(param_1,0,param_3,param_4,param_4);
  if (iVar2 == 0) {
    FUN_100a5b78(DAT_100d55b0 | (DAT_100d55ac - DAT_100d55a8) * 0x20 & 0xff00U,DAT_100d55b8,
                 DAT_100d55b4);
    return 0xffffffed;
  }
  bVar1 = *(byte *)(iVar2 + 0x43);
  *(byte *)(iVar2 + 0x43) = bVar1 & 0xc0 | param_2 & 0x3f;
  if ((bVar1 & 0x3f) - 2 < 7) {
    if ((byte)(param_2 - 2) < 7) {
      return 0;
    }
    uVar3 = 0;
  }
  else {
    if (6 < (byte)(param_2 - 2)) {
      return 0;
    }
    uVar3 = 1;
  }
  FUN_100d529c(param_1,uVar3,0);
  return 0;
}

