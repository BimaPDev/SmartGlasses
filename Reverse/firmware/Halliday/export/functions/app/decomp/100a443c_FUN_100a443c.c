/* FUN_100a443c @ 0x100a443c */

uint FUN_100a443c(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_20 [4];
  uint local_1c;
  uint local_14;
  
  iVar1 = FUN_100a42e4();
  if (-1 < iVar1) {
    iVar1 = FUN_1006c528(param_1,auStack_20);
    uVar3 = (DAT_100a44ac - DAT_100a44b0) * 0x20 & 0xff00;
    if (iVar1 == 0) {
      if ((local_1c < 0x400) || (local_14 < 0x400)) {
        uVar2 = local_1c * local_14 >> 0x14;
      }
      else {
        uVar2 = (local_1c >> 10) * local_14 >> 10;
      }
      FUN_100a5b78(uVar3 | 0xd40031,DAT_100a44b8,DAT_100a44bc,uVar2);
      return uVar2;
    }
    FUN_100a5b78(uVar3 | 0xcc0011,DAT_100a44b8,DAT_100a44b4,iVar1);
  }
  return 0;
}

