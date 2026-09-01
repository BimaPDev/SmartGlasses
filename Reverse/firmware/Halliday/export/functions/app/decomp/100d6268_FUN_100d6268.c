/* FUN_100d6268 @ 0x100d6268 */

undefined4 FUN_100d6268(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = FUN_100d4718();
  uVar3 = DAT_100d62d8;
  if ((iVar1 == 0) || (uVar3 = DAT_100d62dc, -1 < (int)((uint)*(byte *)(iVar1 + 0x38) << 0x1f))) {
    FUN_100a5b78(uVar3 | (DAT_100d62cc - DAT_100d62c8) * 0x20 & 0xff00U,DAT_100d62d0,DAT_100d62d4);
    uVar2 = 0xffffffed;
  }
  else {
    uVar3 = *(byte *)(iVar1 + 0x38) & 0xffffff7f | (param_2 & 1) << 7;
    *(char *)(iVar1 + 0x38) = (char)uVar3;
    if ((int)(uVar3 << 0x18) < 0) {
      *(byte *)(*DAT_100d62e0 + 8) = *(byte *)(*DAT_100d62e0 + 8) | 8;
    }
    uVar2 = 0;
  }
  return uVar2;
}

