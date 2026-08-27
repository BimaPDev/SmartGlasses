/* FUN_140e1338 @ 0x140e1338 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140e1338(int param_1,undefined4 *param_2,byte *param_3,undefined4 param_4)

{
  short sVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined2 *puVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  short *psVar15;
  int iVar16;
  undefined4 local_2a8;
  undefined1 auStack_2a4 [256];
  uint local_1a4 [3];
  int local_198;
  int local_194;
  code *local_190;
  int local_18c;
  undefined4 local_28;
  code *local_24;
  
  iVar12 = DAT_140e15f8;
  iVar7 = DAT_140e15ec;
  local_198 = 0;
  local_194 = 0;
  local_28 = DAT_140e15f0;
  local_24 = DAT_140e15f4;
  local_2a8 = param_4;
  local_190 = (code *)auStack_2a4;
LAB_140e1362:
  do {
    while( true ) {
      while( true ) {
        uVar10 = (uint)*param_3;
        if (uVar10 == 0) {
          return local_198;
        }
        pbVar13 = param_3 + 1;
        uVar8 = *(byte *)(uVar10 + iVar7) & 8;
        if ((*(byte *)(uVar10 + iVar7) & 8) == 0) break;
        while (((param_3 = pbVar13, 0 < (int)param_2[1] ||
                (iVar5 = (*local_24)(param_1,param_2), iVar5 == 0)) &&
               ((int)((uint)*(byte *)(iVar7 + (uint)*(byte *)*param_2) << 0x1c) < 0))) {
          local_194 = local_194 + 1;
          *param_2 = (byte *)*param_2 + 1;
          param_2[1] = param_2[1] + -1;
        }
      }
      if (uVar10 == 0x25) break;
LAB_140e13ac:
      if (((int)param_2[1] < 1) && (iVar5 = (*local_24)(param_1,param_2), iVar5 != 0))
      goto LAB_140e14ec;
      if (*(byte *)*param_2 != uVar10) {
        return local_198;
      }
      *param_2 = (byte *)*param_2 + 1;
      param_2[1] = param_2[1] + -1;
      local_194 = local_194 + 1;
      param_3 = pbVar13;
    }
    local_1a4[0] = uVar8;
    local_1a4[2] = uVar8;
    if (param_3[1] == 0x2a) {
      local_1a4[0] = 0x10;
      pbVar13 = param_3 + 2;
    }
    while( true ) {
      uVar10 = (uint)*pbVar13;
      if (9 < uVar10 - 0x30) break;
      local_1a4[2] = (local_1a4[2] * 10 + uVar10) - 0x30;
      pbVar13 = pbVar13 + 1;
    }
    iVar6 = FUN_140bd5f0(DAT_140e15f8,uVar10,3);
    iVar5 = iRam00000074;
    pbVar14 = pbVar13;
    if (iVar6 != 0) {
      local_1a4[0] = 1 << (iVar6 - iVar12 & 0xffU) | local_1a4[0];
      pbVar14 = pbVar13 + 1;
    }
    pbVar13 = pbVar14 + 1;
    uVar10 = (uint)*pbVar14;
    if (uVar10 < 0x79) {
      if (0x57 < uVar10) {
        switch(uVar10) {
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
        case 0x65:
        case 0x66:
        case 0x67:
        case 0x70:
        case 0x58:
        case 0x78:
        case 100:
        case 0x75:
        case 0x69:
        case 0x6f:
        case 0x5b:
        case 99:
        case 0x73:
        case 0x6e:
          uRam00000011 = 0;
          _IRQ = 0;
          uVar9 = *(undefined4 *)(iRam00000074 + 0x14);
          *(int *)(iRam00000074 + 0x54) = iRam00000074;
          uVar2 = (undefined1)uVar9;
          *(undefined1 *)(iVar5 + 0xd) = uVar2;
          *(undefined1 *)(iVar5 + 0x11) = 0;
          cVar4 = (char)iRam00000044;
          _Reserved2 = 0;
          sVar1 = *(short *)(iVar5 + 0x31);
          _DAT_00000054 = (short *)(int)sVar1;
          uVar3 = (undefined1)sVar1;
          *(undefined1 *)((int)_DAT_00000054 + 9) = uVar3;
          psVar15 = (short *)(int)*(short *)(iVar5 + 0x31);
          *(undefined4 *)(psVar15 + 0x2a) = uVar9;
          iRam00000044 = (int)*_DAT_00000054;
          uRam00000009 = (undefined1)*_DAT_00000054;
          _Reserved5 = psVar15;
          *(char *)((int)psVar15 + 1) = cVar4 + '0';
          *(undefined1 *)((int)_DAT_00000054 + 0x11) = uVar2;
          *(undefined1 *)((int)psVar15 + 0x19) = uVar2;
          _DAT_00000054[0x3a] = 0;
          iVar7 = iRam00000074;
          _DAT_00000054[0x3b] = 0;
          sVar1 = *psVar15;
          uVar2 = (undefined1)iRam00000074;
          _MasterStackPointer = CONCAT11(uVar2,MasterStackPointer);
          *(undefined1 *)((int)psVar15 + 9) = uVar2;
          _Reserved6 = iVar7;
          *(undefined1 *)((int)psVar15 + 9) = uVar3;
          iVar12 = (int)_MasterStackPointer;
          *(short **)(iVar12 + 0x54) = psVar15;
          *(undefined1 *)(iVar12 + 0x11) = 0;
          iVar5 = *(int *)(iVar12 + 0x14);
          *(int *)(psVar15 + 10) = (int)*psVar15;
          *(char *)(iVar5 + 0xc) = (char)(iVar5 << 1);
          *(int *)(iVar5 + 0x50) = (int)sVar1;
          *(char *)(iVar5 + 0x15) = (char)iVar5;
          iVar12 = (int)psVar15 * 2;
          uVar3 = (undefined1)*(undefined4 *)(iVar5 + 0x44);
          *(undefined1 *)(iVar5 + 0x11) = uVar3;
          *(int *)(iVar12 + 0x44) = iVar7;
          *(undefined1 *)((int)psVar15 + 0x19) = uVar3;
          *(undefined1 *)(iVar12 + 9) = uVar2;
          *(undefined4 *)(iVar5 + 0x74) = 0x20;
          uVar9 = *(undefined4 *)(iVar12 + 0x74);
          *(int *)(psVar15 + 0x2a) = (int)psVar15[0x10];
          iVar7 = _DAT_00000094;
          iVar6 = *(int *)(_DAT_00000094 + 0x14);
          iVar5 = *(int *)(iVar6 + 0x74);
          sVar1 = *(short *)(iVar6 + _DAT_00000094);
          *(int *)(iVar6 + 0x14) = (int)psVar15[0x10];
          *(int *)(iVar6 + 0x14) = (int)sVar1;
          *(char *)(iVar7 + 0xd) = (char)iVar7;
          uVar2 = (undefined1)sVar1;
          *(undefined1 *)(iVar5 + 0x11) = uVar2;
          *(undefined4 *)(iVar12 + 0x44) = uVar9;
          *(undefined1 *)(iVar6 + 0x19) = uVar2;
          *(char *)(iVar12 + 9) = (char)uVar9;
          *(int *)(iVar5 + 0x74) = iVar7;
          iVar16 = *(int *)(iVar12 + 0x74);
          *(int *)(iVar5 + 0x54) = iVar16;
          puVar11 = *(undefined2 **)(*(short *)(iVar6 + iVar7) + 0x74);
          *(char *)(iVar7 + 0x11) = (char)iVar6;
          iVar12 = *(int *)(iVar7 + 0x44);
          *(char *)(iVar12 + 9) = (char)iVar7;
          *(char *)((int)puVar11 + 0x11) = (char)iVar16;
          sVar1 = *(short *)(iVar16 + iVar7);
          *(char *)(iVar12 + 9) = (char)iVar6;
          *(int *)(iVar12 + 0x54) = iVar7;
          *(int *)(puVar11 + 0x12) = iVar16;
          *(int *)(iVar6 + 100) = iVar7;
          *(int *)(iVar12 + 0x54) = iVar6;
          *(char *)(int)sVar1 = (char)(iVar6 << 1);
          *puVar11 = (short)iVar16;
                    /* WARNING: Could not recover jumptable at 0x14108378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar7 = (*(code *)auStack_2a4)();
          return iVar7;
        }
        goto switchD_140e144a_default;
      }
      if (uVar10 == 0x25) goto LAB_140e13ac;
      if (uVar10 < 0x26) {
        if (uVar10 != 0) goto switchD_140e144a_default;
        goto LAB_140e14f4;
      }
      if (2 < uVar10 - 0x45) goto switchD_140e144a_default;
      local_18c = 5;
    }
    else {
switchD_140e144a_default:
      local_18c = 3;
      local_1a4[1] = 10;
    }
    if (((int)param_2[1] < 1) && (iVar5 = (*local_24)(param_1,param_2), iVar5 != 0))
    goto LAB_140e14ec;
    if (-1 < (int)(local_1a4[0] << 0x19)) {
      while ((int)((uint)*(byte *)(iVar7 + (uint)*(byte *)*param_2) << 0x1c) < 0) {
        local_194 = local_194 + 1;
        iVar5 = param_2[1];
        param_2[1] = iVar5 + -1;
        if (iVar5 + -1 < 1) {
          iVar5 = (*local_24)(param_1,param_2);
          if (iVar5 != 0) goto LAB_140e14ec;
        }
        else {
          *param_2 = (byte *)*param_2 + 1;
        }
      }
    }
    param_3 = pbVar13;
    if (local_18c < 3) {
      iVar5 = FUN_140e1630(param_1,local_1a4,param_2,&local_2a8);
    }
    else if (local_18c < 5) {
      iVar5 = FUN_140e16e4(param_1,local_1a4,param_2,&local_2a8);
    }
    else {
      iVar5 = param_1;
      if (DAT_140e162c == 0) goto LAB_140e1362;
    }
    if (iVar5 == 1) {
      return local_198;
    }
    if (iVar5 == 2) {
LAB_140e14ec:
      if (local_198 == 0) {
LAB_140e14f4:
        local_198 = -1;
      }
      else if ((*(ushort *)(param_2 + 3) & 0x40) != 0) {
        local_198 = -1;
      }
      return local_198;
    }
  } while( true );
}

