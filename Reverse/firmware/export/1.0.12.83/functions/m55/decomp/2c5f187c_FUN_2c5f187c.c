/* FUN_2c5f187c @ 0x2c5f187c */

undefined4 FUN_2c5f187c(code *param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_2;
  if ((iVar4 != 0) && (iVar3 = param_2[1], param_3 <= iVar3)) {
    uVar1 = *(undefined1 *)(iVar4 + iVar3);
    *(undefined1 *)(iVar4 + iVar3) = 0;
    uVar2 = (*param_1)(iVar4 + param_3);
    *(undefined1 *)(iVar4 + param_2[1]) = uVar1;
    return uVar2;
  }
  return 0;
}

