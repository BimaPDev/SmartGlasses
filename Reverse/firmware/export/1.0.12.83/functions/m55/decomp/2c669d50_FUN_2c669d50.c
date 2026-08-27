/* FUN_2c669d50 @ 0x2c669d50 */

int FUN_2c669d50(int param_1,int param_2,byte *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  byte *pbVar5;
  int unaff_r7;
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
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    FUN_2c668868();
  }
  if (param_2 == DAT_2c669f90) {
    param_2 = *(int *)(param_1 + 4);
  }
  else if (param_2 == DAT_2c669f94) {
    param_2 = *(int *)(param_1 + 8);
  }
  else if (param_2 == DAT_2c669f98) {
    param_2 = *(int *)(param_1 + 0xc);
  }
  if ((-1 < *(int *)(param_2 + 100) << 0x1f) &&
     (-1 < (int)((uint)*(ushort *)(param_2 + 0xc) << 0x16))) {
    FUN_2c6694a8(*(undefined4 *)(param_2 + 0x58));
  }
  if (((-1 < (int)((uint)*(ushort *)(param_2 + 0xc) << 0x1c)) || (*(int *)(param_2 + 0x10) == 0)) &&
     (iVar1 = FUN_2c66ed5c(param_1,param_2), iVar1 != 0)) {
    if ((-1 < *(int *)(param_2 + 100) << 0x1f) &&
       (-1 < (int)((uint)*(ushort *)(param_2 + 0xc) << 0x16))) {
      FUN_2c6694ac(*(undefined4 *)(param_2 + 0x58));
    }
    return -1;
  }
  iVar1 = DAT_2c669f9c;
  local_74 = 0;
  local_6f = 0x20;
  local_6e = 0x30;
  pbVar6 = param_3;
  local_8c = param_4;
LAB_2c669de6:
  pbVar5 = pbVar6;
  if (*pbVar5 != 0) goto code_r0x2c669dee;
  goto LAB_2c669df2;
code_r0x2c669dee:
  pbVar6 = pbVar5 + 1;
  if (*pbVar5 != 0x25) goto LAB_2c669de6;
LAB_2c669df2:
  iVar7 = (int)pbVar5 - (int)param_3;
  if (iVar7 != 0) {
    iVar2 = FUN_2c669d2a(param_1,param_2,param_3,iVar7);
    if (iVar2 == -1) {
LAB_2c669f5e:
      if ((-1 < *(int *)(param_2 + 100) << 0x1f) &&
         (-1 < (int)((uint)*(ushort *)(param_2 + 0xc) << 0x16))) {
        FUN_2c6694ac(*(undefined4 *)(param_2 + 0x58));
      }
      if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x19) < 0) {
        return -1;
      }
      return local_74;
    }
    local_74 = local_74 + iVar7;
  }
  if (*pbVar5 == 0) goto LAB_2c669f5e;
  local_88 = 0;
  local_7c = 0;
  local_45 = 0;
  local_30 = 0;
  local_84 = -1;
  uStack_80 = 0;
  pbVar6 = pbVar5 + 1;
  while( true ) {
    pbVar5 = pbVar6 + 1;
    iVar2 = FUN_2c643680(DAT_2c669f9c,*pbVar6,5);
    iVar7 = DAT_2c669fac;
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
  iVar2 = FUN_2c643680(DAT_2c669fac,*pbVar5,3);
  if (iVar2 != 0) {
    pbVar5 = pbVar5 + 1;
    local_88 = local_88 | 0x40 << (iVar2 - iVar7 & 0xffU);
  }
  param_3 = pbVar5 + 1;
  local_70 = *pbVar5;
  iVar7 = FUN_2c643680(DAT_2c669fa0,local_70,6);
  if (iVar7 == 0) {
    unaff_r7 = FUN_2c66a5ec(param_1,&local_88,param_2,DAT_2c669fa8,&local_8c);
  }
  else {
    if (DAT_2c669fa4 == 0) {
      local_8c = (int *)(((int)local_8c + 7U & 0xfffffff8) + 8);
      goto LAB_2c669f0c;
    }
    unaff_r7 = FUN_2c66a0d0(param_1,&local_88,param_2,DAT_2c669fa8,&local_8c);
  }
  if (unaff_r7 == -1) goto LAB_2c669f5e;
LAB_2c669f0c:
  local_74 = local_74 + unaff_r7;
  pbVar6 = param_3;
  goto LAB_2c669de6;
}

