/* FUN_2c596720 @ 0x2c596720 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c596720(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    uVar2 = 0x68e;
    uVar3 = DAT_2c596838;
  }
  else {
    iVar1 = FUN_2c5479e0(*(int *)(param_1 + 0x3c),*(undefined4 *)(*(int *)(param_1 + 0x40) + 4));
    if ((iVar1 != 0) ||
       (iVar1 = FUN_2c5479e0(*(undefined4 *)(param_1 + 0x3c),
                             *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x2c)), iVar1 != 0)) {
      uVar3 = DAT_2c596828;
      uVar2 = FUN_2c5479e0(*(undefined4 *)(param_1 + 0x3c),
                           *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x2c));
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c596830,0x691,DAT_2c59682c,uVar3,DAT_2c59682c,uVar2);
    }
    iVar1 = FUN_2c547bd8(*(undefined4 *)(param_1 + 0x3c));
    if (iVar1 == 0) {
      uVar2 = 0x694;
      uVar3 = DAT_2c596834;
    }
    else {
      iVar1 = FUN_2c5befd0();
      if (iVar1 == 0) {
        iVar1 = FUN_2c5479e0(*(undefined4 *)(param_1 + 0x3c),
                             *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x28));
        if (iVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar2 = 0x69b;
        uVar3 = DAT_2c59683c;
      }
      else {
        uVar2 = 0x697;
        uVar3 = DAT_2c596840;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c596830,uVar2,DAT_2c59682c,uVar3,DAT_2c59682c);
}

