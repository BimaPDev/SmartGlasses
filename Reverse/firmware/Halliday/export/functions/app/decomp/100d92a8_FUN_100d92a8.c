/* FUN_100d92a8 @ 0x100d92a8 */

undefined4 FUN_100d92a8(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  
  iVar1 = FUN_1009e9f8(DAT_100d92e8);
  if (iVar1 == 0) {
    FUN_100a5b78((DAT_100d92f0 - DAT_100d92ec) * 0x20 & 0xff00U | 0x3a0011,DAT_100d92f8,DAT_100d92f4
                 ,DAT_100d92ec,in_r3);
    uVar2 = 0xfffffffd;
  }
  else {
    iVar1 = FUN_1009e7a0(DAT_100d92e8);
    if (iVar1 == 0) {
      uVar2 = 0xffffff8c;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

