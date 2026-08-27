/* FUN_2c4fefe8 @ 0x2c4fefe8 */

bool FUN_2c4fefe8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    return false;
  }
  iVar1 = FUN_2c607440();
  if (*(char *)(param_1 + 0x115) != '\0') {
    if (param_2 == *(int *)(param_1 + 0x40)) {
      return (bool)*(char *)(param_1 + 0x115);
    }
    iVar1 = (int)(short)((short)iVar1 -
                        ((short)*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x20) +
                        *(short *)(param_1 + 0x118)));
  }
  iVar2 = *(int *)(param_1 + 0xc0);
  iVar3 = *(int *)(param_2 + 0x20);
  if (*(int *)(param_2 + 0x1c) < iVar2) {
    if (iVar2 < iVar3) {
      return true;
    }
  }
  else if (iVar3 <= iVar1 + iVar2) {
    return true;
  }
  return *(int *)(param_2 + 0x1c) < iVar1 + iVar2 && iVar1 + iVar2 < iVar3;
}

