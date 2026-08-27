/* FUN_2c5b3850 @ 0x2c5b3850 */

void FUN_2c5b3850(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_2c606a10(param_2);
  FUN_2c603a04(uVar1,0,DAT_2c5b38c0);
  FUN_2c607048(uVar1,0x70);
  FUN_2c6072bc(uVar1,5,0,0xffffff98);
  FUN_2c606d60(uVar1,0xff000000,0);
  lv_obj_add_flag_invalidate(uVar1,1);
  uVar2 = FUN_2c6313f4(uVar1);
  FUN_2c607048(uVar2,0x70);
  uVar3 = FUN_2c5e2e8c(DAT_2c5b38c4);
  FUN_2c63140c(uVar2,uVar3);
  FUN_2c6072bc(uVar2,9,0);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}

