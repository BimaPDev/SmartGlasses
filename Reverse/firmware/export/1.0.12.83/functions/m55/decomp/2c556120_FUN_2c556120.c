/* FUN_2c556120 @ 0x2c556120 */

void FUN_2c556120(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_18 [4];
  uint local_14;
  
  local_14 = *DAT_2c5561ac;
  iVar2 = param_2;
  if ((((param_1 == 0) ||
       (uVar3 = FUN_2c54f0ec(param_1,DAT_2c5561b0,param_2 + 4,1),
       iVar2 = (int)((ulonglong)uVar3 >> 0x20), (int)uVar3 < 0)) ||
      (uVar3 = FUN_2c54ee24(param_1,DAT_2c5561b4,param_2 + 0x1d,1),
      iVar2 = (int)((ulonglong)uVar3 >> 0x20), (int)uVar3 < 0)) ||
     (((uVar3 = FUN_2c54ee24(param_1,DAT_2c5561b8,param_2 + 0x1e,1),
       iVar2 = (int)((ulonglong)uVar3 >> 0x20), (int)uVar3 < 0 ||
       (uVar3 = FUN_2c54ee24(param_1,DAT_2c5561bc,param_2 + 0x1f,1),
       iVar2 = (int)((ulonglong)uVar3 >> 0x20), (int)uVar3 < 0)) ||
      (uVar3 = FUN_2c54ee98(param_1,DAT_2c5561c0,local_18,1),
      iVar2 = (int)((ulonglong)uVar3 >> 0x20), (int)uVar3 < 0)))) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
    *(undefined1 *)(param_2 + 0x1c) = local_18[0];
  }
  if ((*DAT_2c5561ac ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar1,iVar2,*DAT_2c5561ac ^ local_14,0);
}

