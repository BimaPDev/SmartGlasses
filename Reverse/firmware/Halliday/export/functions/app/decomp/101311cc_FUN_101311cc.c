/* FUN_101311cc @ 0x101311cc */

int FUN_101311cc(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int local_20;
  int iStack_1c;
  int iStack_18;
  
  local_20 = param_1;
  iStack_1c = param_2;
  iStack_18 = param_3;
  iVar1 = FUN_100b88c4(param_1,param_2,&local_20,&iStack_1c);
  if (iVar1 == 0) {
    iVar2 = iStack_1c - local_20;
    if (param_4 < iVar2 + 1) {
      iVar1 = -1;
    }
    else {
      FUN_1011ea40(param_3,local_20,iVar2);
      *(undefined1 *)(param_3 + iVar2) = 0;
    }
  }
  return iVar1;
}

