/* FUN_2c547fb8 @ 0x2c547fb8 */

bool FUN_2c547fb8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x114);
  if ((*(int *)(iVar2 + 8) != param_2) || (*(int *)(iVar2 + 0x10) != param_3)) {
    if (*(int *)(iVar2 + 0x2c) == param_2) {
      if (*(int *)(iVar2 + 0x18) == param_3) {
        return false;
      }
      if (*(int *)(iVar2 + 0x10) == param_3) {
        return false;
      }
      if (param_2 != *(int *)(iVar2 + 4)) {
        return true;
      }
      iVar1 = *(int *)(iVar2 + 0x20);
    }
    else {
      if (*(int *)(iVar2 + 4) != param_2) {
        return true;
      }
      if (*(int *)(iVar2 + 0x10) == param_3) {
        return false;
      }
      iVar1 = *(int *)(iVar2 + 0x20);
    }
    if (iVar1 != param_3) {
      return *(int *)(iVar2 + 0x18) != param_3;
    }
  }
  return false;
}

