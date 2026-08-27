/* FUN_2c65b998 @ 0x2c65b998 */

undefined4 *
FUN_2c65b998(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,undefined4 *param_8,undefined4 param_9
            )

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [3];
  byte local_2d;
  int local_2c [2];
  
  uVar1 = param_9;
  local_38 = param_3;
  local_34 = param_4;
  iVar3 = FUN_2c65a49c(auStack_30,param_7 + 0x6c);
  local_2d = 0;
  iVar4 = FUN_2c652d76(&local_38,&param_5);
  if (iVar4 == 0) {
    local_2d = FUN_2c652d58(&local_38);
    if ((((*(byte *)(iVar3 + 0x4b) == local_2d) || (*(byte *)(iVar3 + 0x4a) == local_2d)) &&
        ((*(char *)(iVar3 + 0x10) == '\0' || (*(byte *)(iVar3 + 0x25) != local_2d)))) &&
       (*(byte *)(iVar3 + 0x24) != local_2d)) {
      if (*(byte *)(iVar3 + 0x4b) == local_2d) {
        uVar5 = 0x2b;
      }
      else {
        uVar5 = 0x2d;
      }
      FUN_2c651292(uVar1,uVar5);
      FUN_2c658fa0(local_38);
      local_34 = 0xffffffff;
      iVar4 = FUN_2c652d9a(&local_38,&param_5);
      if (iVar4 == 0) goto LAB_2c65ba80;
      local_2d = FUN_2c652d58(&local_38);
    }
    uVar8 = 0;
    uVar11 = 0;
    while( true ) {
      uVar9 = 0;
      if ((((*(char *)(iVar3 + 0x10) != '\0') && (*(byte *)(iVar3 + 0x25) == local_2d)) ||
          (*(byte *)(iVar3 + 0x24) == local_2d)) || (*(byte *)(iVar3 + 0x4e) != local_2d))
      goto LAB_2c65ba8a;
      if (uVar8 == 0) {
        FUN_2c651292(uVar1,0x30);
      }
      uVar11 = uVar11 + 1;
      FUN_2c658fa0(local_38);
      local_34 = 0xffffffff;
      uVar8 = FUN_2c652d9a(&local_38,&param_5);
      if (uVar8 == 0) break;
      local_2d = FUN_2c652d58(&local_38);
    }
    uVar8 = 1;
    uVar9 = uVar8;
  }
  else {
LAB_2c65ba80:
    uVar11 = 0;
    uVar9 = 1;
    uVar8 = 0;
  }
LAB_2c65ba8a:
  local_2c[0] = DAT_2c65bcb4;
  if (*(char *)(iVar3 + 0x10) != '\0') {
    FUN_2c6510f6(local_2c,0x20);
  }
  uVar10 = (uint)*(byte *)(iVar3 + 100);
  local_48 = uVar10;
  if (uVar10 == 0) {
    while (uVar7 = uVar10, uVar9 == 0) {
      uVar6 = (uint)local_2d;
      if (uVar6 - 0x30 < 10) {
        FUN_2c651292(uVar1);
        uVar8 = 1;
LAB_2c65bb48:
        FUN_2c658fa0(local_38);
        local_34 = 0xffffffff;
        iVar4 = FUN_2c652d9a(&local_38,&param_5);
        if (iVar4 == 0) {
          uVar9 = 1;
        }
        else {
          local_2d = FUN_2c652d58(&local_38);
        }
      }
      else {
        if (((*(byte *)(iVar3 + 0x24) == uVar6) && (local_48 == 0)) && (uVar10 == 0)) {
          FUN_2c651292(uVar1,0x2e);
          local_48 = 1;
          goto LAB_2c65bb48;
        }
        if (((*(byte *)(iVar3 + 0x5c) != uVar6) && (*(byte *)(iVar3 + 0x62) != uVar6)) ||
           ((uVar10 != 0 || (uVar8 == 0)))) break;
        FUN_2c651292(uVar1,0x65);
        FUN_2c658fa0(local_38);
        local_34 = 0xffffffff;
        uVar10 = FUN_2c652d9a(&local_38,&param_5);
        uVar7 = uVar8;
        if (uVar10 == 0) break;
        local_2d = FUN_2c652d58(&local_38);
        uVar8 = uVar10;
        if (*(byte *)(iVar3 + 0x4b) == local_2d) {
          uVar5 = 0x2b;
LAB_2c65bbec:
          FUN_2c651292(uVar1,uVar5);
          goto LAB_2c65bb48;
        }
        if (*(byte *)(iVar3 + 0x4a) == local_2d) {
          uVar5 = 0x2d;
          goto LAB_2c65bbec;
        }
        uVar9 = 0;
      }
    }
LAB_2c65bc12:
    if (*(int *)(local_2c[0] + -0xc) != 0) {
      if ((local_48 == 0) && (uVar7 == 0)) {
        FUN_2c651292(local_2c,uVar11 & 0xff);
      }
      iVar3 = FUN_2c665bc0(*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc),local_2c);
      if (iVar3 == 0) {
        *param_8 = 4;
      }
    }
    *param_1 = local_38;
    param_1[1] = local_34;
    FUN_2c650e60(local_2c);
    return param_1;
  }
  local_48 = 0;
  uVar7 = 0;
LAB_2c65baae:
  uVar6 = uVar7;
  bVar2 = local_2d;
  uVar7 = uVar6;
  if (uVar9 == 0) {
    if ((*(char *)(iVar3 + 0x10) == '\0') || (*(byte *)(iVar3 + 0x25) != local_2d)) {
      if (*(byte *)(iVar3 + 0x24) == local_2d) {
        if ((local_48 == 0) && (uVar6 == 0)) {
          if (*(int *)(local_2c[0] + -0xc) != 0) {
            FUN_2c651292(local_2c,uVar11 & 0xff);
          }
          FUN_2c651292(uVar1,0x2e);
          uVar6 = 0;
          local_48 = uVar10;
          goto LAB_2c65baf2;
        }
      }
      else {
        iVar4 = FUN_2c650c06(iVar3 + 0x4e,10,&local_2d);
        if (iVar4 != 0) {
          uVar11 = uVar11 + 1;
          FUN_2c651292(uVar1,(iVar4 - (iVar3 + 0x4e)) + 0x30U & 0xff);
          uVar8 = uVar10;
          goto LAB_2c65baf2;
        }
        if ((((*(byte *)(iVar3 + 0x5c) == bVar2) || (*(byte *)(iVar3 + 0x62) == bVar2)) &&
            (uVar6 == 0)) && (uVar8 != 0)) {
          if ((*(int *)(local_2c[0] + -0xc) != 0) && (local_48 == 0)) {
            FUN_2c651292(local_2c,uVar11 & 0xff);
          }
          FUN_2c651292(uVar1,0x65);
          FUN_2c658fa0(local_38);
          local_34 = 0xffffffff;
          uVar6 = FUN_2c652d9a(&local_38,&param_5);
          uVar7 = uVar8;
          if (uVar6 != 0) goto code_r0x2c65bd06;
        }
      }
    }
    else if ((local_48 == 0) && (uVar6 == 0)) {
      if (uVar11 != 0) {
        FUN_2c651292(local_2c,uVar11 & 0xff);
        uVar6 = 0;
        uVar11 = 0;
        goto LAB_2c65baf2;
      }
      FUN_2c650e74(uVar1);
    }
  }
  goto LAB_2c65bc12;
code_r0x2c65bd06:
  local_2d = FUN_2c652d58(&local_38);
  uVar9 = 0;
  if ((((*(byte *)(iVar3 + 0x4b) == local_2d) ||
       (uVar7 = uVar6, uVar8 = uVar6, *(byte *)(iVar3 + 0x4a) == local_2d)) &&
      ((uVar7 = (uint)*(byte *)(iVar3 + 0x10), uVar7 == 0 ||
       (uVar8 = uVar7, *(byte *)(iVar3 + 0x25) != local_2d)))) &&
     (uVar7 = uVar6, uVar8 = uVar6, *(byte *)(iVar3 + 0x24) != local_2d)) {
    if (*(byte *)(iVar3 + 0x4b) == local_2d) {
      uVar5 = 0x2b;
    }
    else {
      uVar5 = 0x2d;
    }
    FUN_2c651292(uVar1,uVar5);
LAB_2c65baf2:
    FUN_2c658fa0(local_38);
    local_34 = 0xffffffff;
    iVar4 = FUN_2c652d9a(&local_38,&param_5);
    uVar7 = uVar6;
    uVar9 = uVar10;
    if (iVar4 != 0) {
      local_2d = FUN_2c652d58(&local_38);
      uVar9 = 0;
    }
  }
  goto LAB_2c65baae;
}

