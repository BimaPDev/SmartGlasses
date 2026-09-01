/* FUN_100d06c4 @ 0x100d06c4 */

void FUN_100d06c4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  if (((param_1 == 0) || (param_2 == 0)) || (iVar1 = FUN_100cf740(), iVar1 == 0)) {
    return;
  }
  piVar3 = *(int **)(iVar1 + 0x28);
  if ((piVar3 == (int *)0x0) || (piVar2 = piVar3 + -0x4d, piVar2 == (int *)0x0)) {
LAB_100d06ee:
    FUN_10134e08(iVar1 + 4,param_2);
  }
  else {
    piVar3 = (int *)*piVar3;
    if (piVar3 != (int *)0x0) {
      piVar3 = piVar3 + -0x4d;
    }
    while (piVar4 = piVar3, param_2 != piVar2[0x37]) {
      if (piVar4 == (int *)0x0) goto LAB_100d06ee;
      piVar2 = piVar4;
      piVar3 = (int *)0x0;
      if ((piVar4 != (int *)0xfffffecc) && (piVar3 = (int *)piVar4[0x4d], piVar3 != (int *)0x0)) {
        piVar3 = piVar3 + -0x4d;
      }
    }
    piVar2[0x37] = DAT_100d0720;
  }
  FUN_100d0268(param_2);
  return;
}

