/* FUN_2c5693cc @ 0x2c5693cc */

undefined4 FUN_2c5693cc(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = DAT_2c5693dc;
  if (param_2 == 0) {
    iVar3 = *DAT_2c640144;
    if ((param_1 == 0) && (iVar2 = FUN_2c48f590(), iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c64014c,0x39f,DAT_2c640150,DAT_2c640154,uVar1);
    }
    iVar2 = FUN_2c6411ac();
    if (iVar2 != 0) {
      iVar3 = FUN_2c63f2f4(0,param_1);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,DAT_2c64014c,0x3b0,DAT_2c640150,DAT_2c640148,param_1,uVar1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c64014c,0x3ac,DAT_2c640150,DAT_2c640160,param_1,uVar1);
    }
    if (*DAT_2c640144 == iVar3) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  iVar3 = *DAT_2c640040;
  if ((param_1 == 0) && (iVar2 = FUN_2c48f590(), iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c640048,0x37f,DAT_2c64004c,DAT_2c640050,uVar1);
  }
  iVar2 = FUN_2c6411ac();
  if (iVar2 != 0) {
    iVar3 = FUN_2c63f2f4(1,param_1);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c640048,0x391,DAT_2c64004c,DAT_2c640044,param_1,uVar1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c640048,0x38c,DAT_2c64004c,DAT_2c64005c,param_1,uVar1);
  }
  if (*DAT_2c640040 == iVar3) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

