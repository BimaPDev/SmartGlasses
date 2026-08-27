/* FUN_2c4c29e8 @ 0x2c4c29e8 */

void FUN_2c4c29e8(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x14U);
  if (param_2 == (int *)(param_1 + 0x14U)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4c2a38);
  }
  do {
    piVar1 = piVar3;
    if ((piVar1 == (int *)0x0) || (param_2 <= piVar1)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c4c2a34);
    }
    iVar2 = *piVar1 << 0x1f;
    if (-1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c4c2a30,piVar1,iVar2,*piVar1,param_4);
    }
    piVar3 = (int *)piVar1[1];
  } while ((piVar3 != (int *)0x0) && (piVar3 < param_2));
  if ((param_2 != piVar3) && (*param_2 << 0x1f < 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4c2a30,piVar1 + 1,iVar2,*param_2 << 0x1f,param_4);
  }
  return;
}

