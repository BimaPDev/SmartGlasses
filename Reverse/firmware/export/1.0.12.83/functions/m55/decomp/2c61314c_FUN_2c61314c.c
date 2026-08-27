/* FUN_2c61314c @ 0x2c61314c */

void FUN_2c61314c(int param_1)

{
  undefined4 uVar1;
  
  FUN_2c62c3b0(param_1,0x58);
  *(undefined4 *)(param_1 + 0x10) = 0xff000000;
  *(undefined4 *)(param_1 + 0x34) = 0xff000000;
  *(undefined4 *)(param_1 + 0x48) = 0xff000000;
  uVar1 = DAT_2c613198;
  *(undefined1 *)(param_1 + 0x14) = 0xff;
  *(undefined1 *)(param_1 + 0x30) = 0xff;
  *(undefined1 *)(param_1 + 3) = 0xff;
  *(ushort *)(param_1 + 0x3a) = *(ushort *)(param_1 + 0x3a) & 0xc100 | 0x1eff;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined1 *)(param_1 + 0x44) = 0xff;
  *(undefined1 *)(param_1 + 0x54) = 0xff;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x20) = 2;
  return;
}

