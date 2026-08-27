/* FUN_2c522cec @ 0x2c522cec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c522cec(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c522e20,0x106,_LAB_2c522e28,_LAB_2c522e2c);
  }
  uVar1 = FUN_2c5ef8d0();
  uVar2 = FUN_2c66c4ec();
  FUN_2c52270c(param_2 + 0x18,0,*(undefined4 *)(param_2 + 0x1c),uVar1,uVar2);
  iVar3 = FUN_2c5ef9d8(param_1);
  if (iVar3 == 0) {
    if ((*(int *)(param_2 + 0xc) == 0) && (iVar3 = FUN_2c5efa10(param_1), iVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c522e20,0x11d,_LAB_2c522e28,_LAB_2c522e30);
    }
    *(undefined4 *)(param_2 + 0xc) = 1;
    *(undefined4 *)(param_2 + 4) = 0;
  }
  else {
    if (*(int *)(param_2 + 0xc) == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c522e20,0x112,_LAB_2c522e28,_LAB_2c522e34);
    }
    *(undefined4 *)(param_2 + 0xc) = 0;
    iVar3 = FUN_2c5efa10(param_1);
    if (iVar3 != 0) {
      *(undefined4 *)(param_2 + 0x10) = 3;
    }
  }
  FUN_2c522c44(param_2,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c522e20,0x126,_LAB_2c522e28,_LAB_2c522e1c,*(undefined4 *)(param_2 + 0xc),
               *(undefined4 *)(param_2 + 0x10));
}

