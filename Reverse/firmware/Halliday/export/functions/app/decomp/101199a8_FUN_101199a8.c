/* FUN_101199a8 @ 0x101199a8 */

int FUN_101199a8(undefined4 *param_1,int *param_2,byte *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  byte *pbVar5;
  int unaff_r6;
  byte *pbVar6;
  int iVar7;
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
    iVar1 = FUN_10117f04(param_1,0x40);
    *param_2 = iVar1;
    param_2[4] = iVar1;
    if (iVar1 == 0) {
      *param_1 = 0xc;
      return -1;
    }
    param_2[5] = 0x40;
  }
  iVar1 = DAT_10119b94;
  local_74 = 0;
  local_6f = 0x20;
  local_6e = 0x30;
  pbVar6 = param_3;
  local_8c = param_4;
LAB_101199f8:
  pbVar5 = pbVar6;
  if (*pbVar5 != 0) goto code_r0x10119a00;
  goto LAB_10119a04;
code_r0x10119a00:
  pbVar6 = pbVar5 + 1;
  if (*pbVar5 != 0x25) goto LAB_101199f8;
LAB_10119a04:
  iVar7 = (int)pbVar5 - (int)param_3;
  if (iVar7 != 0) {
    iVar2 = FUN_1013d826(param_1,param_2,param_3,iVar7);
    if (iVar2 == -1) {
LAB_10119b70:
      if ((int)((uint)*(ushort *)(param_2 + 3) << 0x19) < 0) {
        return -1;
      }
      return local_74;
    }
    local_74 = local_74 + iVar7;
  }
  if (*pbVar5 == 0) goto LAB_10119b70;
  local_88 = 0;
  local_7c = 0;
  local_45 = 0;
  local_30 = 0;
  local_84 = -1;
  uStack_80 = 0;
  pbVar6 = pbVar5 + 1;
  while( true ) {
    pbVar5 = pbVar6 + 1;
    iVar2 = FUN_1011ea50(DAT_10119b94,*pbVar6,5);
    iVar7 = DAT_10119ba4;
    if (iVar2 == 0) break;
    local_88 = 1 << (iVar2 - iVar1 & 0xffU) | local_88;
    pbVar6 = pbVar5;
  }
  if ((int)(local_88 << 0x1b) < 0) {
    local_45 = 0x20;
  }
  if ((int)(local_88 << 0x1c) < 0) {
    local_45 = 0x2b;
  }
  if (*pbVar6 == 0x2a) {
    piVar3 = local_8c + 1;
    local_7c = *local_8c;
    local_8c = piVar3;
    if (local_7c < 0) {
      local_7c = -local_7c;
      local_88 = local_88 | 2;
    }
  }
  else {
    bVar4 = false;
    iVar2 = local_7c;
    pbVar5 = pbVar6;
    while( true ) {
      if (9 < *pbVar5 - 0x30) break;
      iVar2 = iVar2 * 10 + (*pbVar5 - 0x30);
      bVar4 = true;
      pbVar5 = pbVar5 + 1;
    }
    if (bVar4) {
      local_7c = iVar2;
    }
  }
  if (*pbVar5 == 0x2e) {
    if (pbVar5[1] == 0x2a) {
      pbVar5 = pbVar5 + 2;
      piVar3 = local_8c + 1;
      local_84 = *local_8c;
      local_8c = piVar3;
      if (local_84 < 0) {
        local_84 = -1;
      }
    }
    else {
      bVar4 = false;
      iVar2 = 0;
      local_84 = 0;
      while( true ) {
        pbVar5 = pbVar5 + 1;
        if (9 < *pbVar5 - 0x30) break;
        iVar2 = iVar2 * 10 + (*pbVar5 - 0x30);
        bVar4 = true;
      }
      if (bVar4) {
        local_84 = iVar2;
      }
    }
  }
  iVar2 = FUN_1011ea50(DAT_10119ba4,*pbVar5,3);
  if (iVar2 != 0) {
    pbVar5 = pbVar5 + 1;
    local_88 = local_88 | 0x40 << (iVar2 - iVar7 & 0xffU);
  }
  param_3 = pbVar5 + 1;
  local_70 = *pbVar5;
  iVar7 = FUN_1011ea50(DAT_10119b98,local_70,6);
  if (iVar7 == 0) {
    unaff_r6 = FUN_10118684(param_1,&local_88,param_2,DAT_10119ba0,&local_8c);
  }
  else {
    if (DAT_10119b9c == 0) {
      local_8c = (int *)(((int)local_8c + 7U & 0xfffffff8) + 8);
      goto LAB_10119b1e;
    }
    unaff_r6 = FUN_10118218(param_1,&local_88,param_2,DAT_10119ba0,&local_8c);
  }
  if (unaff_r6 == -1) goto LAB_10119b70;
LAB_10119b1e:
  local_74 = local_74 + unaff_r6;
  pbVar6 = param_3;
  goto LAB_101199f8;
}

