/* FUN_100e003c @ 0x100e003c */

void FUN_100e003c(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_2 + 8) + 1);
  uVar1 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
  if (*(char *)(param_1 + 0x5d) == '\x03') {
    *(uint *)(param_1 + 100) = uVar1;
    return;
  }
  if (*(uint *)(param_1 + 100) != uVar1) {
    FUN_100a5b78(((int)PTR_DAT_100e0078 - (int)PTR_DAT_100e0074) * 0x20 & 0xff00U | 0x1640022,
                 PTR_s_Wrong_id_0x_x_0x_x__100e007c);
    return;
  }
  return;
}

