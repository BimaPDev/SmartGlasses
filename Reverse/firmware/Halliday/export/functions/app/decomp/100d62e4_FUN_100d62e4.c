/* FUN_100d62e4 @ 0x100d62e4 */

undefined4 FUN_100d62e4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100d4588(param_1,0);
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100d6328 | (DAT_100d6324 - DAT_100d6320) * 0x20 & 0xff00U,DAT_100d6330,
                 DAT_100d632c);
    uVar2 = 0xffffffed;
  }
  else {
    *(undefined4 *)(iVar1 + 0x52) = *param_2;
    *(undefined4 *)(iVar1 + 0x56) = param_2[1];
    uVar2 = 0;
  }
  return uVar2;
}

