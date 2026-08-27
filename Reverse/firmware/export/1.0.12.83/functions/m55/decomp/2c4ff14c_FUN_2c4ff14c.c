/* FUN_2c4ff14c @ 0x2c4ff14c */

void FUN_2c4ff14c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x44);
  if (param_2 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)((uint)*(ushort *)((int)piVar3 + 0x18) << 0x10) >> 0x14;
    if (param_2 <= iVar1) {
      iVar1 = param_2;
    }
  }
  while( true ) {
    if (piVar3 == (int *)*(int *)(param_1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c4ff22c,0x219,DAT_2c4ff228,DAT_2c4ff224,DAT_2c4ff220);
    }
    if ((int)((uint)*(ushort *)(piVar3 + 6) << 0x10) >> 0x14 == iVar1) break;
    piVar3 = (int *)*piVar3;
  }
  if ((int *)*(int *)(param_1 + 0x48) == piVar3) {
    return;
  }
  FUN_2c62e838(param_1,DAT_2c4ff21c);
  if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c4ff22c,0x220,DAT_2c4ff228,DAT_2c4ff224,DAT_2c4ff230);
  }
  if (*(char *)(param_1 + 0x115) == '\0') {
    iVar1 = *(int *)(*(int *)(*piVar3 + 0xc) + 0x18);
  }
  else {
    iVar1 = piVar3[7];
  }
  if ((*(int *)(param_1 + 0x48) == 0) || (param_3 == 0)) {
    *(int *)(param_1 + 0xbc) = iVar1;
    *(int *)(param_1 + 0xc0) = iVar1;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xc0);
    *(int *)(param_1 + 0xbc) = iVar1;
    if (iVar2 != iVar1) {
      *(int *)(param_1 + 0xec) = iVar1;
      *(int *)(param_1 + 0xe4) = iVar2;
      *(int *)(param_1 + 0xe8) = iVar2;
      FUN_2c62e8ec(param_1 + 0xc4);
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x48);
      goto LAB_2c4ff1c2;
    }
  }
  *(int **)(param_1 + 0x4c) = piVar3;
LAB_2c4ff1c2:
  *(int **)(param_1 + 0x48) = piVar3;
  FUN_2c4fe394(param_1);
  FUN_2c607df0(param_1);
  return;
}

