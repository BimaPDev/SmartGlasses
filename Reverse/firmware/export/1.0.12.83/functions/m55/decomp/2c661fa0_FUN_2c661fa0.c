/* FUN_2c661fa0 @ 0x2c661fa0 */

undefined4 *
FUN_2c661fa0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,undefined4 *param_8,undefined4 param_9
            )

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_50;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_34 [4];
  uint local_30;
  int local_2c [2];
  
  uVar1 = param_9;
  local_40 = param_3;
  local_3c = param_4;
  iVar2 = FUN_2c660988(auStack_34,param_7 + 0x6c);
  local_30 = 0;
  iVar3 = FUN_2c656bf6(&local_40,&param_5);
  if (iVar3 == 0) {
    local_30 = FUN_2c656bd8(&local_40);
    if ((((*(uint *)(iVar2 + 0xc0) == local_30) || (*(uint *)(iVar2 + 0xbc) == local_30)) &&
        ((*(char *)(iVar2 + 0x10) == '\0' || (*(uint *)(iVar2 + 0x28) != local_30)))) &&
       (*(uint *)(iVar2 + 0x24) != local_30)) {
      if (*(uint *)(iVar2 + 0xc0) == local_30) {
        uVar4 = 0x2b;
      }
      else {
        uVar4 = 0x2d;
      }
      FUN_2c651292(uVar1,uVar4);
      FUN_2c65f53c(local_40);
      local_3c = 0xffffffff;
      iVar3 = FUN_2c656c1a(&local_40,&param_5);
      if (iVar3 == 0) goto LAB_2c662074;
      local_30 = FUN_2c656bd8(&local_40);
    }
    uVar7 = 0;
    uVar10 = 0;
    while( true ) {
      uVar8 = 0;
      if ((((*(char *)(iVar2 + 0x10) != '\0') && (*(uint *)(iVar2 + 0x28) == local_30)) ||
          (*(uint *)(iVar2 + 0x24) == local_30)) || (*(uint *)(iVar2 + 0xcc) != local_30))
      goto LAB_2c66207e;
      if (uVar7 == 0) {
        FUN_2c651292(uVar1,0x30);
      }
      uVar10 = uVar10 + 1;
      FUN_2c65f53c(local_40);
      local_3c = 0xffffffff;
      uVar7 = FUN_2c656c1a(&local_40,&param_5);
      if (uVar7 == 0) break;
      local_30 = FUN_2c656bd8(&local_40);
    }
    uVar7 = 1;
    uVar8 = uVar7;
  }
  else {
LAB_2c662074:
    uVar10 = 0;
    uVar8 = 1;
    uVar7 = 0;
  }
LAB_2c66207e:
  local_2c[0] = DAT_2c662328;
  if (*(char *)(iVar2 + 0x10) != '\0') {
    FUN_2c6510f6(local_2c,0x20);
  }
  uVar9 = (uint)*(byte *)(iVar2 + 0x124);
  local_50 = uVar9;
  if (uVar9 == 0) {
    while (uVar6 = uVar9, uVar8 == 0) {
      if (local_30 - 0x30 < 10) {
        FUN_2c651292(uVar1,local_30 & 0xff);
        uVar7 = 1;
LAB_2c662136:
        FUN_2c65f53c(local_40);
        local_3c = 0xffffffff;
        iVar3 = FUN_2c656c1a(&local_40,&param_5);
        if (iVar3 == 0) {
          uVar8 = 1;
        }
        else {
          local_30 = FUN_2c656bd8(&local_40);
        }
      }
      else {
        if (((local_30 == *(uint *)(iVar2 + 0x24)) && (local_50 == 0)) && (uVar9 == 0)) {
          FUN_2c651292(uVar1,0x2e);
          local_50 = 1;
          goto LAB_2c662136;
        }
        if (((local_30 != *(uint *)(iVar2 + 0x104)) && (local_30 != *(uint *)(iVar2 + 0x11c))) ||
           ((uVar9 != 0 || (uVar7 == 0)))) break;
        FUN_2c651292(uVar1,0x65);
        FUN_2c65f53c(local_40);
        local_3c = 0xffffffff;
        uVar9 = FUN_2c656c1a(&local_40,&param_5);
        uVar6 = uVar7;
        if (uVar9 == 0) break;
        local_30 = FUN_2c656bd8(&local_40);
        uVar7 = uVar9;
        if (*(uint *)(iVar2 + 0xc0) == local_30) {
          uVar4 = 0x2b;
LAB_2c6621d2:
          FUN_2c651292(uVar1,uVar4);
          goto LAB_2c662136;
        }
        if (*(uint *)(iVar2 + 0xbc) == local_30) {
          uVar4 = 0x2d;
          goto LAB_2c6621d2;
        }
        uVar8 = 0;
      }
    }
LAB_2c6621f8:
    if (*(int *)(local_2c[0] + -0xc) != 0) {
      if ((local_50 == 0) && (uVar6 == 0)) {
        FUN_2c651292(local_2c,uVar10 & 0xff);
      }
      iVar2 = FUN_2c665bc0(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc),local_2c);
      if (iVar2 == 0) {
        *param_8 = 4;
      }
    }
    *param_1 = local_40;
    param_1[1] = local_3c;
    FUN_2c650e60(local_2c);
    return param_1;
  }
  local_50 = 0;
  uVar6 = 0;
LAB_2c6620a2:
  uVar5 = uVar6;
  uVar6 = uVar5;
  if (uVar8 == 0) {
    if ((*(char *)(iVar2 + 0x10) == '\0') || (*(uint *)(iVar2 + 0x28) != local_30)) {
      if (*(uint *)(iVar2 + 0x24) == local_30) {
        if ((local_50 == 0) && (uVar5 == 0)) {
          if (*(int *)(local_2c[0] + -0xc) != 0) {
            FUN_2c651292(local_2c,uVar10 & 0xff);
          }
          FUN_2c651292(uVar1,0x2e);
          uVar5 = 0;
          local_50 = uVar9;
          goto LAB_2c6620e2;
        }
      }
      else {
        iVar3 = FUN_2c65137e(iVar2 + 0xcc,10,&local_30);
        if (iVar3 != 0) {
          uVar10 = uVar10 + 1;
          FUN_2c651292(uVar1,(iVar3 - (iVar2 + 0xcc) >> 2) + 0x30U & 0xff);
          uVar7 = uVar9;
          goto LAB_2c6620e2;
        }
        if ((((*(uint *)(iVar2 + 0x104) == local_30) || (local_30 == *(uint *)(iVar2 + 0x11c))) &&
            (uVar5 == 0)) && (uVar7 != 0)) {
          if ((*(int *)(local_2c[0] + -0xc) != 0) && (local_50 == 0)) {
            FUN_2c651292(local_2c,uVar10 & 0xff);
          }
          FUN_2c651292(uVar1,0x65);
          FUN_2c65f53c(local_40);
          local_3c = 0xffffffff;
          uVar5 = FUN_2c656c1a(&local_40,&param_5);
          uVar6 = uVar7;
          if (uVar5 != 0) goto code_r0x2c6622e4;
        }
      }
    }
    else if ((local_50 == 0) && (uVar5 == 0)) {
      if (uVar10 != 0) {
        FUN_2c651292(local_2c,uVar10 & 0xff);
        uVar5 = 0;
        uVar10 = 0;
        goto LAB_2c6620e2;
      }
      FUN_2c650e74(uVar1);
    }
  }
  goto LAB_2c6621f8;
code_r0x2c6622e4:
  local_30 = FUN_2c656bd8(&local_40);
  uVar8 = 0;
  if ((((*(uint *)(iVar2 + 0xc0) == local_30) ||
       (uVar6 = uVar5, uVar7 = uVar5, *(uint *)(iVar2 + 0xbc) == local_30)) &&
      ((uVar6 = (uint)*(byte *)(iVar2 + 0x10), uVar6 == 0 ||
       (uVar7 = uVar6, *(uint *)(iVar2 + 0x28) != local_30)))) &&
     (uVar6 = uVar5, uVar7 = uVar5, *(uint *)(iVar2 + 0x24) != local_30)) {
    if (*(uint *)(iVar2 + 0xc0) == local_30) {
      uVar4 = 0x2b;
    }
    else {
      uVar4 = 0x2d;
    }
    FUN_2c651292(uVar1,uVar4);
LAB_2c6620e2:
    FUN_2c65f53c(local_40);
    local_3c = 0xffffffff;
    iVar3 = FUN_2c656c1a(&local_40,&param_5);
    uVar6 = uVar5;
    uVar8 = uVar9;
    if (iVar3 != 0) {
      local_30 = FUN_2c656bd8(&local_40);
      uVar8 = 0;
    }
  }
  goto LAB_2c6620a2;
}

