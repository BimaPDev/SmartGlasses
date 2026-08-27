/* FUN_2c503a80 @ 0x2c503a80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c503a80(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  
  iVar1 = FUN_2c602414();
  piVar5 = *(int **)(iVar1 + 0x30);
  if (piVar5 != (int *)0x0) {
    iVar2 = FUN_2c629df4();
    uVar4 = *(int *)(iVar1 + 0x3c) - 0xd2;
    if (((uVar4 < 0x12) && ((int)((_LAB_2c503af8 >> (uVar4 & 0xff)) << 0x1f) < 0)) &&
       (uVar4 = iVar2 - *(int *)(iVar1 + 0x38), uVar4 < *_LAB_2c503afc)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_DAT_2c503b0c,0x41,_LAB_2c503b04,_DAT_2c503b08,_LAB_2c503b04,uVar4);
    }
    if (*(code **)(*piVar5 + 8) == _LAB_2c503b00) {
      piVar5 = (int *)piVar5[3];
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x30))(piVar5,param_1);
      }
    }
    else {
      (**(code **)(*piVar5 + 8))(piVar5,param_1);
    }
    *(int *)(iVar1 + 0x38) = iVar2;
    uVar3 = FUN_2c602618(param_1);
    *(undefined4 *)(iVar1 + 0x3c) = uVar3;
  }
  return;
}

