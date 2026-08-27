/* FUN_2c4f4780 @ 0x2c4f4780 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4f4780(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = func_0x2c4f3ce8();
  piVar4 = *(int **)(param_1 + 0x28);
  if (piVar4 == (int *)0x0) {
LAB_2c4f47a4:
    iVar5 = *(int *)param_2[0x14];
  }
  else {
    if (param_2 == piVar4) {
      piVar3 = (int *)(param_1 + 0x28);
    }
    else {
      do {
        piVar3 = piVar4;
        piVar4 = (int *)*piVar3;
        if (piVar4 == (int *)0x0) goto LAB_2c4f47a4;
      } while (param_2 != piVar4);
    }
    *piVar3 = *piVar4;
    iVar5 = *(int *)param_2[0x14];
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(2,param_2[0x13]);
  }
  if (-1 < iVar1) {
    return iVar1;
  }
  iVar6 = 0;
  iVar5 = 0;
  while (iVar5 != iVar1) {
    iVar6 = iVar6 + 1;
    uVar2 = _LAB_2c4f4810;
    if (iVar6 == 0xf) goto LAB_2c4f47e8;
    iVar5 = (int)*(char *)(_LAB_2c4f480c + iVar6 * 8);
  }
  uVar2 = *(undefined4 *)(_LAB_2c4f480c + iVar6 * 8 + 4);
LAB_2c4f47e8:
  FUN_2c66ac44(_LAB_2c4f4820,_LAB_2c4f481c,0x142c,_LAB_2c4f4818,uVar2,_LAB_2c4f4814);
  return iVar1;
}

