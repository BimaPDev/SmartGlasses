/* FUN_100548ec @ 0x100548ec */

undefined4 FUN_100548ec(byte *param_1,int param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  byte *pbVar6;
  int iVar7;
  
  if (param_2 != 0) {
    if (param_1 == (byte *)0x0) {
      iVar7 = FUN_1011a520(param_2,3,param_3,param_4,param_4);
      if (iVar7 != 0) {
        FUN_1011e9f0(iVar7,DAT_10054a14);
        return 1;
      }
    }
    else {
      iVar7 = 0;
      pbVar6 = param_1;
LAB_10054908:
      while( true ) {
        pbVar4 = pbVar6 + 1;
        bVar5 = *pbVar6;
        if (bVar5 == 0) break;
        pbVar6 = pbVar4;
        if (0x22 < bVar5) goto LAB_1005497c;
        if ((7 < bVar5) && (param_3 = 1 << (uint)(byte)(bVar5 - 8), (param_3 & DAT_10054a10) != 0))
        goto LAB_10054976;
        if (bVar5 < 0x20) {
          iVar7 = iVar7 + 5;
        }
      }
      pbVar6 = pbVar6 + (iVar7 - (int)param_1);
      puVar2 = (undefined1 *)FUN_1011a520(param_2,pbVar6 + 3,param_3,0,param_4);
      if (puVar2 != (undefined1 *)0x0) {
        pbVar4 = puVar2 + 1;
        *puVar2 = 0x22;
        uVar1 = DAT_10054a18;
        if (iVar7 == 0) {
          FUN_1011ea40(pbVar4,param_1,pbVar6);
          puVar2[(int)(pbVar6 + 1)] = 0x22;
          puVar2[(int)(pbVar6 + 2)] = 0;
        }
        else {
          param_1 = param_1 + -1;
          while( true ) {
            param_1 = param_1 + 1;
            bVar5 = *param_1;
            if (bVar5 == 0) break;
            if (((0x1f < bVar5) && (bVar5 != 0x22)) && (bVar5 != 0x5c)) {
              *pbVar4 = bVar5;
              pbVar3 = pbVar4;
              goto LAB_100549ba;
            }
            pbVar3 = pbVar4 + 1;
            *pbVar4 = 0x5c;
            bVar5 = *param_1;
            if (0xd < bVar5) {
              if ((bVar5 != 0x22) && (bVar5 != 0x5c)) goto switchD_100549d6_caseD_b;
              pbVar4[1] = bVar5;
              goto LAB_100549ba;
            }
            switch(bVar5) {
            case 8:
              bVar5 = 0x62;
              break;
            case 9:
              pbVar4[1] = 0x74;
              goto LAB_100549ba;
            case 10:
              bVar5 = 0x6e;
              break;
            default:
switchD_100549d6_caseD_b:
              FUN_10118a84(pbVar3,uVar1);
              pbVar3 = pbVar4 + 5;
              goto LAB_100549ba;
            case 0xc:
              bVar5 = 0x66;
              break;
            case 0xd:
              bVar5 = 0x72;
            }
            pbVar4[1] = bVar5;
LAB_100549ba:
            pbVar4 = pbVar3 + 1;
          }
          puVar2[(int)(pbVar6 + 1)] = 0x22;
          puVar2[(int)(pbVar6 + 2)] = 0;
        }
        return 1;
      }
    }
  }
  return 0;
LAB_1005497c:
  if (bVar5 == 0x5c) {
LAB_10054976:
    iVar7 = iVar7 + 1;
  }
  goto LAB_10054908;
}

