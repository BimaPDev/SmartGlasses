/* FUN_1012f40c @ 0x1012f40c */

int FUN_1012f40c(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)param_1[4];
  iVar1 = *param_1 + (0x200 - param_1[1]);
  iVar2 = 0;
  while( true ) {
    while( true ) {
      if (param_2 <= iVar2) {
        return param_2;
      }
      if (param_1[1] < 1) break;
      *(undefined1 *)(param_3 + iVar2) = *(undefined1 *)(iVar1 + iVar2);
      iVar2 = iVar2 + 1;
      param_1[1] = param_1[1] + -1;
    }
    iVar1 = (*(code *)*puVar3)(*param_1,1,0x200,puVar3,param_4);
    if (iVar1 < 1) break;
    param_1[1] = iVar1 + param_1[1];
    iVar1 = *param_1 - iVar2;
  }
  return -1;
}

