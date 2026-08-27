/* FUN_2c637114 @ 0x2c637114 */

void FUN_2c637114(int param_1,uint param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  if (0x168 < param_2) {
    param_2 = param_2 - 0x168 & 0xffff;
  }
  uVar8 = (uint)*(ushort *)(param_1 + 0x2c);
  sVar1 = *(ushort *)(param_1 + 0x2c) - *(short *)(param_1 + 0x2a);
  sVar3 = (short)param_2;
  sVar2 = sVar3 - *(short *)(param_1 + 0x2a);
  iVar5 = (int)sVar1;
  iVar7 = (int)sVar2;
  if (iVar5 < 0) {
    iVar5 = (int)(short)(sVar1 + 0x168);
  }
  if (iVar7 < 0) {
    iVar7 = (int)(short)(sVar2 + 0x168);
  }
  iVar6 = iVar7 - iVar5;
  if (iVar6 < 0) {
    iVar6 = -iVar6;
  }
  if (iVar6 < 0xb5) {
    if (iVar7 < iVar5) {
      cVar4 = FUN_2c607e50(param_1);
      if ((cVar4 == '\x01') && (uVar8 != param_2)) {
        FUN_2c6365bc(param_1,param_2,uVar8);
        *(short *)(param_1 + 0x2c) = sVar3;
        FUN_2c636890(param_1);
        return;
      }
    }
    else if (((iVar5 < iVar7) && (cVar4 = FUN_2c607e50(param_1), cVar4 == '\x01')) &&
            (uVar8 != param_2)) {
      FUN_2c6365bc(param_1,uVar8,param_2);
    }
    *(short *)(param_1 + 0x2c) = sVar3;
    FUN_2c636890(param_1);
    return;
  }
  FUN_2c607df0(param_1);
  *(short *)(param_1 + 0x2c) = sVar3;
  FUN_2c636890(param_1);
  return;
}

