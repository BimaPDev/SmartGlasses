/* FUN_2c5398dc @ 0x2c5398dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5398dc(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0xc);
  iVar2 = *_LAB_2c5399a0;
  if ((iVar3 != 0) && (*(int *)(param_2 + 8) != 0)) {
    uVar1 = FUN_2c66c4ec(iVar3);
    FUN_2c539348(param_1 + 0x88,0,*(undefined4 *)(param_1 + 0x8c),iVar3,uVar1);
    if (*_LAB_2c5399a0 == iVar2) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5399a8,1099,_LAB_2c5399ac,_LAB_2c5399a4);
}

