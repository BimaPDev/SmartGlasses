/* FUN_2c5af350 @ 0x2c5af350 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5af350(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5af40c,0xe7,_LAB_2c5af408,_LAB_2c5af420);
  }
  if (*(char *)(iVar3 + 0x10) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5af40c,0xeb,_LAB_2c5af408,_LAB_2c5af418);
  }
  if (*(int *)(iVar3 + 0xc) == 1) {
    iVar3 = FUN_2c5af1d0(iVar3);
    if (iVar3 == 0) {
      uVar2 = 0xf3;
      uVar1 = _LAB_2c5af404;
      goto LAB_2c5af384;
    }
  }
  else {
    iVar3 = FUN_2c5af290();
    if (iVar3 == 0) {
      uVar2 = 0xf9;
      uVar1 = _LAB_2c5af41c;
LAB_2c5af384:
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5af40c,uVar2,_LAB_2c5af408,uVar1);
    }
  }
  return;
}

