/* FUN_1007d008 @ 0x1007d008 */

undefined4 FUN_1007d008(undefined4 param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar1 = *(ushort *)(DAT_1007d040 + 0x160);
  if ((uVar1 == 0) || (*(ushort *)(DAT_1007d040 + 0x1c0) <= uVar1)) {
    uVar2 = 0;
  }
  else {
    FUN_100a5b78(DAT_1007d04c | (DAT_1007d048 - DAT_1007d044) * 0x20 & 0xff00U,DAT_1007d054,
                 DAT_1007d050,uVar1,*(ushort *)(DAT_1007d040 + 0x1c0),param_2);
    uVar2 = 1;
  }
  return uVar2;
}

