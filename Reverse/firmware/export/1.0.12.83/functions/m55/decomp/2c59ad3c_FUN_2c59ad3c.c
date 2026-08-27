/* FUN_2c59ad3c @ 0x2c59ad3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c59ad3c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_2c602414();
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c59ad9c,0x72,_LAB_2c59ad98,_LAB_2c59ad94);
  }
  iVar2 = FUN_2c602408(param_1);
  if ((iVar2 == 0xd) && (iVar2 = FUN_2c602618(param_1), uVar1 = _LAB_2c59ada0, iVar2 - 0xceU < 0x21)
     ) {
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) | 8;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c59ad9c,0x7b,_LAB_2c59ad98,uVar1,iVar2);
  }
  return;
}

