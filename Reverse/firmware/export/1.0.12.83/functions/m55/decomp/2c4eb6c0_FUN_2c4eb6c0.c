/* FUN_2c4eb6c0 @ 0x2c4eb6c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4eb6c0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_2c602408();
  uVar3 = FUN_2c602400(param_1);
  uVar1 = _LAB_2c4eb768;
  if (iVar2 == 0x1c) {
    uVar4 = FUN_2c635f80();
    uVar1 = _LAB_2c4eb758;
    uVar3 = func_0x2c635f84(uVar3,uVar4);
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x2a,_LAB_2c4eb760,_LAB_2c4eb75c,uVar1,uVar4,uVar3);
  }
  if (iVar2 != 0xd) {
    return;
  }
  uVar3 = FUN_2c602618(param_1);
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x2e,_LAB_2c4eb760,_LAB_2c4eb75c,uVar1,uVar3);
}

