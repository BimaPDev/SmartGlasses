/* FUN_100d57b8 @ 0x100d57b8 */

undefined4
FUN_100d57b8(undefined4 param_1,undefined1 *param_2,undefined1 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100d4588(param_1,0,param_3,param_4,param_4);
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100d57fc | (DAT_100d57f8 - DAT_100d57f4) * 0x20 & 0xff00U,DAT_100d5804,
                 DAT_100d5800);
    uVar2 = 0xffffffed;
  }
  else {
    *param_2 = *(undefined1 *)(iVar1 + 0x41);
    uVar2 = 0;
    *param_3 = *(undefined1 *)(iVar1 + 0x42);
  }
  return uVar2;
}

