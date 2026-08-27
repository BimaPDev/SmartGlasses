/* FUN_2c00f110 @ 0x2c00f110 */

void FUN_2c00f110(uint param_1,int param_2,int param_3,int param_4,short param_5)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  ushort local_2e;
  int local_2c;
  
  puVar6 = DAT_2c00f400;
  local_2c = *DAT_2c00f3f8;
  uVar3 = (uint)*DAT_2c00f3fc;
  if (uVar3 - 1 < 2) {
    if (((param_1 == 1) || (param_1 == 4)) || ((6 < param_1 && (param_1 != 10)))) goto LAB_2c00f1e0;
  }
  else if ((uVar3 == 3 || uVar3 == 0) && (param_1 == 10)) goto LAB_2c00f1e0;
  uVar3 = param_1 - 7 & 0xff;
  if (uVar3 < 2) {
    iVar5 = param_1 + 8;
    if (param_1 == 7) {
      FUN_2c008e4c(0x44,&local_2e);
      if (param_5 == 0) {
        local_2e = local_2e & ~puVar6[0x43];
      }
      else {
        local_2e = puVar6[0x43] | local_2e;
      }
      FUN_2c008f74(0x44);
    }
    else {
      FUN_2c008e4c(0xf,&local_2e);
      if (param_5 == 0) {
        local_2e = local_2e & ~puVar6[0x4c];
      }
      else {
        local_2e = puVar6[0x4c] | local_2e;
      }
      FUN_2c008f74(0xf);
    }
    FUN_2c008e4c(iVar5,&local_2e);
LAB_2c00f23a:
    if (param_2 == 0) {
      local_2e = local_2e & ~puVar6[param_1 * 9];
    }
    else {
      local_2e = puVar6[param_1 * 9] | local_2e;
    }
    iVar4 = param_1 * 8;
    if (param_3 == 0) {
      local_2e = local_2e & ~puVar6[param_1 * 9 + 1];
      goto LAB_2c00f1a6;
    }
    local_2e = local_2e | puVar6[param_1 * 9 + 1];
    puVar2 = puVar6 + param_1 * 9;
    if (param_4 == 0) goto LAB_2c00f270;
LAB_2c00f1b2:
    local_2e = local_2e & ~puVar2[2];
  }
  else {
    if (param_1 == 9) {
      iVar5 = 0x43;
LAB_2c00f226:
      FUN_2c008e4c(iVar5,&local_2e);
      puVar6 = DAT_2c00f400;
      if (1 < param_1) goto LAB_2c00f23a;
      iVar4 = param_1 << 3;
      goto LAB_2c00f1a6;
    }
    if (param_1 == 10) {
      iVar5 = 0x115;
      FUN_2c008e4c(0x116,&local_2e);
      puVar6 = DAT_2c00f400;
      if (param_2 == 0) {
        local_2e = local_2e & ~DAT_2c00f400[0x5a];
      }
      else {
        local_2e = DAT_2c00f400[0x5a] | local_2e;
      }
      if (param_3 == 0) {
        local_2e = local_2e & ~DAT_2c00f400[0x5b];
      }
      else {
        local_2e = local_2e | DAT_2c00f400[0x5b];
      }
      FUN_2c008f74(0x116);
    }
    else {
      iVar5 = param_1 + 7;
      if (param_1 == 0) {
        FUN_2c008e4c(3,&local_2e);
        if (param_2 == 0) {
          local_2e = local_2e & ~*puVar6;
          uVar1 = puVar6[1];
          if (param_3 != 0) goto LAB_2c00f18c;
LAB_2c00f21e:
          local_2e = local_2e & ~uVar1;
        }
        else {
          local_2e = *puVar6 | local_2e;
          uVar1 = puVar6[1];
          if (param_3 == 0) goto LAB_2c00f21e;
LAB_2c00f18c:
          local_2e = local_2e | uVar1;
        }
        FUN_2c008f74(3);
        FUN_2c008e4c(7,&local_2e);
        iVar4 = 0;
        goto LAB_2c00f1a6;
      }
      if (param_1 != 1) goto LAB_2c00f226;
      FUN_2c008e4c(0x15,&local_2e);
      if (param_2 == 0) {
        local_2e = local_2e & ~puVar6[9];
      }
      else {
        local_2e = puVar6[9] | local_2e;
      }
      if (param_3 == 0) {
        local_2e = local_2e & ~puVar6[10];
      }
      else {
        local_2e = local_2e | puVar6[10];
      }
      FUN_2c008f74(0x15);
    }
    FUN_2c008e4c(iVar5,&local_2e);
    iVar4 = param_1 << 3;
LAB_2c00f1a6:
    puVar2 = puVar6 + iVar4 + param_1;
    if (param_4 != 0) goto LAB_2c00f1b2;
LAB_2c00f270:
    local_2e = local_2e & ~puVar2[3] | puVar2[2];
  }
  if (1 < uVar3) {
    if (param_5 == 0) {
      local_2e = local_2e & ~puVar6[iVar4 + param_1 + 4];
    }
    else {
      local_2e = local_2e | puVar6[iVar4 + param_1 + 4];
    }
  }
  FUN_2c008f74(iVar5);
LAB_2c00f1e0:
  if (*DAT_2c00f3f8 == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8();
}

