/* FUN_2c60fd44 @ 0x2c60fd44 */

void FUN_2c60fd44(undefined4 *param_1,int param_2,undefined4 param_3)

{
  ushort *puVar1;
  int *piVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 local_20;
  undefined4 local_18;
  int local_14;
  
  puVar1 = (ushort *)param_1[1];
  local_18 = *param_1;
  local_14 = *DAT_2c60fdf4;
  uVar4 = (local_20 >> 8 & 0xffe003) << 8 | ((puVar1[2] + 1) - (uint)*puVar1 & 0x7ff) << 10;
  local_20._2_2_ = (ushort)(uVar4 >> 0x10);
  local_20 = CONCAT22(local_20._2_2_ & 0x1f | ((puVar1[3] + 1) - puVar1[1]) * 0x20,(short)uVar4);
  if (*(char *)(param_2 + 0x2b) < '\0') {
    uVar3 = 5;
  }
  else {
    uVar3 = 4;
  }
  local_20 = CONCAT31(local_20._1_3_,uVar3);
  FUN_2c613324(&local_20);
  *param_1 = *(undefined4 *)(param_2 + 0x20);
  param_1[1] = *(undefined4 *)(param_2 + 0x1c);
  param_1[2] = *(undefined4 *)(param_2 + 0x18);
  piVar2 = (int *)FUN_2c601b5c();
  *(byte *)(*piVar2 + 0x10) =
       *(byte *)(*piVar2 + 0x10) & 0xbf | (*(byte *)(param_2 + 0x24) & 1) << 6;
  FUN_2c614a3c(param_1,param_3,param_2 + 8,&local_20);
  FUN_2c6132c0(param_1);
  if (*DAT_2c60fdf4 != local_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

