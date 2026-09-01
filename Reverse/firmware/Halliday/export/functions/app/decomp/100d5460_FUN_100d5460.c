/* FUN_100d5460 @ 0x100d5460 */

undefined4 FUN_100d5460(undefined4 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100d4588(param_1,0,param_3,param_4,param_4);
  if (iVar1 == 0) {
    FUN_100a5b78((DAT_100d54a0 - DAT_100d549c) * 0x20 & 0xff00U | 0x4a80021,DAT_100d54a8,
                 DAT_100d54a4);
    uVar2 = 0xffffffed;
  }
  else {
    *(undefined1 *)(iVar1 + 0x41) = param_2;
    *(char *)(iVar1 + 0x42) = (char)param_3;
    uVar2 = 0;
  }
  return uVar2;
}

