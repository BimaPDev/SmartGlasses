/* FUN_2c5d688c @ 0x2c5d688c */

int FUN_2c5d688c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 3) {
    uVar1 = 1;
  }
  else if (param_1 == 0) {
    uVar1 = 2;
  }
  else if (param_1 == 5) {
    uVar1 = 3;
  }
  else {
    uVar1 = 1;
  }
  iVar2 = FUN_2c63f86c(uVar1);
  if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c5d68d4,0x175,DAT_2c5d68d0,DAT_2c5d68cc);
  }
  return iVar2;
}

