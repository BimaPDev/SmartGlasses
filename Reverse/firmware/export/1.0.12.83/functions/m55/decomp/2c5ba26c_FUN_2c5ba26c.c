/* FUN_2c5ba26c @ 0x2c5ba26c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5ba26c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_2c48e424(param_1,_LAB_2c5ba4d8);
  if (iVar1 == 0) {
    uVar2 = 0x1cb;
    uVar3 = _LAB_2c5ba530;
  }
  else {
    iVar1 = FUN_2c48e424(iVar1,_LAB_2c5ba4dc);
    if (iVar1 == 0) {
      uVar2 = 0x1d1;
      uVar3 = _LAB_2c5ba534;
    }
    else {
      iVar1 = FUN_2c48de10();
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,_LAB_2c5ba4e8,0x1d9,_LAB_2c5ba4e0,_LAB_2c5ba4e4,_LAB_2c5ba4e0,iVar1);
      }
      uVar2 = 0x1d6;
      uVar3 = _LAB_2c5ba538;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c5ba4e8,uVar2,_LAB_2c5ba4e0,uVar3,_LAB_2c5ba4e0);
}

