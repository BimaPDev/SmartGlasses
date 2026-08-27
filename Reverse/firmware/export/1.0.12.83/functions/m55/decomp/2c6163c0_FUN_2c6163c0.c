/* FUN_2c6163c0 @ 0x2c6163c0 */

void FUN_2c6163c0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_2c62c928(param_2 + 0x24,0x10);
  FUN_2c62c928(param_2 + 0x30,0x14);
  uVar1 = DAT_2c616408;
  *(undefined4 *)(param_2 + 0x6c) = 0;
  *(undefined4 *)(param_2 + 0x70) = 0x640064;
  *(undefined4 *)(param_2 + 0x74) = 0;
  *(undefined4 *)(param_2 + 0x78) = 0x640064;
  uVar2 = DAT_2c61640c;
  *(byte *)(param_2 + 0x88) = *(byte *)(param_2 + 0x88) & 0xf0 | 1;
  *(undefined4 *)(param_2 + 0x84) = 0x1000100;
  *(undefined4 *)(param_2 + 0x7c) = uVar1;
  *(undefined4 *)(param_2 + 0x80) = uVar2;
  return;
}

