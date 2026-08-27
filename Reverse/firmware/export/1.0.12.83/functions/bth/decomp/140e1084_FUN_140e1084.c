/* FUN_140e1084 @ 0x140e1084 */

int FUN_140e1084(undefined4 *param_1,int *param_2,byte *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  bool bVar5;
  byte *pbVar6;
  undefined4 *unaff_r6;
  byte *pbVar7;
  int iVar8;
  int *local_8c;
  uint local_88;
  int local_84;
  undefined4 uStack_80;
  int local_7c;
  int local_74;
  byte local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_45;
  undefined4 local_30;
  
  if (((int)((uint)*(ushort *)(param_2 + 3) << 0x18) < 0) && (param_2[4] == 0)) {
    iVar1 = FUN_140db8a8(param_1,0x40);
    *param_2 = iVar1;
    param_2[4] = iVar1;
    if (iVar1 == 0) {
      *param_1 = 0xc;
      return -1;
    }
    param_2[5] = 0x40;
  }
  iVar1 = DAT_140e1270;
  local_74 = 0;
  local_6f = 0x20;
  local_6e = 0x30;
  pbVar7 = param_3;
  local_8c = param_4;
LAB_140e10d4:
  pbVar6 = pbVar7;
  if (*pbVar6 != 0) goto code_r0x140e10dc;
  goto LAB_140e10e0;
code_r0x140e10dc:
  pbVar7 = pbVar6 + 1;
  if (*pbVar6 != 0x25) goto LAB_140e10d4;
LAB_140e10e0:
  iVar8 = (int)pbVar6 - (int)param_3;
  if (iVar8 != 0) {
    iVar2 = FUN_140e0fcc(param_1,param_2,param_3,iVar8);
    if (iVar2 == -1) {
LAB_140e124c:
      if ((int)((uint)*(ushort *)(param_2 + 3) << 0x19) < 0) {
        return -1;
      }
      return local_74;
    }
    local_74 = local_74 + iVar8;
  }
  if (*pbVar6 == 0) goto LAB_140e124c;
  local_88 = 0;
  local_7c = 0;
  local_45 = 0;
  local_30 = 0;
  local_84 = -1;
  uStack_80 = 0;
  pbVar7 = pbVar6 + 1;
  while( true ) {
    pbVar6 = pbVar7 + 1;
    iVar2 = FUN_140bd5f0(DAT_140e1270,*pbVar7,5);
    iVar8 = DAT_140e1280;
    if (iVar2 == 0) break;
    local_88 = 1 << (iVar2 - iVar1 & 0xffU) | local_88;
    pbVar7 = pbVar6;
  }
  if ((int)(local_88 << 0x1b) < 0) {
    local_45 = 0x20;
  }
  if ((int)(local_88 << 0x1c) < 0) {
    local_45 = 0x2b;
  }
  if (*pbVar7 == 0x2a) {
    piVar4 = local_8c + 1;
    local_7c = *local_8c;
    local_8c = piVar4;
    if (local_7c < 0) {
      local_7c = -local_7c;
      local_88 = local_88 | 2;
    }
  }
  else {
    bVar5 = false;
    iVar2 = local_7c;
    pbVar6 = pbVar7;
    while( true ) {
      if (9 < *pbVar6 - 0x30) break;
      iVar2 = iVar2 * 10 + (*pbVar6 - 0x30);
      bVar5 = true;
      pbVar6 = pbVar6 + 1;
    }
    if (bVar5) {
      local_7c = iVar2;
    }
  }
  if (*pbVar6 == 0x2e) {
    if (pbVar6[1] == 0x2a) {
      pbVar6 = pbVar6 + 2;
      piVar4 = local_8c + 1;
      local_84 = *local_8c;
      local_8c = piVar4;
      if (local_84 < 0) {
        local_84 = -1;
      }
    }
    else {
      bVar5 = false;
      iVar2 = 0;
      local_84 = 0;
      while( true ) {
        pbVar6 = pbVar6 + 1;
        if (9 < *pbVar6 - 0x30) break;
        iVar2 = iVar2 * 10 + (*pbVar6 - 0x30);
        bVar5 = true;
      }
      if (bVar5) {
        local_84 = iVar2;
      }
    }
  }
  iVar2 = FUN_140bd5f0(DAT_140e1280,*pbVar6,3);
  if (iVar2 != 0) {
    pbVar6 = pbVar6 + 1;
    local_88 = local_88 | 0x40 << (iVar2 - iVar8 & 0xffU);
  }
  param_3 = pbVar6 + 1;
  local_70 = *pbVar6;
  iVar8 = FUN_140bd5f0(DAT_140e1274,local_70,6);
  if (iVar8 == 0) {
    puVar3 = (undefined4 *)FUN_140dbd24(param_1,&local_88,param_2,DAT_140e127c,&local_8c);
  }
  else {
    puVar3 = param_1;
    if (DAT_140e1278 == 0) {
      local_8c = (int *)(((int)local_8c + 7U & 0xfffffff8) + 8);
      puVar3 = unaff_r6;
      goto LAB_140e11fa;
    }
  }
  if (puVar3 == (undefined4 *)0xffffffff) goto LAB_140e124c;
LAB_140e11fa:
  local_74 = local_74 + (int)puVar3;
  pbVar7 = param_3;
  unaff_r6 = puVar3;
  goto LAB_140e10d4;
}

