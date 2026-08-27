/* FUN_2c61c18c @ 0x2c61c18c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c61c18c(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar7 = FUN_2c6041d4(param_2);
  piVar4 = _LAB_2c61c1fc;
  piVar3 = _LAB_2c61c1f8;
  FUN_2c607048(param_2,0x2064);
  FUN_2c608c7c(param_2);
  sVar5 = FUN_2c607404(iVar7);
  iVar8 = *piVar3;
  sVar6 = FUN_2c607440(iVar7);
  FUN_2c606f34(param_2,(int)(short)((short)iVar8 * sVar5),(int)(short)((short)*piVar4 * sVar6));
  iVar8 = *piVar3;
  iVar9 = *piVar4;
  bVar2 = *_LAB_2c61c200;
  *(byte *)(param_2 + 0x24) = bVar2;
  if (iVar9 != 0 || iVar8 != 0) {
    return;
  }
  FUN_2c606bc8();
  bVar1 = *(byte *)(*(int *)(iVar7 + 8) + 0x19);
  if ((bVar1 & 0xf) != bVar2) {
    *(byte *)(*(int *)(iVar7 + 8) + 0x19) = bVar1 & 0xf0 | bVar2 & 0xf;
  }
  return;
}

