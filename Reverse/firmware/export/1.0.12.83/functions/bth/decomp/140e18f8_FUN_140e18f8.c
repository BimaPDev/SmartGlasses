/* FUN_140e18f8 @ 0x140e18f8 */

byte * FUN_140e18f8(int param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  bool bVar8;
  
  uVar4 = (uint)*param_2;
  bVar8 = uVar4 != 0x5e;
  if (bVar8) {
    pbVar1 = param_2 + 1;
  }
  else {
    pbVar1 = param_2 + 2;
    uVar4 = (uint)param_2[1];
  }
  bVar8 = !bVar8;
  iVar3 = param_1 + -1;
  do {
    iVar3 = iVar3 + 1;
    *(bool *)iVar3 = bVar8;
  } while (iVar3 != param_1 + 0xff);
  if (uVar4 == 0) {
    pbVar2 = pbVar1 + -1;
  }
  else {
    bVar8 = !bVar8;
LAB_140e1926:
    do {
      uVar5 = uVar4;
      *(bool *)(param_1 + uVar5) = bVar8;
      pbVar6 = pbVar1;
      while( true ) {
        pbVar1 = pbVar6 + 1;
        uVar4 = (uint)*pbVar6;
        if (uVar4 != 0x2d) break;
        uVar7 = (uint)pbVar6[1];
        if ((uVar7 == 0x5d) || ((int)uVar7 < (int)uVar5)) goto LAB_140e1926;
        pbVar6 = pbVar6 + 2;
        uVar4 = uVar5;
        do {
          uVar4 = uVar4 + 1;
          *(bool *)(param_1 + uVar4) = bVar8;
        } while ((int)uVar4 < (int)uVar7);
        iVar3 = (uVar7 - uVar5) + -1;
        if ((int)uVar7 <= (int)uVar5) {
          iVar3 = 0;
        }
        uVar5 = uVar5 + 1 + iVar3;
      }
      pbVar2 = pbVar1;
    } while ((uVar4 != 0x5d) && (pbVar2 = pbVar6, uVar4 != 0));
  }
  return pbVar2;
}

