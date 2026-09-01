/* FUN_100d47a4 @ 0x100d47a4 */

int FUN_100d47a4(code *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  for (piVar2 = *(int **)*DAT_100d47d4; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
    iVar1 = (uint)*(byte *)(piVar2 + 0xe) << 0x1f;
    if ((iVar1 < 0) && (iVar3 = iVar3 + 1, param_1 != (code *)0x0)) {
      (*param_1)(piVar2[3],(*(byte *)(piVar2 + 0xe) & 0x7f) >> 4,param_2,iVar1,param_4);
    }
  }
  return iVar3;
}

