/* FUN_2c54c25c @ 0x2c54c25c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c54c25c(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool in_ZR;
  bool in_CY;
  
  piVar3 = _LAB_2c54c300;
  if (in_CY && !in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_LAB_2c54c304);
  }
  iVar2 = *param_1;
  if ((uint)(_LAB_2c54c2fc * (param_1[2] - iVar2 >> 4)) < param_2) {
    iVar9 = param_1[1];
    iVar8 = iVar9 - iVar2;
    if (param_2 == 0) {
      iVar6 = 0;
      iVar1 = 0;
      iVar7 = iVar1;
    }
    else {
      if (*_LAB_2c54c300 == 0) {
        FUN_2c4723c4();
        *piVar3 = 1;
      }
      iVar6 = param_2 * 0xf0;
      iVar1 = FUN_2c47245c(0,iVar6);
      iVar7 = iVar1;
    }
    for (; iVar2 != iVar9; iVar2 = iVar2 + 0xf0) {
      func_0x2c54be14(iVar1,iVar2);
      iVar1 = iVar1 + 0xf0;
    }
    piVar5 = (int *)param_1[1];
    piVar3 = (int *)*param_1;
    if ((int *)*param_1 != piVar5) {
      do {
        piVar4 = piVar3 + 0x3c;
        (**(code **)(*piVar3 + 4))(piVar3);
        piVar3 = piVar4;
      } while (piVar5 != piVar4);
      piVar5 = (int *)*param_1;
    }
    if (piVar5 == (int *)0x0) {
      *param_1 = iVar7;
      param_1[1] = iVar7 + iVar8;
      param_1[2] = iVar6 + iVar7;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar5);
  }
  return;
}

