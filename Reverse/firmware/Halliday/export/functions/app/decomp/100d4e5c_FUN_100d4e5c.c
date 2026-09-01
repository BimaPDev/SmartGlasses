/* FUN_100d4e5c @ 0x100d4e5c */

undefined4
FUN_100d4e5c(undefined4 param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100d4588(param_1,0);
  if (iVar1 == 0) {
    FUN_100a5b78((DAT_100d4eb4 - DAT_100d4eb0) * 0x20 & 0xff00U | 0x34c0021,DAT_100d4ebc,
                 DAT_100d4eb8);
    uVar2 = 0xffffffed;
  }
  else {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = (char)(((uint)*(ushort *)(iVar1 + 0x3c) << 0x17) >> 0x18);
    }
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = *(undefined1 *)(iVar1 + 0x3e);
    }
    if (param_4 == (undefined1 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      *param_4 = *(undefined1 *)(iVar1 + 0x40);
    }
  }
  return uVar2;
}

