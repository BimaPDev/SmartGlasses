/* FUN_100feb8c @ 0x100feb8c */

undefined4 FUN_100feb8c(int param_1,int param_2,int param_3,undefined4 param_4,int *param_5)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 == 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x68) + 4);
  }
  else {
    piVar2 = *(int **)(param_1 + 0x9c);
    piVar4 = piVar2 + (uint)*(ushort *)(param_1 + 0x98) * 4;
    while( true ) {
      if (piVar4 <= piVar2) {
        return 0x8e;
      }
      if ((param_2 == *piVar2) && (iVar3 = piVar2[3], iVar3 != 0)) break;
      piVar2 = piVar2 + 4;
    }
    param_3 = param_3 + piVar2[2];
  }
  if (param_5 != (int *)0x0) {
    if (*param_5 == 0) {
      *param_5 = iVar3;
      return 0;
    }
    uVar1 = FUN_100fae00(*(undefined4 *)(param_1 + 0x68),param_3,param_4);
    return uVar1;
  }
  uVar1 = FUN_100fae00(*(undefined4 *)(param_1 + 0x68),param_3,param_4,iVar3);
  return uVar1;
}

