/* FUN_100d5748 @ 0x100d5748 */

undefined4 FUN_100d5748(undefined4 param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100d4588(param_1,0);
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100d57ac | (DAT_100d57a8 - DAT_100d57a4) * 0x20 & 0xff00U,DAT_100d57b4,
                 DAT_100d57b0);
    uVar2 = 0xffffffed;
  }
  else {
    *param_2 = (byte)(((uint)*(byte *)(iVar1 + 0x44) << 0x1b) >> 0x1c);
    *param_3 = (byte)(((uint)*(byte *)(iVar1 + 0x44) << 0x1a) >> 0x1f);
    *param_4 = (byte)(((uint)*(byte *)(iVar1 + 0x44) << 0x19) >> 0x1f);
    uVar2 = 0;
    *param_5 = *(byte *)(iVar1 + 0x44) >> 7;
  }
  return uVar2;
}

