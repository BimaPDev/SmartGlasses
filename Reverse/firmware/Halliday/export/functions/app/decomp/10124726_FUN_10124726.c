/* FUN_10124726 @ 0x10124726 */

int FUN_10124726(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar1 = FUN_10124cb8(param_1,1);
  if (iVar1 == 0) {
    local_20 = *param_2;
    uStack_1c = param_2[1];
    FUN_101258b0(param_1,&local_20,0,1);
    iVar1 = FUN_10125e80(param_1,&local_20);
    iVar2 = FUN_1012a90e(param_1 + 0x14,&local_20,0);
    if ((iVar2 != 0) || (iVar2 = FUN_10124cb8(param_1,0x80000), iVar2 != 0)) {
      iVar2 = FUN_10126fd2(param_1);
      while (iVar2 = iVar2 + -1, -1 < iVar2) {
        iVar3 = FUN_10124726(*(undefined4 *)(**(int **)(param_1 + 8) + iVar2 * 4),&local_20);
        if (iVar3 != 0) {
          return iVar3;
        }
      }
    }
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return 0;
}

