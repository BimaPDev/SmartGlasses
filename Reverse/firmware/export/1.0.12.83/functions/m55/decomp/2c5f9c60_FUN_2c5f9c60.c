/* FUN_2c5f9c60 @ 0x2c5f9c60 */

bool FUN_2c5f9c60(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == 0 || (param_1 == param_2 || param_1 == 0)) {
    return false;
  }
  bVar1 = false;
  if ((*(int *)(param_2 + 0x10) == 0) || (iVar3 = *(int *)(param_1 + 0xc), iVar3 == 0)) {
LAB_2c5f9c92:
    uVar2 = (uint)*(ushort *)(param_2 + 0x34);
    if (uVar2 != 1) {
      switch(*(undefined2 *)(param_1 + 0x34)) {
      case 1:
      case 2:
      case 4:
        return uVar2 != 4 && uVar2 - 1 < 0xd;
      case 3:
        return uVar2 == 4;
      case 7:
        bVar1 = true;
        break;
      case 8:
      case 9:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
        return uVar2 - 0xe < 10;
      }
    }
  }
  else {
    if (param_2 == iVar3) {
      return false;
    }
    do {
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) goto LAB_2c5f9c92;
    } while (param_2 != iVar3);
  }
  return bVar1;
}

