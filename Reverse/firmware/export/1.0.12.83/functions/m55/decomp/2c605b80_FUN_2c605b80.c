/* FUN_2c605b80 @ 0x2c605b80 */

void FUN_2c605b80(int param_1,undefined4 param_2)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 == 0) {
    FUN_2c604a50();
    iVar5 = *(int *)(param_1 + 8);
joined_r0x2c605c68:
    if (iVar5 == 0) goto LAB_2c605bce;
  }
  else {
    bVar1 = *(byte *)(iVar5 + 0x18);
    if ((bVar1 & 0x30) == 0) {
      sVar2 = *(short *)(iVar5 + 0x12);
      iVar4 = FUN_2c604a50();
      iVar5 = (int)-sVar2;
      if ((iVar4 << 0x10 < 0) && (0 < iVar5)) {
        if (-iVar4 <= iVar5) {
          iVar5 = -iVar4;
        }
        FUN_2c6047f8(param_1,(bVar1 & 0x3f) >> 4,(int)(short)iVar5,param_2);
      }
      iVar5 = *(int *)(param_1 + 8);
      goto joined_r0x2c605c68;
    }
  }
  if ((*(byte *)(iVar5 + 0x18) & 0xc) != 0) {
    return;
  }
LAB_2c605bce:
  cVar3 = FUN_2c6033b4(param_1,0,0x16);
  if (cVar3 == '\x01') {
    iVar5 = FUN_2c60460c(param_1);
  }
  else {
    iVar5 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      iVar5 = (int)-*(short *)(*(int *)(param_1 + 8) + 0x10);
    }
  }
  cVar3 = FUN_2c6033b4(param_1,0,0x16);
  if (cVar3 == '\x01') {
    if (*(int *)(param_1 + 8) == 0) {
      FUN_2c6033b4(param_1,0,0x16);
      return;
    }
    iVar4 = (int)*(short *)(*(int *)(param_1 + 8) + 0x10);
  }
  else {
    iVar4 = FUN_2c6046d8(param_1);
  }
  cVar3 = FUN_2c6033b4(param_1,0,0x16);
  if (cVar3 == '\x01') {
    if ((iVar5 << 0x10 < 0) && (0 < iVar4)) {
      FUN_2c6047f8(param_1,iVar5,0,param_2);
      return;
    }
  }
  else if ((iVar4 << 0x10 < 0) && (0 < iVar5)) {
    if (-iVar4 <= iVar5) {
      iVar5 = -iVar4;
    }
    FUN_2c6047f8(param_1,(int)(short)iVar5,0,param_2);
    return;
  }
  return;
}

