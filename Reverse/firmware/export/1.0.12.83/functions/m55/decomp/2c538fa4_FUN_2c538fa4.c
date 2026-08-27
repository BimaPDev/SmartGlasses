/* FUN_2c538fa4 @ 0x2c538fa4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c538fa4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_2c5e8cf4(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c539034,0x51b,_LAB_2c539030,_LAB_2c53902c,param_1);
  }
  if (param_2 == 0) {
    if (param_1 == 2) {
      uVar2 = func_0x2c5e8c78();
      iVar3 = FUN_2c6041dc(uVar2,0xffffffff);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,_LAB_2c539034,0x520,_LAB_2c539030,_LAB_2c539038);
      }
    }
    else if (param_1 == 7) {
      uVar2 = func_0x2c5e8ccc();
      iVar3 = FUN_2c6041dc(uVar2,0xffffffff);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,_LAB_2c539034,0x524,_LAB_2c539030,_LAB_2c53903c);
      }
    }
  }
  return iVar1;
}

