/* FUN_1007678c @ 0x1007678c */

undefined4 FUN_1007678c(int param_1,undefined2 param_2,short *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  byte local_33;
  byte local_32;
  byte local_31;
  undefined2 local_30;
  uint local_2e;
  
  local_2e = 0;
  local_30 = param_2;
  iVar1 = FUN_1006901c(&local_30);
  if (iVar1 == 0) {
    uVar8 = local_2e & 0xff;
    uVar4 = local_2e >> 8;
    uVar7 = uVar4 & 0xff;
    if (uVar8 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)*param_3;
    }
    if (uVar7 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)param_3[1];
    }
    uVar5 = (DAT_10076954 - DAT_10076950) * 0x20 & 0xff00;
    uVar10 = local_2e & 3;
    iVar11 = iVar6;
    FUN_100a5b78(DAT_10076958 | uVar5,DAT_10076960,DAT_1007695c,iVar1,iVar6);
    uVar4 = uVar4 & 0xc;
    if (uVar10 != 3) {
      iVar1 = (int)(short)((short)iVar1 + 0x3c);
    }
    if (uVar4 != 0xc) {
      iVar6 = iVar6 + 0x3c;
    }
    if (uVar4 != 0xc) {
      iVar6 = (int)(short)iVar6;
    }
    local_33 = 0;
    local_32 = 0;
    local_31 = 0;
    if ((uVar8 - 1 & 0xff) < 0xfe) {
      iVar2 = FUN_100765ec(iVar1,&local_32,&local_31,&local_33);
      if (iVar2 == 0) {
        piVar3 = *(int **)(param_1 + 4);
        iVar1 = *piVar3;
        uVar8 = *(uint *)(iVar1 + 4) & 0xfffffff0;
        if (local_33 < 0x10) {
          uVar8 = uVar8 | local_33;
        }
        else {
          uVar8 = uVar8 | 0xf;
        }
        *(uint *)(iVar1 + 4) = uVar8;
        uVar8 = (uint)local_32;
        iVar1 = *piVar3;
        if (uVar10 == 3) {
          uVar8 = *(uint *)(iVar1 + 0x20) & 0xffff0ffc | uVar8 | (uint)local_31 << 0xc;
        }
        else {
          uVar8 = *(uint *)(iVar1 + 0x20) & 0xfff80ffc | uVar8 << 0x10 | uVar8 |
                  (uint)local_31 << 0xc | 0x40000;
        }
        *(uint *)(iVar1 + 0x20) = uVar8;
      }
      else {
        FUN_100a5b78(DAT_10076964 | uVar5,DAT_1007696c,DAT_10076968,iVar1,iVar11);
      }
    }
    local_33 = 0;
    local_32 = 0;
    local_31 = 0;
    uVar9 = 0;
    if ((uVar7 - 1 & 0xff) < 0xfe) {
      iVar1 = FUN_100765ec(iVar6,&local_32,&local_31,&local_33);
      if (iVar1 == 0) {
        piVar3 = *(int **)(param_1 + 4);
        iVar1 = *piVar3;
        uVar7 = *(uint *)(iVar1 + 8) & 0xfffffff0;
        if (local_33 < 0x10) {
          uVar7 = uVar7 | local_33;
        }
        else {
          uVar7 = uVar7 | 0xf;
        }
        *(uint *)(iVar1 + 8) = uVar7;
        iVar1 = *piVar3;
        uVar7 = (uint)local_32;
        if (uVar4 == 0xc) {
          *(uint *)(iVar1 + 0x24) =
               *(uint *)(iVar1 + 0x24) & 0xffff0ffc | uVar7 | (uint)local_31 << 0xc;
        }
        else {
          *(uint *)(iVar1 + 0x24) =
               *(uint *)(iVar1 + 0x24) & 0xfff80ffc | uVar7 << 0x10 | uVar7 | (uint)local_31 << 0xc
               | 0x40000;
        }
      }
      else {
        FUN_100a5b78(DAT_10076970 | uVar5,DAT_10076978,DAT_10076974,iVar6,iVar11);
      }
    }
  }
  else {
    uVar9 = 0xfffffffe;
  }
  return uVar9;
}

