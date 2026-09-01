/* FUN_10119d9c @ 0x10119d9c */

void FUN_10119d9c(undefined1 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar1 = param_2[2];
  iVar3 = *param_2;
  iVar4 = iVar1 + 1;
  if ((iVar3 == 0) || (param_2[1] <= iVar1)) {
    param_2[2] = iVar4;
  }
  else {
    iVar2 = param_2[1] + -1;
    bVar5 = iVar2 == iVar1;
    if (bVar5) {
      iVar1 = 0;
    }
    param_2[2] = iVar4;
    if (bVar5) {
      *(char *)(iVar3 + iVar2) = (char)iVar1;
    }
    if (!bVar5) {
      *(undefined1 *)(iVar3 + iVar1) = param_1;
    }
  }
  return;
}

