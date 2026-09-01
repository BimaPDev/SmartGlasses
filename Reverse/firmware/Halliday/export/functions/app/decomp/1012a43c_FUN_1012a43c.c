/* FUN_1012a43c @ 0x1012a43c */

undefined4 FUN_1012a43c(undefined4 *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = *param_3 + 1;
    *param_3 = iVar2;
    piVar1 = (int *)*param_1;
    if (iVar2 < piVar1[1]) goto LAB_1012a44e;
  }
  else {
    iVar2 = *param_3 + -1;
    *param_3 = iVar2;
    if (-1 < iVar2) {
      piVar1 = (int *)*param_1;
LAB_1012a44e:
      return *(undefined4 *)(*piVar1 + iVar2 * 4);
    }
  }
  return 0;
}

