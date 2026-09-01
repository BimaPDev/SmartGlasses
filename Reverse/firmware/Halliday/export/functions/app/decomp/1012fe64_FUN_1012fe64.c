/* FUN_1012fe64 @ 0x1012fe64 */

uint FUN_1012fe64(int param_1,int param_2,undefined4 param_3,uint param_4,byte param_5,uint param_6)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  byte abStack_68 [32];
  int local_48 [9];
  
  uVar12 = (uint)param_5;
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
LAB_1012ff76:
    return 0;
  }
  switch(param_3) {
  case 6:
    piVar2 = (int *)FUN_1012d6fa();
    piVar10 = local_48;
    piVar16 = piVar2 + 8;
    do {
      iVar3 = *piVar2;
      iVar5 = piVar2[1];
      piVar2 = piVar2 + 2;
      *piVar10 = iVar3;
      piVar10[1] = iVar5;
      piVar10 = piVar10 + 2;
    } while (piVar2 != piVar16);
    uVar13 = 0;
    uVar14 = local_48[1] - local_48[0] & 0xffff;
    uVar15 = 0;
LAB_1012fed2:
    if (((uVar15 < uVar14) && (uVar13 < 0x12)) && (uVar15 + 0x17 <= uVar14)) {
      FUN_1012d284(local_48,abStack_68);
      iVar3 = 0;
      pbVar7 = abStack_68;
      do {
        if ((((*pbVar7 == -0x50) && ((cVar1 = pbVar7[1], cVar1 == -0x70 || (cVar1 == -0x74)))) &&
            (pbVar7[2] == -0x80)) && ((pbVar7[3] == '\x03' && (pbVar7[4] == '\0')))) {
          uVar4 = 5;
          uVar9 = 0;
          pbVar7 = abStack_68 + iVar3 + 5;
          goto LAB_1012ff1e;
        }
        iVar3 = iVar3 + 1;
        pbVar7 = pbVar7 + 1;
      } while (iVar3 != 0x17);
      uVar9 = 0x17;
      goto LAB_1012ff40;
    }
    iVar3 = FUN_1012d608(param_2);
    iVar3 = iVar3 / ((int)((param_6 & 0xff) * uVar12) >> 3) + uVar13 * 0x400;
    break;
  default:
    goto LAB_1012ff76;
  case 10:
    iVar3 = FUN_1012d608();
    iVar5 = FUN_1012d608(param_2);
    iVar3 = iVar5 / ((int)(uVar12 * (param_6 & 0xff)) >> 3) + (iVar3 / 0x77) * 0x80;
    break;
  case 0xb:
    iVar5 = FUN_1012d608();
    iVar3 = FUN_1012d608(param_2);
    iVar6 = 0x78;
    iVar3 = iVar3 / ((int)((param_6 & 0xff) * uVar12) >> 3);
    goto LAB_10130056;
  case 0xf:
    iVar5 = FUN_1012d608();
    iVar3 = FUN_1012d608(param_2);
    iVar6 = 0x3c;
    iVar3 = iVar3 / ((int)((param_6 & 0xff) * uVar12) >> 3);
LAB_10130056:
    iVar3 = iVar6 * (iVar5 / 0x44) + iVar3;
    break;
  case 0x11:
    iVar3 = FUN_1012d608();
    iVar5 = FUN_1012d608(param_2);
    iVar3 = (iVar5 + iVar3) / ((int)((param_6 & 0xff) * uVar12) >> 3);
    break;
  case 0x12:
    piVar2 = (int *)FUN_1012d6fa();
    piVar10 = local_48;
    piVar16 = piVar2 + 8;
    do {
      iVar3 = *piVar2;
      iVar5 = piVar2[1];
      piVar2 = piVar2 + 2;
      *piVar10 = iVar3;
      piVar10[1] = iVar5;
      piVar10 = piVar10 + 2;
    } while (piVar2 != piVar16);
    uVar12 = 0;
    uVar13 = local_48[1] - local_48[0] & 0xffff;
    uVar14 = 0;
    do {
      if (uVar13 <= uVar14) {
        return uVar12;
      }
      if (uVar13 < uVar14 + 0x1b) {
        return uVar12;
      }
      FUN_1012d284(local_48,abStack_68);
      iVar3 = 0;
      pbVar7 = abStack_68;
      do {
        pbVar8 = pbVar7 + 1;
        if (((*pbVar7 == 0xaa) && (-1 < (char)*pbVar8)) && ((*pbVar8 & 0x18) != 0x18)) {
          iVar3 = (byte)(*pbVar8 * '@' + (abStack_68[iVar3 + 2] >> 2)) + 4;
          uVar12 = uVar12 + 1 & 0xffff;
          goto LAB_10130016;
        }
        iVar3 = iVar3 + 1;
        pbVar7 = pbVar8;
      } while (iVar3 != 0x1b);
      iVar3 = 0x1b;
LAB_10130016:
      FUN_1012d466(local_48,iVar3);
      uVar14 = uVar14 + iVar3 & 0xffff;
    } while( true );
  }
  return iVar3 / (int)(param_4 & 0xffff);
  while (uVar9 = uVar9 + 1, pbVar7 = pbVar7 + 1, uVar9 != 4) {
LAB_1012ff1e:
    uVar11 = uVar9 & 0xff;
    uVar4 = uVar4 + *pbVar7 & 0xffff;
    if (*pbVar7 != 0xff) goto LAB_1012ff34;
  }
  uVar11 = 4;
LAB_1012ff34:
  uVar9 = uVar4 + uVar11 & 0xffff;
  uVar13 = uVar13 + 1 & 0xffff;
LAB_1012ff40:
  FUN_1012d466(local_48,uVar9);
  uVar15 = uVar15 + uVar9 & 0xffff;
  goto LAB_1012fed2;
}

