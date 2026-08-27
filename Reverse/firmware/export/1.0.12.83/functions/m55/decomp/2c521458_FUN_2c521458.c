/* FUN_2c521458 @ 0x2c521458 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c521458(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = *_LAB_2c521540;
  iVar1 = FUN_2c5ee748();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c52154c,0x1c8,_LAB_2c521548,_LAB_2c521554,_LAB_2c521548);
  }
  iVar2 = FUN_2c5ef9d8();
  if (iVar2 != 0) {
    if (*(char *)(param_1 + 0x15) != '\x06') {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c52154c,0x1de,_LAB_2c521548,_LAB_2c521544,_LAB_2c521548);
    }
    uVar3 = FUN_2c5ef8f4(iVar1);
    if (uVar3 < 0x10) {
      uVar5 = 0x1e9;
      uVar4 = _LAB_2c521560;
    }
    else {
      uVar3 = FUN_2c48a2c4();
      if (0xf < uVar3) {
        if (*_LAB_2c521540 == iVar6) {
          return iVar2;
        }
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      uVar5 = 0x1f5;
      uVar4 = _LAB_2c521550;
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c52154c,uVar5,_LAB_2c521548,uVar4,_LAB_2c521548);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c52154c,0x1d3,_LAB_2c521548,_LAB_2c52155c,_LAB_2c521548);
}

