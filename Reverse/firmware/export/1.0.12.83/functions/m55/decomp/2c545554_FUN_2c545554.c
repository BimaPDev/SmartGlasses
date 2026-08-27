/* FUN_2c545554 @ 0x2c545554 */

void FUN_2c545554(int *param_1,undefined1 *param_2,int param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  piVar1 = DAT_2c5455d0;
  if ((param_3 != 0) && (param_2 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c5455d4);
  }
  uVar3 = param_3 - (int)param_2;
  if (uVar3 < 0x10) {
    puVar2 = (undefined1 *)*param_1;
    if (uVar3 == 1) {
      *puVar2 = *param_2;
      param_1[1] = 1;
      *(undefined1 *)(*param_1 + 1) = 0;
      return;
    }
    if (uVar3 == 0) {
      param_1[1] = 0;
      *puVar2 = 0;
      return;
    }
  }
  else {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c658680(DAT_2c5455d8);
    }
    if (*DAT_2c5455d0 == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined1 *)FUN_2c47245c(0,uVar3 + 1);
    param_1[2] = uVar3;
    *param_1 = (int)puVar2;
  }
  FUN_2c674668(puVar2,param_2,uVar3);
  param_1[1] = uVar3;
  *(undefined1 *)(*param_1 + uVar3) = 0;
  return;
}

