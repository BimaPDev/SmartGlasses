/* FUN_10022de4 @ 0x10022de4 */

void FUN_10022de4(byte *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pbVar2 = DAT_10023004;
  iVar5 = *DAT_10023008;
  FUN_1011ea48(DAT_10023004,0,0x55a,0);
  if (param_2 != 0) goto LAB_10022e1c;
LAB_10022e08:
  do {
    uVar3 = 0xffffffff;
    while( true ) {
      if (*DAT_10023008 == iVar5) {
        return;
      }
      FUN_1013cdc0(uVar3);
LAB_10022e1c:
      uVar6 = (uint)*param_1;
      *pbVar2 = *param_1;
      if ((param_2 < (int)(uVar6 + 1)) || (0x40 < uVar6)) break;
      FUN_1013d03e(pbVar2 + 1,param_1 + 1,uVar6,0x559);
      if (param_2 < (int)(uVar6 + 2)) break;
      iVar7 = uVar6 + 3;
      pbVar2[0x41] = param_1[uVar6 + 1];
      if ((param_2 < iVar7) || (bVar1 = param_1[uVar6 + 2], pbVar2[0x42] = bVar1, 5 < bVar1)) break;
      pbVar4 = pbVar2;
      for (iVar9 = 0; iVar8 = iVar7 + 1, iVar9 < (int)(uint)pbVar2[0x42]; iVar9 = iVar9 + 1) {
        if (param_2 < iVar8) goto LAB_10022e08;
        bVar1 = param_1[iVar7];
        pbVar4[0x43] = bVar1;
        if ((param_2 < (int)((uint)bVar1 + iVar8)) || (0x40 < bVar1)) goto LAB_10022e08;
        FUN_1011ea40(pbVar4 + 0x44,param_1 + iVar8);
        iVar7 = (uint)pbVar4[0x43] + iVar8;
        pbVar4 = pbVar4 + 0x41;
      }
      if ((param_2 < iVar8) || (bVar1 = param_1[iVar7], pbVar2[0x188] = bVar1, 5 < bVar1)) break;
      pbVar4 = DAT_10023004;
      for (iVar7 = 0; iVar9 = iVar8 + 1, iVar7 < (int)(uint)pbVar2[0x188]; iVar7 = iVar7 + 1) {
        if (param_2 < iVar9) goto LAB_10022e08;
        bVar1 = param_1[iVar8];
        pbVar4[0x189] = bVar1;
        if ((param_2 < (int)((uint)bVar1 + iVar9)) || (0x40 < bVar1)) goto LAB_10022e08;
        FUN_1011ea40(pbVar4 + 0x18a,param_1 + iVar9);
        iVar8 = (uint)pbVar4[0x189] + iVar9;
        pbVar4 = pbVar4 + 0x41;
      }
      if ((param_2 < iVar9) || (bVar1 = param_1[iVar8], pbVar2[0x2ce] = bVar1, 5 < bVar1)) break;
      pbVar4 = DAT_10023004;
      for (iVar7 = 0; iVar8 = iVar9 + 1, iVar7 < (int)(uint)pbVar2[0x2ce]; iVar7 = iVar7 + 1) {
        if (param_2 < iVar8) goto LAB_10022e08;
        bVar1 = param_1[iVar9];
        pbVar4[0x2cf] = bVar1;
        if ((param_2 < (int)((uint)bVar1 + iVar8)) || (0x40 < bVar1)) goto LAB_10022e08;
        FUN_1011ea40(pbVar4 + 0x2d0,param_1 + iVar8);
        iVar9 = (uint)pbVar4[0x2cf] + iVar8;
        pbVar4 = pbVar4 + 0x41;
      }
      if ((param_2 < iVar8) || (bVar1 = param_1[iVar9], pbVar2[0x414] = bVar1, 5 < bVar1)) break;
      pbVar4 = pbVar2;
      for (iVar7 = 0; iVar7 < (int)(uint)pbVar2[0x414]; iVar7 = iVar7 + 1) {
        iVar9 = iVar8 + 1;
        if (param_2 < iVar9) goto LAB_10022e08;
        bVar1 = param_1[iVar8];
        pbVar4[0x415] = bVar1;
        if ((param_2 < (int)((uint)bVar1 + iVar9)) || (0x40 < bVar1)) goto LAB_10022e08;
        FUN_1011ea40(pbVar4 + 0x416,param_1 + iVar9);
        iVar8 = (uint)pbVar4[0x415] + iVar9;
        pbVar4 = pbVar4 + 0x41;
      }
      iVar7 = FUN_10020860(DAT_1002300c);
      if ((iVar7 - 1U & 0xff) < 0x19) {
        FUN_10022ce0(DAT_10023004);
        iVar7 = FUN_100227b4(DAT_10023004 + 1,DAT_10023004,0x55a);
        if (iVar7 < 0) {
          uVar3 = 4;
        }
        else {
          uVar3 = 8;
        }
      }
      else {
        param_1 = (byte *)(((int)PTR_DAT_10023014 - (int)PTR_DAT_10023010) * 0x20 & 0xff00);
        FUN_100a5b78((uint)param_1 | 0x3200012,PTR_s_appNotifyCfg_setApps_1002301c,
                     PTR_s_appid__d_is_invalid__d_10023018,DAT_1002300c,iVar7);
        uVar3 = 4;
      }
    }
  } while( true );
}

