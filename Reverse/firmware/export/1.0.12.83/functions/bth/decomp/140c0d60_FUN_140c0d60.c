/* FUN_140c0d60 @ 0x140c0d60 */

int * FUN_140c0d60(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = DAT_140c0d8c;
  *param_1 = 0;
  FUN_140c0d50();
  iVar2 = *piVar3;
  iVar1 = *DAT_140c0d90;
  *param_1 = iVar2;
  if (iVar2 != iVar1) {
    FUN_140c05dc();
    piVar3 = (int *)*piVar3;
    iVar1 = *piVar3;
    *param_1 = (int)piVar3;
    *piVar3 = iVar1 + 1;
  }
  return param_1;
}

