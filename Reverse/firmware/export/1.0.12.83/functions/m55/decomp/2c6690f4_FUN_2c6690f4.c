/* FUN_2c6690f4 @ 0x2c6690f4 */

ulonglong FUN_2c6690f4(uint param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar1 = param_2 - 1;
  switch(param_2) {
  case 1:
    if (param_1 < 0x100) {
      uVar1 = *(byte *)(param_1 + DAT_2c670610) & 7;
    }
    else {
      uVar1 = 0;
    }
    return (ulonglong)uVar1;
  case 2:
    if (param_1 < 0x100) {
      uVar1 = *(byte *)(param_1 + DAT_2c67062c) & 3;
    }
    else {
      uVar1 = 0;
    }
    return (ulonglong)uVar1;
  case 3:
    break;
  case 4:
    if (param_1 < 0x100) {
      uVar1 = *(byte *)(param_1 + DAT_2c670674) & 0x20;
    }
    else {
      uVar1 = 0;
    }
    return (ulonglong)uVar1;
  case 5:
    return CONCAT44(uVar1,(uint)(param_1 - 0x30 < 10));
  case 6:
    uVar3 = FUN_2c669198();
    uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uVar1 = 0;
    if ((int)uVar3 != 0) {
      uVar3 = FUN_2c6691d0(param_1,0);
      uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
      uVar1 = (uint)((int)uVar3 == 0);
    }
    return CONCAT44(uVar2,uVar1);
  case 7:
    if (0xff < param_1) {
      return 0;
    }
    return (ulonglong)((*(byte *)(param_1 + DAT_2c66918c) & 3) == 2);
  case 8:
    uVar4 = FUN_2c669198(param_1,0);
    return uVar4;
  case 9:
    if (param_1 < 0x100) {
      uVar1 = *(byte *)(param_1 + DAT_2c6691c4) & 0x10;
    }
    else {
      uVar1 = 0;
    }
    return (ulonglong)uVar1;
  case 10:
    uVar4 = FUN_2c6691d0(param_1,0);
    return uVar4;
  case 0xb:
    if (0xff < param_1) {
      return 0;
    }
    return (ulonglong)((*(byte *)(param_1 + DAT_2c669204) & 3) == 1);
  case 0xc:
    if (param_1 - 0x30 < 10) {
      return CONCAT44(uVar1,1);
    }
    return CONCAT44(uVar1,(uint)((param_1 & 0xffffffdf) - 0x41 < 6));
  default:
    return (ulonglong)uVar1 << 0x20;
  }
  if (0xff < param_1) {
    return 0;
  }
  if (*(char *)(param_1 + DAT_2c670658) < '\0') {
    return 1;
  }
  return (ulonglong)(param_1 == 9);
}

