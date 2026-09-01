/* FUN_10122662 @ 0x10122662 */

uint FUN_10122662(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4c) == param_2) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10122656();
    if (uVar1 == 0) {
      iVar2 = FUN_100862e0(*(undefined1 *)(param_1 + 1),param_1 + 0x50,param_2,1,param_4);
      if (iVar2 != 0) {
        param_2 = -1;
      }
      uVar1 = (uint)(iVar2 != 0);
      *(int *)(param_1 + 0x4c) = param_2;
    }
  }
  return uVar1;
}

