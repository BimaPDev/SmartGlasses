/* FUN_2c5380c4 @ 0x2c5380c4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5380c4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xbc);
  if ((uint)(_LAB_2c5381a0 * (*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0xac) >> 2) +
            _LAB_2c5381a0 * (iVar2 - *(int *)(param_1 + 0xc0) >> 2) +
            ((*(int *)(param_1 + 200) - *(int *)(param_1 + 0xb8) >> 2) + -1) * 0x12) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5381ac,0x47f,_LAB_2c5381a8,_LAB_2c5381b0);
  }
  if (iVar2 == *(int *)(param_1 + 0xc0)) {
    iVar2 = *(int *)(*(int *)(param_1 + 200) + -4) + 0x1f8;
  }
  iVar1 = FUN_2c53c6f8(*(undefined4 *)(iVar2 + -0x1c));
  if (((iVar1 != 0) && (iVar1 = FUN_2c53c6f8(*(undefined4 *)(iVar2 + -0x14)), iVar1 != 0)) &&
     (iVar2 = FUN_2c53c6f8(*(undefined4 *)(iVar2 + -0x18)), iVar2 != 0)) {
    if (*(int *)(param_1 + 0xbc) != *(int *)(param_1 + 0xc0)) {
      *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + -0x1c;
      FUN_2c525228();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5381ac,0x486,_LAB_2c5381a8,_LAB_2c5381a4);
}

