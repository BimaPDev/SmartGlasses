/* FUN_2c5c13a8 @ 0x2c5c13a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c13a8(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  switch(*(undefined1 *)(param_2 + param_3)) {
  case 0:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5c15c4,0x89,_LAB_2c5c15bc,_LAB_2c5c15d4,_LAB_2c5c15bc);
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5c15c4,0x8e,_LAB_2c5c15bc,_LAB_2c5c15d8,_LAB_2c5c15bc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5c15c4,0x93,_LAB_2c5c15bc,_LAB_2c5c15dc,_LAB_2c5c15bc);
  case 3:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5c15c4,0x99,_LAB_2c5c15bc,_LAB_2c5c15c0,_LAB_2c5c15bc);
  case 4:
    uVar1 = 0x9f;
    uVar2 = _LAB_2c5c15e0;
    break;
  case 5:
    uVar1 = 0xa4;
    uVar2 = _LAB_2c5c15e4;
    break;
  case 6:
    uVar1 = 0xa9;
    uVar2 = _LAB_2c5c15c8;
    break;
  default:
    if (*_LAB_2c5c15b8 != *_LAB_2c5c15b8) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5c15c4,uVar1,_LAB_2c5c15bc,uVar2,_LAB_2c5c15bc);
}

