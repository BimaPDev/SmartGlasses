/* FUN_2c61b6d8 @ 0x2c61b6d8 */

undefined4 FUN_2c61b6d8(int param_1)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  
  bVar6 = *(byte *)(param_1 + 0x3c) & 3;
  if (bVar6 == 1) {
    FUN_2c6070bc(param_1,0x27d1);
    FUN_2c60710c(param_1,0x27d1);
  }
  else if (bVar6 == 2) {
    sVar1 = FUN_2c6033b4(param_1,0,1);
    if (sVar1 == 0x27d1) {
      FUN_2c6070bc(param_1,100);
    }
    FUN_2c60710c(param_1,0x27d1);
  }
  else if ((*(byte *)(param_1 + 0x3c) & 3) == 0) {
    sVar1 = FUN_2c6033b4(param_1,bVar6,1);
    if (sVar1 == 0x27d1) {
      FUN_2c6070bc(param_1,100);
    }
    sVar1 = FUN_2c6033b4(param_1,0,4);
    if (sVar1 == 0x27d1) {
      uVar3 = FUN_2c6033b4(param_1,0,1);
      uVar7 = (uint)(short)uVar3;
      if (((uVar3 & 0x6000) == 0x2000) && ((int)(uVar7 & 0xffff9fff) < 0x7d1)) {
        uVar7 = 100;
      }
      uVar5 = FUN_2c61a930(param_1,uVar7);
      FUN_2c60715c(param_1,uVar5);
    }
  }
  *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 8;
  FUN_2c607df0(param_1);
  sVar1 = FUN_2c6033b4(param_1,0,1);
  sVar2 = FUN_2c6033b4(param_1,0,4);
  if ((sVar1 != 0x27d1) && (sVar2 != 0x27d1)) {
    return 0;
  }
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 1;
  iVar4 = FUN_2c604178(param_1);
  *(byte *)(iVar4 + 0x22) = *(byte *)(iVar4 + 0x22) | 2;
  iVar4 = FUN_2c604188();
  if (*(int *)(iVar4 + 4) != 0) {
    FUN_2c62be4c();
    return 1;
  }
  return 1;
}

