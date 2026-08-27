/* FUN_2c00eb40 @ 0x2c00eb40 */

int FUN_2c00eb40(void)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  undefined4 extraout_r2;
  undefined4 uVar7;
  byte bVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  undefined4 unaff_lr;
  ushort local_2c;
  ushort local_2a;
  ushort local_28;
  ushort local_26;
  int local_24;
  
  local_24 = *DAT_2c00eeac;
  uVar5 = FUN_2c01384c();
  puVar3 = DAT_2c00eeb0;
  if (uVar5 < 3) {
    uVar9 = 0;
    uVar5 = 0;
    iVar11 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iVar11 = getBasePriority();
    }
    uVar7 = extraout_r2;
    if (iVar11 != 0x40) {
      uVar7 = 0x2c00ebf6;
      *DAT_2c00eeb0 = 0x2c00ebf6;
      puVar3[1] = unaff_lr;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x40);
    }
    FUN_2c008e4c(0x20aa,DAT_2c00eeb4,uVar7,0x40);
    iVar12 = 0xc;
    FUN_2c008e4c(0x20ac,DAT_2c00eeb8);
    pcVar4 = DAT_2c00eed0;
    FUN_2c008f74(0x20ad,0xd580);
    FUN_2c008f74(0x2338,0x210);
    FUN_2c013884(10);
    FUN_2c008f74(0x2338,0x310);
    FUN_2c013884(0x3c);
    while( true ) {
      iVar6 = FUN_2c00d60c();
      if (iVar6 != 0) break;
      if (iVar12 == 1) {
        if (uVar5 == 8) {
          if (uVar9 != 1) {
LAB_2c00ece6:
            if (uVar9 == 0xf) {
              uVar7 = 0xd5d0;
            }
            else {
              uVar7 = 0xd5f0;
            }
            FUN_2c008f74(0x20ad,uVar7);
            cVar1 = *pcVar4;
            goto joined_r0x2c00ed00;
          }
          FUN_2c008f74(0x20ad,0xd5f0);
          if (*pcVar4 == '\0') {
            FUN_2c008f74(0x20a6,0x195c);
            FUN_2c013884(10);
            *pcVar4 = '\x01';
          }
          FUN_2c008f74(0x2343,0x1000);
          FUN_2c008f74(0x2343,0x3000);
          FUN_2c008f74(0x2340,0x3988);
          FUN_2c013884(0x3c);
          iVar12 = FUN_2c00d60c();
          if (iVar12 == 0) goto LAB_2c00efa8;
        }
        else {
          if (uVar9 != 1) goto LAB_2c00ece6;
LAB_2c00efa8:
          FUN_2c008f74(0x20ac,0x7d65);
          FUN_2c008f74(0x20ad,0xd5f0);
          cVar1 = *pcVar4;
joined_r0x2c00ed00:
          if (cVar1 == '\0') {
            FUN_2c008f74(0x20a6,0x195c);
            FUN_2c013884(10);
            *pcVar4 = '\x01';
          }
          FUN_2c008f74(0x2343,0x1000);
          FUN_2c008f74(0x2343,0x3000);
          FUN_2c008f74(0x2340,0x3988);
          FUN_2c013884(0x3c);
        }
        FUN_2c008f74(0x2340,0x3908);
        FUN_2c008f74(0x2343,0x2000);
        FUN_2c008e4c(0x20ac,&local_2c);
        local_2c = local_2c & 0xfffb;
        FUN_2c008f74(0x20ac);
        FUN_2c008e4c(0x20a9,&local_2c);
        local_2c = local_2c | 0x80;
        FUN_2c008f74(0x20a9);
        FUN_2c013884(0x3c);
        FUN_2c008f74(0x20a6,0x5c);
        FUN_2c008f74(0x2338,0x10);
        FUN_2c008e4c(0x20a9,&local_2c);
        local_2c = local_2c & 0xff7f;
        FUN_2c008f74(0x20a9);
        FUN_2c008e4c(0x20ac,&local_2c);
        local_2c = local_2c | 4;
        FUN_2c008f74(0x20ac);
        iVar6 = FUN_2c00d60c();
        goto LAB_2c00ede2;
      }
      FUN_2c008e4c(0x2073,&local_2a);
      FUN_2c008e4c(0x20ad,&local_28);
      uVar9 = local_2a & 0xf;
      uVar5 = (local_28 & 0xff) >> 4;
      if ((-1 < (int)((uint)local_2a << 0x1b)) ||
         ((((uVar9 == 1 && (uVar5 == 0xf)) || (uVar5 == 8 && uVar9 == 0xf)) || (uVar5 == 0xd)))) {
        if (*pcVar4 != '\0') {
          FUN_2c008f74(0x2340,0x3908);
          FUN_2c008f74(0x2343,0x2000);
          FUN_2c008f74(0x20a6,0x5c);
          *pcVar4 = '\0';
        }
        FUN_2c008f74(0x20ad,0xd580);
        FUN_2c008f74(0x2338,0x210);
        FUN_2c013884(10);
        FUN_2c008f74(0x2338,0x310);
        FUN_2c013884(0x3c);
      }
      else {
        if (uVar9 == 1) {
          FUN_2c008f74(0x20ad,0xd5f0);
LAB_2c00ef12:
          cVar1 = *pcVar4;
        }
        else {
          if ((uVar5 == 0xf) && (uVar9 == 0xf)) {
            FUN_2c008f74(0x20ad,0xd5d0);
            goto LAB_2c00ef12;
          }
          FUN_2c008f74(0x20ad,0xd580);
          cVar1 = *pcVar4;
        }
        if (cVar1 == '\0') {
          FUN_2c008f74(0x20a6,0x195c);
          FUN_2c013884(10);
          *pcVar4 = '\x01';
        }
        FUN_2c008f74(0x2343,0x1000);
        FUN_2c008f74(0x2343,0x3000);
        FUN_2c008f74(0x2340,0x3988);
        FUN_2c013884(0x3c);
      }
      iVar12 = iVar12 + -1;
    }
    if (*pcVar4 != '\0') {
      FUN_2c008f74(0x2340,0x3908);
      FUN_2c008f74(0x2343,0x2000);
      FUN_2c008f74(0x20a6,0x5c);
      *pcVar4 = '\0';
    }
    FUN_2c008f74(0x2338,0x10);
LAB_2c00ede2:
    FUN_2c008e4c(0x20ad,&local_26);
    pbVar10 = DAT_2c00eebc;
    local_26 = local_26 & 0xcfff | 0x1000;
    FUN_2c008f74(0x20ad);
    FUN_2c008f74(0x20aa,*DAT_2c00eeb4);
    FUN_2c008f74(0x20ac,*DAT_2c00eeb8);
    FUN_2c008e4c(0x20ad,&local_28);
    *pbVar10 = (byte)local_28 >> 4;
    if (iVar11 == 0) {
      *DAT_2c00f108 = 0xffffffff;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(iVar11);
    }
    goto LAB_2c00ee42;
  }
  iVar11 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar11 = getBasePriority();
  }
  uVar7 = extraout_r2;
  if (iVar11 != 0x40) {
    uVar7 = 0x2c00eb66;
    *DAT_2c00eeb0 = 0x2c00eb66;
    puVar3[1] = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  FUN_2c008f74(0x20ad,0xd580,uVar7,0x40);
  FUN_2c008f74(0x2338,0x210);
  FUN_2c013884(10);
  FUN_2c008f74(0x2338,0x310);
  FUN_2c013884(0x3c);
  iVar6 = FUN_2c00d60c();
  if (iVar6 == 0) {
    iVar12 = 2;
    uVar5 = 8;
    do {
      FUN_2c008e4c(0x2073,&local_26);
      if ((local_26 & 0xf) == 0xf) {
        uVar9 = uVar5 - 4;
        uVar5 = uVar9 & 0xffff;
        uVar9 = uVar9 & 0xf;
LAB_2c00f082:
        FUN_2c008f74(0x20ad,uVar9 << 4 | 0xd500);
        FUN_2c008f74(0x2338,0x210);
        FUN_2c013884(10);
        FUN_2c008f74(0x2338,0x310);
        FUN_2c013884(0x3c);
      }
      else if ((local_26 & 0xe) == 0) {
        uVar5 = uVar5 + 4 & 0xffff;
        if (0xe < uVar5) {
          uVar5 = 0xf;
        }
        uVar9 = uVar5 & 0xfff;
        goto LAB_2c00f082;
      }
      iVar6 = FUN_2c00d60c();
      if ((iVar6 != 0) || (iVar12 == 1)) goto LAB_2c00ebe0;
      iVar12 = 1;
    } while( true );
  }
  bVar8 = 8;
  goto LAB_2c00eff0;
LAB_2c00ebe0:
  bVar8 = (byte)uVar5;
LAB_2c00eff0:
  pbVar10 = DAT_2c00f10c;
  *DAT_2c00f10c = bVar8;
  FUN_2c008f74(0x2338,0x10);
  if (iVar11 == 0) {
    *DAT_2c00f108 = 0xffffffff;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar11);
  }
LAB_2c00ee42:
  if (iVar6 == 0) {
    FUN_2c00b820(4,0x104c,DAT_2c00f104,DAT_2c00f100,DAT_2c00f0fc,DAT_2c00eec0,*pbVar10);
  }
  else {
    FUN_2c00b820(4,0x104a,DAT_2c00eecc,DAT_2c00eec8,DAT_2c00eec4,DAT_2c00eec0,*pbVar10);
  }
  if (*DAT_2c00eeac == local_24) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8();
}

