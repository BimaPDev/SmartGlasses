/* FUN_2c5cb620 @ 0x2c5cb620 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5cb620(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  FUN_2c5c685c();
  iVar1 = func_0x2c5c6b7c();
  uVar2 = iVar1 - 1U & 0xff;
  if (uVar2 < 4) {
    uVar3 = *(undefined4 *)(_LAB_2c5cb68c + uVar2 * 4);
  }
  else {
    uVar3 = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5cb698,0x2c0,_LAB_2c5cb694,_LAB_2c5cb690,uVar3);
}

