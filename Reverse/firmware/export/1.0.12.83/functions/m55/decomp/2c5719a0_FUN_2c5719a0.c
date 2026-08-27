/* FUN_2c5719a0 @ 0x2c5719a0 */

void FUN_2c5719a0(uint *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  piVar1 = DAT_2c571a08;
  uVar4 = *param_1;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(DAT_2c571a0c);
  }
  if ((param_2 < uVar4) && (uVar3 = param_2 * 2, uVar4 < param_2 << 1)) {
    if (-1 < (int)uVar3) {
      iVar2 = uVar3 + 1;
      *param_1 = uVar3;
      iVar5 = *piVar1;
      goto joined_r0x2c5719da;
    }
    iVar2 = -0x80000000;
    *param_1 = 0x7fffffff;
  }
  else {
    iVar2 = uVar4 + 1;
  }
  iVar5 = *DAT_2c571a08;
  piVar1 = DAT_2c571a08;
joined_r0x2c5719da:
  if (iVar5 != 0) {
    FUN_2c47245c(0);
    return;
  }
  FUN_2c4723c4();
  *piVar1 = 1;
  FUN_2c47245c(0,iVar2);
  return;
}

