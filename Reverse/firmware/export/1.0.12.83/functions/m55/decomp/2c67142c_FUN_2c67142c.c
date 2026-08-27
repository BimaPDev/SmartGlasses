/* FUN_2c67142c @ 0x2c67142c */

/* WARNING: Control flow encountered bad instruction data */

int FUN_2c67142c(undefined4 param_1,undefined4 *param_2,byte *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 local_2a8;
  undefined1 auStack_2a4 [256];
  uint local_1a4 [3];
  int local_198;
  int local_194;
  undefined1 *local_190;
  int local_18c;
  undefined4 local_28;
  code *local_24;
  
  iVar2 = DAT_2c6716ec;
  iVar1 = DAT_2c6716e0;
  local_190 = auStack_2a4;
  local_198 = 0;
  local_194 = 0;
  local_28 = DAT_2c6716e4;
  local_24 = DAT_2c6716e8;
  local_2a8 = param_4;
LAB_2c671456:
  do {
    while( true ) {
      while( true ) {
        uVar5 = (uint)*param_3;
        if (uVar5 == 0) {
          return local_198;
        }
        pbVar6 = param_3 + 1;
        uVar4 = *(byte *)(uVar5 + iVar1) & 8;
        if ((*(byte *)(uVar5 + iVar1) & 8) == 0) break;
        while (((param_3 = pbVar6, 0 < (int)param_2[1] ||
                (iVar3 = (*local_24)(param_1,param_2), iVar3 == 0)) &&
               ((int)((uint)*(byte *)(iVar1 + (uint)*(byte *)*param_2) << 0x1c) < 0))) {
          local_194 = local_194 + 1;
          *param_2 = (byte *)*param_2 + 1;
          param_2[1] = param_2[1] + -1;
        }
      }
      if (uVar5 == 0x25) break;
LAB_2c6714a0:
      if (((int)param_2[1] < 1) && (iVar3 = (*local_24)(param_1,param_2), iVar3 != 0))
      goto LAB_2c6715e0;
      if (*(byte *)*param_2 != uVar5) {
        return local_198;
      }
      *param_2 = (byte *)*param_2 + 1;
      param_2[1] = param_2[1] + -1;
      local_194 = local_194 + 1;
      param_3 = pbVar6;
    }
    local_1a4[0] = uVar4;
    local_1a4[2] = uVar4;
    if (param_3[1] == 0x2a) {
      local_1a4[0] = 0x10;
      pbVar6 = param_3 + 2;
    }
    while( true ) {
      uVar5 = (uint)*pbVar6;
      if (9 < uVar5 - 0x30) break;
      local_1a4[2] = (local_1a4[2] * 10 + uVar5) - 0x30;
      pbVar6 = pbVar6 + 1;
    }
    iVar3 = FUN_2c643680(DAT_2c6716ec,uVar5,3);
    pbVar7 = pbVar6;
    if (iVar3 != 0) {
      local_1a4[0] = 1 << (iVar3 - iVar2 & 0xffU) | local_1a4[0];
      pbVar7 = pbVar6 + 1;
    }
    pbVar6 = pbVar7 + 1;
    uVar5 = (uint)*pbVar7;
    if (uVar5 < 0x79) {
      if (0x57 < uVar5) {
        switch(uVar5) {
        case 0x58:
        case 0x78:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x59:
        case 0x5a:
        case 0x5c:
        case 0x5d:
        case 0x5e:
        case 0x5f:
        case 0x60:
        case 0x61:
        case 0x62:
        case 0x68:
        case 0x6a:
        case 0x6b:
        case 0x6c:
        case 0x6d:
        case 0x71:
        case 0x72:
        case 0x74:
        case 0x76:
        case 0x77:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x5b:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 99:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 100:
        case 0x75:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x65:
        case 0x66:
        case 0x67:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x69:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x6e:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x6f:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x70:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x73:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto switchD_2c67153e_default;
      }
      if (uVar5 == 0x25) goto LAB_2c6714a0;
      if (uVar5 < 0x26) {
        if (uVar5 != 0) goto switchD_2c67153e_default;
        goto LAB_2c6715e8;
      }
      if (2 < uVar5 - 0x45) goto switchD_2c67153e_default;
      local_18c = 5;
    }
    else {
switchD_2c67153e_default:
      local_18c = 3;
      local_1a4[1] = 10;
    }
    if (((int)param_2[1] < 1) && (iVar3 = (*local_24)(param_1,param_2), iVar3 != 0))
    goto LAB_2c6715e0;
    if (-1 < (int)(local_1a4[0] << 0x19)) {
      while ((int)((uint)*(byte *)(iVar1 + (uint)*(byte *)*param_2) << 0x1c) < 0) {
        local_194 = local_194 + 1;
        iVar3 = param_2[1];
        param_2[1] = iVar3 + -1;
        if (iVar3 + -1 < 1) {
          iVar3 = (*local_24)(param_1,param_2);
          if (iVar3 != 0) goto LAB_2c6715e0;
        }
        else {
          *param_2 = (byte *)*param_2 + 1;
        }
      }
    }
    param_3 = pbVar6;
    if (local_18c < 3) {
      iVar3 = FUN_2c671724(param_1,local_1a4,param_2,&local_2a8);
    }
    else if (local_18c < 5) {
      iVar3 = FUN_2c6717d8(param_1,local_1a4,param_2,&local_2a8);
    }
    else {
      if (DAT_2c671720 == 0) goto LAB_2c671456;
      iVar3 = FUN_2c66a838(param_1,local_1a4,param_2,&local_2a8);
    }
    if (iVar3 == 1) {
      return local_198;
    }
    if (iVar3 == 2) {
LAB_2c6715e0:
      if (local_198 == 0) {
LAB_2c6715e8:
        local_198 = -1;
      }
      else if ((*(ushort *)(param_2 + 3) & 0x40) != 0) {
        local_198 = -1;
      }
      return local_198;
    }
  } while( true );
}

