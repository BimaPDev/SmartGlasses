/* FUN_1011b5f8 @ 0x1011b5f8 */

int FUN_1011b5f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return -0x58;
  }
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0x1c) << 0x1c < 0) {
    return -0x10;
  }
  switch(param_2) {
  case 0:
    if (*(char *)(*(int *)(param_1 + 0x1c) + 0x24) == '\0') {
      return -0x78;
    }
    uVar3 = 1;
    break;
  case 1:
    if (*(char *)(*(int *)(param_1 + 0x1c) + 0x24) == '\x01') {
      return -0x78;
    }
    uVar3 = 4;
    break;
  case 2:
    cVar1 = *(char *)(*(int *)(param_1 + 0x1c) + 0x24);
    if (cVar1 == '\x02') {
      return -0x78;
    }
    if (cVar1 == '\x03') {
      return -0x86;
    }
    uVar3 = 0;
    break;
  case 3:
    if (*(char *)(*(int *)(param_1 + 0x1c) + 0x24) == '\x03') {
      return -0x78;
    }
    uVar3 = 2;
    break;
  default:
    return -0x86;
  }
  iVar2 = (**(code **)(param_1 + 0x18))(param_1,uVar3,param_3,*(code **)(param_1 + 0x18),param_4);
  if (-1 < iVar2) {
    iVar2 = 0;
    *(char *)(*(int *)(param_1 + 0x1c) + 0x24) = (char)param_2;
  }
  return iVar2;
}

