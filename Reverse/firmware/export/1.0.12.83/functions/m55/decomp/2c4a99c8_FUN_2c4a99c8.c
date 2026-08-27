/* FUN_2c4a99c8 @ 0x2c4a99c8 */

void FUN_2c4a99c8(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined8 uVar4;
  undefined2 local_16;
  uint local_14;
  
  local_14 = *puRam2c4a9a68;
  if (*DAT_2c4a9a64 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x19a,uRam2c4a9a74,uRam2c4a9a70,uRam2c4a9a6c);
  }
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = FUN_2c4a8cac(0,param_2,0);
    uVar4 = FUN_2c4a8cac(1);
    param_2 = (undefined4)((ulonglong)uVar4 >> 0x20);
    iVar2 = (int)uVar4;
    if (iVar1 != 0) {
      local_16 = 0;
      FUN_2c4a8764(iVar1,1,&local_16);
      *param_1 = *(undefined4 *)(iVar1 + 4);
      *(undefined2 *)(param_1 + 2) = local_16;
      param_2 = extraout_r1;
    }
    if (iVar2 != 0) {
      local_16 = 0;
      FUN_2c4a8764(iVar2,1,&local_16);
      param_1[1] = *(undefined4 *)(iVar2 + 4);
      *(undefined2 *)((int)param_1 + 10) = local_16;
      param_2 = extraout_r1_00;
    }
    uVar3 = 0;
  }
  if ((*puRam2c4a9a68 ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar3,param_2,*puRam2c4a9a68 ^ local_14,0);
}

