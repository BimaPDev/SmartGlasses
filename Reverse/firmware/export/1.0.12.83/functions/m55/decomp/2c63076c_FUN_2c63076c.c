/* FUN_2c63076c @ 0x2c63076c */

void FUN_2c63076c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined8 uVar5;
  short local_18 [2];
  uint local_14;
  
  local_14 = *DAT_2c6307e0;
  uVar5 = FUN_2c6041dc(param_1,0,param_3,0);
  uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
  iVar4 = 0;
  if ((int)uVar5 != 0) {
    uVar2 = FUN_2c6033b4(param_1,0x40000,0x57);
    sVar1 = FUN_2c6033b4(param_1,0x40000,0x58);
    uVar3 = FUN_2c63736c((int)uVar5);
    FUN_2c62b954(local_18,uVar3,uVar2,(int)sVar1,0,0x1fff,0);
    iVar4 = (int)local_18[0];
    uVar2 = extraout_r1;
  }
  if ((*DAT_2c6307e0 ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(iVar4,uVar2,*DAT_2c6307e0 ^ local_14,0);
}

