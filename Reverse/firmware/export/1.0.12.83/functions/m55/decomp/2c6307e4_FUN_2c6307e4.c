/* FUN_2c6307e4 @ 0x2c6307e4 */

void FUN_2c6307e4(int param_1,undefined2 *param_2)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined2 local_24 [2];
  undefined2 local_20;
  int local_1c;
  
  local_1c = *DAT_2c63087c;
  iVar5 = FUN_2c6033b4(param_1,0,0x57,0);
  iVar6 = FUN_2c6033b4(param_1,0x40000,0x57);
  sVar1 = *(short *)(iVar5 + 8);
  sVar2 = *(short *)(iVar6 + 8);
  sVar4 = FUN_2c6033b4(param_1,0,0x59);
  iVar5 = (int)sVar2 + (int)sVar1;
  sVar1 = *(short *)(param_1 + 0x16);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 1;
  }
  sVar4 = sVar4 + (short)(iVar5 >> 1);
  iVar5 = FUN_2c6073f8(param_1);
  iVar6 = (int)sVar4;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 1;
  }
  if (iVar5 < 0) {
    iVar5 = iVar5 + 1;
  }
  sVar1 = (sVar1 - (short)(iVar6 >> 1)) + (short)(iVar5 >> 1);
  param_2[1] = sVar1;
  param_2[3] = sVar4 + sVar1;
  FUN_2c607338(param_1,local_24);
  param_2[2] = local_20;
  piVar3 = DAT_2c63087c;
  *param_2 = local_24[0];
  if (*piVar3 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

