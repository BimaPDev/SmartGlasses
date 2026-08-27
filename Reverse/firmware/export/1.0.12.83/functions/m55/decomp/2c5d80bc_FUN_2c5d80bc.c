/* FUN_2c5d80bc @ 0x2c5d80bc */

void FUN_2c5d80bc(undefined4 param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  short sVar5;
  
  iVar2 = FUN_2c602400();
  iVar3 = FUN_2c621084(param_1);
  if ((iVar3 != 0) && (iVar2 != 0)) {
    puVar4 = (uint *)FUN_2c62107c();
    if (*puVar4 < 0x65) {
      sVar5 = (short)*puVar4;
      if (*(short *)(iVar2 + 0x2e) != sVar5) {
        sVar1 = *(short *)(iVar2 + 0x32);
        if (sVar5 <= *(short *)(iVar2 + 0x32)) {
          sVar1 = sVar5;
        }
        sVar5 = *(short *)(iVar2 + 0x30);
        if (*(short *)(iVar2 + 0x30) < sVar1) {
          sVar5 = sVar1;
        }
        if (*(short *)(iVar2 + 0x2e) != sVar5) {
          *(short *)(iVar2 + 0x2e) = sVar5;
          FUN_2c636890();
          return;
        }
      }
      return;
    }
  }
  return;
}

