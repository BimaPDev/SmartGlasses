/* FUN_2c48d6a4 @ 0x2c48d6a4 */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_2c48d6a4(byte *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  
  bVar4 = *param_1;
  if (bVar4 == 0) {
    puVar2 = (undefined1 *)FUN_2c48d594(param_2,3);
    if (puVar2 == (undefined1 *)0x0) {
      return 0;
    }
    pbVar6 = (byte *)0x2;
    pbVar3 = (byte *)0x1;
    pbVar5 = (byte *)0x0;
  }
  else {
    iVar7 = 0;
    pbVar5 = param_1;
    do {
      while (pbVar6 = pbVar5, 0x22 < bVar4) {
        if (bVar4 != 0x5c) goto LAB_2c48d6c6;
LAB_2c48d6e4:
        iVar7 = iVar7 + 1;
        bVar4 = pbVar6[1];
        pbVar5 = pbVar6 + 1;
        if (bVar4 == 0) goto LAB_2c48d6ec;
      }
      if ((7 < bVar4) && ((1 << (uint)(byte)(bVar4 - 8) & DAT_2c48d7f8) != 0)) goto LAB_2c48d6e4;
      if (bVar4 < 0x20) {
        iVar7 = iVar7 + 5;
      }
LAB_2c48d6c6:
      bVar4 = pbVar6[1];
      pbVar5 = pbVar6 + 1;
    } while (bVar4 != 0);
LAB_2c48d6ec:
    pbVar5 = pbVar6 + (iVar7 - (int)param_1) + 1;
    puVar2 = (undefined1 *)FUN_2c48d594(param_2,pbVar5 + 3);
    if (puVar2 == (undefined1 *)0x0) {
      return 0;
    }
    if (iVar7 != 0) {
      pbVar6 = puVar2 + 1;
      *puVar2 = 0x22;
      uVar1 = DAT_2c48d7fc;
      bVar4 = *param_1;
      do {
        while( true ) {
          if (bVar4 == 0) {
            puVar2[(int)(pbVar5 + 1)] = 0x22;
            puVar2[(int)(pbVar5 + 2)] = 0;
            return 1;
          }
          bVar8 = 0x21 < bVar4;
          if (bVar4 != 0x22) {
            bVar8 = 0x1e < bVar4;
          }
          if ((!bVar8 || (bVar4 == 0x22 || bVar4 == 0x1f)) || (bVar4 == 0x5c)) break;
          *pbVar6 = bVar4;
          pbVar3 = pbVar6;
LAB_2c48d71e:
          param_1 = param_1 + 1;
          bVar4 = *param_1;
          pbVar6 = pbVar3 + 1;
        }
        pbVar3 = pbVar6 + 1;
        *pbVar6 = 0x5c;
        bVar4 = *param_1;
        if (bVar4 < 0x23) {
          switch(bVar4) {
          case 8:
            pbVar6[1] = 0x62;
            break;
          case 9:
            pbVar6[1] = 0x74;
            break;
          case 10:
            pbVar6[1] = 0x6e;
            break;
          default:
            goto switchD_2c48d746_caseD_b;
          case 0xc:
            pbVar6[1] = 0x66;
            break;
          case 0xd:
            pbVar6[1] = 0x72;
            break;
          case 0x22:
            pbVar6[1] = 0x22;
          }
          goto LAB_2c48d71e;
        }
        if (bVar4 != 0x5c) {
switchD_2c48d746_caseD_b:
          FUN_2c66b4b8(pbVar3,uVar1);
          pbVar3 = pbVar6 + 5;
          goto LAB_2c48d71e;
        }
        pbVar6[1] = 0x5c;
        pbVar6 = pbVar6 + 2;
        param_1 = param_1 + 1;
        bVar4 = *param_1;
      } while( true );
    }
    pbVar3 = pbVar6 + (2 - (int)param_1);
    pbVar6 = pbVar6 + (3 - (int)param_1);
  }
  *puVar2 = 0x22;
  FUN_2c674668(puVar2 + 1,param_1,pbVar5);
  puVar2[(int)pbVar3] = 0x22;
  puVar2[(int)pbVar6] = 0;
  return 1;
}

