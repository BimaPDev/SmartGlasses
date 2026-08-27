/* FUN_2c6180e0 @ 0x2c6180e0 */

void FUN_2c6180e0(undefined4 param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = *DAT_2c61812c;
  *(undefined4 *)(param_2 + 0x24) = DAT_2c618130;
  *(byte *)(param_2 + 0x3c) = *(byte *)(param_2 + 0x3c) & 0xf8;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(byte *)(param_2 + 0x2c) = *(byte *)(param_2 + 0x2c) & 0xfe | bVar1 & 1;
  lv_obj_add_flag_invalidate(param_2,0x10000);
  FUN_2c606abc(param_2,0x300);
  FUN_2c618014(param_2);
  return;
}

