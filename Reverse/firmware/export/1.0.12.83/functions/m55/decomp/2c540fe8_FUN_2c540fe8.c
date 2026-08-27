/* FUN_2c540fe8 @ 0x2c540fe8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c540fe8(int *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  
  piVar4 = param_1 + 2;
  *param_1 = (int)piVar4;
  if (param_2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c54106c);
  }
  uVar3 = FUN_2c66c4ec(param_2);
  piVar2 = _LAB_2c541068;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      uVar1 = *param_2;
      param_1[1] = 1;
      *(undefined1 *)(param_1 + 2) = uVar1;
      *(undefined1 *)((int)param_1 + 9) = 0;
      return param_1;
    }
    if (uVar3 == 0) {
      param_1[1] = 0;
      *(undefined1 *)piVar4 = 0;
      return param_1;
    }
  }
  else {
    if (*_LAB_2c541068 == 0) {
      FUN_2c4723c4();
      *piVar2 = 1;
    }
    piVar4 = (int *)FUN_2c47245c(0,uVar3 + 1);
    param_1[2] = uVar3;
    *param_1 = (int)piVar4;
  }
  FUN_2c674668(piVar4,param_2,uVar3);
  param_1[1] = uVar3;
  *(undefined1 *)(*param_1 + uVar3) = 0;
  return param_1;
}

