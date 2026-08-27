/* FUN_2c535a28 @ 0x2c535a28 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c535a28(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = *(int **)(param_1 + 0xc);
  if (piVar3 == (int *)0x0) {
    return;
  }
  if (*(code **)(*piVar3 + 4) == _LAB_2c535aa4) {
    piVar4 = (int *)piVar3[3];
    *piVar3 = _DAT_2c535aa8;
    piVar3[2] = 0;
    piVar3[3] = 0;
    if (piVar4 != (int *)0x0) {
      iVar2 = piVar4[1];
      piVar4[1] = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        (**(code **)(*piVar4 + 8))(piVar4);
        iVar2 = piVar4[2];
        piVar4[2] = iVar2 + -1;
        if (iVar2 + -1 == 0) {
          (**(code **)(*piVar4 + 0xc))(piVar4);
        }
      }
      piVar4 = (int *)piVar3[3];
      if ((piVar4 != (int *)0x0) && (iVar2 = piVar4[1], piVar4[1] = iVar2 + -1, iVar2 + -1 == 0)) {
        (**(code **)(*piVar4 + 8))(piVar4);
        iVar2 = piVar4[2];
        piVar4[2] = iVar2 + -1;
        if (iVar2 + -1 == 0) {
          (**(code **)(*piVar4 + 0xc))(piVar4);
        }
      }
    }
    puVar1 = DAT_2c4726d4;
    piVar4 = DAT_2c4726d0;
    if (piVar3 != (int *)0x0) {
      if (*DAT_2c4726d0 != 0) {
        FUN_2c644044(*DAT_2c4726d4,0xffffffff);
        FUN_2c47231c(*piVar4,DAT_2c4726d8,0,piVar3);
        FUN_2c644080(*puVar1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x189,DAT_2c4726e8,DAT_2c4726e4,DAT_2c4726e0,DAT_2c4726dc);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x2c535aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 4))(piVar3);
  return;
}

