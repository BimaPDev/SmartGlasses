/* FUN_2c5c4348 @ 0x2c5c4348 */

int FUN_2c5c4348(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    iVar3 = 1;
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_2c66c4ec();
    iVar3 = iVar1 + 1;
  }
  iVar2 = lv_mem_alloc(iVar3);
  if (iVar2 != 0) {
    FUN_2c62c3b0(iVar2,iVar3);
    FUN_2c62c0d8(iVar2,param_1,iVar1);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c5c439c,0x5d,DAT_2c5c4398,DAT_2c5c4394);
}

