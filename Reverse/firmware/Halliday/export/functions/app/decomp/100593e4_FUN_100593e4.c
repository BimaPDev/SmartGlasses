/* FUN_100593e4 @ 0x100593e4 */

uint FUN_100593e4(int *param_1,int param_2,byte *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  iVar2 = DAT_10059558;
  *param_1 = 0;
  uVar5 = 0;
LAB_100593fc:
  do {
    while( true ) {
      if (*param_3 == 0) {
        return uVar5;
      }
      bVar6 = *(byte *)((uint)*param_3 + iVar2);
      uVar9 = bVar6 & 8;
      if ((bVar6 & 8) == 0) break;
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    iVar4 = *param_1;
    iVar7 = iVar4 + 1;
    *param_1 = iVar7;
    *(byte **)(param_2 + iVar4 * 4) = param_3;
    if (iVar7 == param_4) {
      return uVar5;
    }
LAB_10059426:
    uVar10 = (uint)*param_3;
    uVar5 = uVar9;
  } while (uVar10 == 0);
  if (uVar9 != 0) {
    if (uVar10 == uVar9) {
      uVar3 = FUN_1011acf2(param_3);
      FUN_1011ea38(param_3,param_3 + 1,uVar3);
      uVar9 = 0;
    }
    else if (uVar10 == 0x5c) {
      uVar5 = (uint)param_3[1];
      if (uVar9 == uVar5) goto LAB_10059536;
      if (uVar5 == 0x30) {
        uVar11 = 0;
        uVar10 = 2;
        do {
          bVar6 = (byte)uVar11;
          uVar5 = (uint)param_3[uVar10];
          uVar8 = uVar10 & 0xff;
          if (7 < (uVar5 - 0x30 & 0xff)) {
            if (uVar8 == 2) goto LAB_100594c4;
            goto LAB_1005949e;
          }
          uVar10 = uVar10 + 1;
          uVar5 = uVar5 - 0x30 | uVar11 << 3;
          uVar11 = uVar5 & 0xff;
          bVar6 = (byte)uVar5;
        } while (uVar10 != 5);
        uVar8 = 5;
      }
      else {
LAB_100594c4:
        if (uVar5 != 0x78) goto LAB_10059522;
        uVar5 = 0;
        iVar4 = 2;
        while( true ) {
          bVar6 = (byte)uVar5;
          uVar10 = (uint)param_3[iVar4];
          if ((uVar10 - 0x30 & 0xff) < 10) {
            bVar6 = (byte)(uVar10 - 0x30) | (byte)(uVar5 << 4);
          }
          else {
            if (uVar10 - 0x61 < 6) {
              cVar1 = -0x57;
            }
            else {
              if (5 < uVar10 - 0x41) {
                if (iVar4 == 2) goto LAB_10059522;
                uVar8 = 3;
                goto LAB_1005949e;
              }
              cVar1 = -0x37;
            }
            bVar6 = param_3[iVar4] + cVar1 | (byte)(uVar5 << 4);
          }
          uVar5 = (uint)bVar6;
          if (iVar4 == 3) break;
          iVar4 = 3;
        }
        uVar8 = 4;
      }
LAB_1005949e:
      iVar4 = FUN_1011acf2(param_3);
      FUN_1011ea38(param_3,param_3 + (uVar8 - 1),(iVar4 + 2) - uVar8);
      *param_3 = bVar6;
      param_3 = param_3 + 1;
    }
    else {
LAB_10059522:
      param_3 = param_3 + 1;
    }
    goto LAB_10059426;
  }
  if (uVar10 != 0x27) {
    if (uVar10 == 0x5c) {
LAB_10059536:
      uVar3 = FUN_1011acf2(param_3);
      FUN_1011ea38(param_3,param_3 + 1,uVar3);
      param_3 = param_3 + 1;
      goto LAB_10059426;
    }
    if (uVar10 != 0x22) {
      if (-1 < (int)((uint)*(byte *)(iVar2 + uVar10) << 0x1c)) goto LAB_10059522;
      goto LAB_100593fc;
    }
  }
  uVar3 = FUN_1011acf2(param_3);
  FUN_1011ea38(param_3,param_3 + 1,uVar3);
  uVar9 = uVar10;
  goto LAB_10059426;
}

