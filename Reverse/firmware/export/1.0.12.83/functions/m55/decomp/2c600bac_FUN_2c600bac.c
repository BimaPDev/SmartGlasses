/* FUN_2c600bac @ 0x2c600bac */

void FUN_2c600bac(int param_1)

{
  short sVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short local_16;
  int local_14;
  
  local_14 = *DAT_2c600c28;
  sVar4 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    sVar4 = *(short *)(*(int *)(param_1 + 8) + 0x16);
  }
  local_16 = 0;
  FUN_2c602340(param_1,0x13,&local_16);
  if (local_16 == sVar4) {
    iVar2 = *(int *)(param_1 + 8);
    sVar1 = sVar4;
  }
  else {
    FUN_2c607df0(param_1);
    iVar2 = *(int *)(param_1 + 8);
    sVar1 = local_16;
  }
  sVar3 = sVar1;
  if (iVar2 == 0) {
    sVar3 = 0;
    if (sVar1 == 0) goto LAB_2c600be6;
    FUN_2c606bc8(param_1);
    iVar2 = *(int *)(param_1 + 8);
    sVar3 = local_16;
  }
  *(short *)(iVar2 + 0x16) = sVar3;
LAB_2c600be6:
  if (sVar4 != sVar3) {
    FUN_2c607df0(param_1);
  }
  if (*DAT_2c600c28 != local_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

