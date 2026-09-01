/* FUN_100e8b38 @ 0x100e8b38 */

undefined4 FUN_100e8b38(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = DAT_100e8b68;
  if (*DAT_100e8b64 == '\0') {
    *DAT_100e8b64 = '\x01';
    FUN_101145f4(uVar1,DAT_100e8b6c,0x500,2,0,param_2,param_3);
    FUN_10113564(DAT_100e8b68,DAT_100e8b70);
  }
  return DAT_100e8b68;
}

