/* FUN_1402ee18 @ 0x1402ee18 */

void FUN_1402ee18(uint param_1,int param_2,int param_3,int param_4,short param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  ushort local_2e;
  int local_2c;
  
  local_2c = *DAT_1402f124;
  uVar4 = (uint)*DAT_1402f128;
  if (uVar4 - 1 < 2) {
    if ((param_1 == 1) || (param_1 == 4)) goto LAB_1402eee8;
    if (param_1 < 7) goto LAB_1402ee48;
    if (param_1 != 10) goto LAB_1402eee8;
LAB_1402ef54:
    uVar4 = 3;
    iVar5 = 0x115;
    FUN_1402e1fc(0x116,&local_2e);
    puVar6 = DAT_1402f12c;
    if (param_2 == 0) {
      local_2e = local_2e & ~DAT_1402f12c[0x5a];
    }
    else {
      local_2e = DAT_1402f12c[0x5a] | local_2e;
    }
    if (param_3 == 0) {
      local_2e = local_2e & ~DAT_1402f12c[0x5b];
    }
    else {
      local_2e = local_2e | DAT_1402f12c[0x5b];
    }
    FUN_1402e37c(0x116);
    FUN_1402e1fc(0x115,&local_2e);
    iVar3 = 0x50;
  }
  else {
    if ((uVar4 == 0) || (uVar4 == 3)) {
      if (param_1 == 10) goto LAB_1402eee8;
LAB_1402ee48:
      uVar4 = param_1 - 7 & 0xff;
      if (1 < uVar4) goto LAB_1402ee50;
LAB_1402ef0a:
      iVar5 = param_1 + 8;
      if (param_1 == 7) {
        FUN_1402e1fc(0x44,&local_2e);
        puVar6 = DAT_1402f12c;
        if (param_5 == 0) {
          local_2e = local_2e & ~DAT_1402f12c[0x43];
        }
        else {
          local_2e = DAT_1402f12c[0x43] | local_2e;
        }
        FUN_1402e37c(0x44);
      }
      else {
        FUN_1402e1fc(0xf,&local_2e);
        puVar6 = DAT_1402f12c;
        if (param_5 == 0) {
          local_2e = local_2e & ~DAT_1402f12c[0x4c];
        }
        else {
          local_2e = DAT_1402f12c[0x4c] | local_2e;
        }
        FUN_1402e37c(0xf);
      }
      FUN_1402e1fc(iVar5,&local_2e);
    }
    else {
      uVar4 = param_1 - 7 & 0xff;
      if (uVar4 < 2) goto LAB_1402ef0a;
LAB_1402ee50:
      if (param_1 != 9) {
        if (param_1 == 10) goto LAB_1402ef54;
        iVar5 = param_1 + 7;
        if (param_1 != 0) {
          if (param_1 == 1) {
            FUN_1402e1fc(0x15,&local_2e);
            puVar6 = DAT_1402f12c;
            if (param_2 == 0) {
              local_2e = local_2e & ~DAT_1402f12c[9];
            }
            else {
              local_2e = DAT_1402f12c[9] | local_2e;
            }
            if (param_3 == 0) {
              local_2e = local_2e & ~DAT_1402f12c[10];
            }
            else {
              local_2e = local_2e | DAT_1402f12c[10];
            }
            FUN_1402e37c(0x15);
            FUN_1402e1fc(8,&local_2e);
            iVar3 = 8;
            goto LAB_1402eeae;
          }
          goto LAB_1402efec;
        }
        FUN_1402e1fc(3,&local_2e);
        puVar6 = DAT_1402f12c;
        if (param_2 == 0) {
          local_2e = local_2e & ~*DAT_1402f12c;
          uVar1 = DAT_1402f12c[1];
          if (param_3 != 0) goto LAB_1402ee92;
LAB_1402efc4:
          local_2e = local_2e & ~uVar1;
        }
        else {
          local_2e = *DAT_1402f12c | local_2e;
          uVar1 = DAT_1402f12c[1];
          if (param_3 == 0) goto LAB_1402efc4;
LAB_1402ee92:
          local_2e = local_2e | uVar1;
        }
        FUN_1402e37c(3);
        FUN_1402e1fc(7,&local_2e);
        uVar4 = 0xf9;
        iVar3 = 0;
        goto LAB_1402eeae;
      }
      uVar4 = 2;
      iVar5 = 0x43;
LAB_1402efec:
      FUN_1402e1fc(iVar5,&local_2e);
      puVar6 = DAT_1402f12c;
      if (param_1 < 2) {
        iVar3 = param_1 << 3;
        goto LAB_1402eeae;
      }
    }
    if (param_2 == 0) {
      local_2e = local_2e & ~puVar6[param_1 * 9];
    }
    else {
      local_2e = puVar6[param_1 * 9] | local_2e;
    }
    if (param_3 == 0) {
      iVar3 = param_1 * 8;
      local_2e = local_2e & ~puVar6[param_1 * 9 + 1];
    }
    else {
      iVar3 = param_1 * 8;
      local_2e = local_2e | puVar6[param_1 * 9 + 1];
    }
  }
LAB_1402eeae:
  iVar2 = iVar3 + param_1;
  if (param_4 == 0) {
    local_2e = local_2e & ~puVar6[iVar2 + 3] | puVar6[iVar2 + 2];
  }
  else {
    local_2e = local_2e & ~puVar6[iVar2 + 2];
  }
  if (1 < uVar4) {
    if (param_5 == 0) {
      local_2e = local_2e & ~puVar6[iVar3 + param_1 + 4];
    }
    else {
      local_2e = local_2e | puVar6[iVar3 + param_1 + 4];
    }
  }
  FUN_1402e37c(iVar5);
LAB_1402eee8:
  if (*DAT_1402f124 == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

