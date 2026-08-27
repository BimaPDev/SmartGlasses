/* FUN_140d1a6a @ 0x140d1a6a */

int * FUN_140d1a6a(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int unaff_r6;
  bool bVar3;
  
  piVar1 = (int *)*param_1;
  iVar2 = param_2[1];
  if (param_2 + 2 == (undefined4 *)*param_2) {
    if (iVar2 != 0) {
      FUN_140d1930();
    }
    iVar2 = param_2[1];
    param_1[1] = iVar2;
    *(undefined1 *)(*param_1 + iVar2) = 0;
  }
  else {
    bVar3 = piVar1 == param_1 + 2;
    *param_1 = (int)*param_2;
    param_1[1] = iVar2;
    if (bVar3) {
      piVar1 = (int *)0x0;
    }
    if (!bVar3) {
      unaff_r6 = param_1[2];
    }
    param_1[2] = param_2[2];
    if (piVar1 == (int *)0x0) {
      *param_2 = param_2 + 2;
    }
    else {
      *param_2 = piVar1;
      param_2[2] = unaff_r6;
    }
  }
  param_2[1] = 0;
  *(undefined1 *)*param_2 = 0;
  return param_1;
}

