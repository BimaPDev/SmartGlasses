/* FUN_140d4ec0 @ 0x140d4ec0 */

undefined4 *
FUN_140d4ec0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  iVar2 = FUN_140d38a0(auStack_34,param_7 + 0x6c);
  local_30 = 0;
  iVar3 = FUN_140c9d82(&local_40,&param_5);
  if (iVar3 == 0) {
    local_30 = FUN_140c9d64(&local_40);
    if ((((*(uint *)(iVar2 + 0xc0) == local_30) || (*(uint *)(iVar2 + 0xbc) == local_30)) &&
        ((*(char *)(iVar2 + 0x10) == '\0' || (*(uint *)(iVar2 + 0x28) != local_30)))) &&
       (*(uint *)(iVar2 + 0x24) != local_30)) {
      if (*(uint *)(iVar2 + 0xc0) == local_30) {
        uVar4 = 0x2b;
      }
      else {
        uVar4 = 0x2d;
      }
      FUN_140c4416(uVar1,uVar4);
      FUN_140d2450(local_40);
      local_3c = 0xffffffff;
      iVar3 = FUN_140c9da6(&local_40,&param_5);
      if (iVar3 == 0) goto LAB_140d4f94;
      local_30 = FUN_140c9d64(&local_40);
    }
    uVar7 = 0;
    uVar10 = 0;
    while( true ) {
      uVar8 = 0;
      if ((((*(char *)(iVar2 + 0x10) != '\0') && (*(uint *)(iVar2 + 0x28) == local_30)) ||
          (*(uint *)(iVar2 + 0x24) == local_30)) || (*(uint *)(iVar2 + 0xcc) != local_30))
      goto LAB_140d4f9e;
      if (uVar7 == 0) {
        FUN_140c4416(uVar1,0x30);
      }
      uVar10 = uVar10 + 1;
      FUN_140d2450(local_40);
      local_3c = 0xffffffff;
      uVar7 = FUN_140c9da6(&local_40,&param_5);
      if (uVar7 == 0) break;
      local_30 = FUN_140c9d64(&local_40);
    }
    uVar7 = 1;
    uVar8 = uVar7;
  }
  else {
LAB_140d4f94:
    uVar10 = 0;
    uVar8 = 1;
    uVar7 = 0;
  }
LAB_140d4f9e:
  local_2c[0] = DAT_140d5248;
  if (*(char *)(iVar2 + 0x10) != '\0') {
    FUN_140c427a(local_2c,0x20);
  }
  uVar9 = (uint)*(byte *)(iVar2 + 0x124);
  local_50 = uVar9;
  if (uVar9 == 0) {
    while (uVar6 = uVar9, uVar8 == 0) {
      if (local_30 - 0x30 < 10) {
        FUN_140c4416(uVar1,local_30 & 0xff);
        uVar7 = 1;
LAB_140d5056:
        FUN_140d2450(local_40);
        local_3c = 0xffffffff;
        iVar3 = FUN_140c9da6(&local_40,&param_5);
        if (iVar3 == 0) {
          uVar8 = 1;
        }
        else {
          local_30 = FUN_140c9d64(&local_40);
        }
      }
      else {
        if (((local_30 == *(uint *)(iVar2 + 0x24)) && (local_50 == 0)) && (uVar9 == 0)) {
          FUN_140c4416(uVar1,0x2e);
          local_50 = 1;
          goto LAB_140d5056;
        }
        if (((local_30 != *(uint *)(iVar2 + 0x104)) && (local_30 != *(uint *)(iVar2 + 0x11c))) ||
           ((uVar9 != 0 || (uVar7 == 0)))) break;
        FUN_140c4416(uVar1,0x65);
        FUN_140d2450(local_40);
        local_3c = 0xffffffff;
        uVar9 = FUN_140c9da6(&local_40,&param_5);
        uVar6 = uVar7;
        if (uVar9 == 0) break;
        local_30 = FUN_140c9d64(&local_40);
        uVar7 = uVar9;
        if (*(uint *)(iVar2 + 0xc0) == local_30) {
          uVar4 = 0x2b;
LAB_140d50f2:
          FUN_140c4416(uVar1,uVar4);
          goto LAB_140d5056;
        }
        if (*(uint *)(iVar2 + 0xbc) == local_30) {
          uVar4 = 0x2d;
          goto LAB_140d50f2;
        }
        uVar8 = 0;
      }
    }
LAB_140d5118:
    if (*(int *)(local_2c[0] + -0xc) != 0) {
      if ((local_50 == 0) && (uVar6 == 0)) {
        FUN_140c4416(local_2c,uVar10 & 0xff);
      }
      iVar2 = FUN_140d8b0c(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc),local_2c);
      if (iVar2 == 0) {
        *param_8 = 4;
      }
    }
    *param_1 = local_40;
    param_1[1] = local_3c;
    FUN_140c3fe4(local_2c);
    return param_1;
  }
  local_50 = 0;
  uVar6 = 0;
LAB_140d4fc2:
  uVar5 = uVar6;
  uVar6 = uVar5;
  if (uVar8 == 0) {
    if ((*(char *)(iVar2 + 0x10) == '\0') || (*(uint *)(iVar2 + 0x28) != local_30)) {
      if (*(uint *)(iVar2 + 0x24) == local_30) {
        if ((local_50 == 0) && (uVar5 == 0)) {
          if (*(int *)(local_2c[0] + -0xc) != 0) {
            FUN_140c4416(local_2c,uVar10 & 0xff);
          }
          FUN_140c4416(uVar1,0x2e);
          uVar5 = 0;
          local_50 = uVar9;
          goto LAB_140d5002;
        }
      }
      else {
        iVar3 = FUN_140c4502(iVar2 + 0xcc,10,&local_30);
        if (iVar3 != 0) {
          uVar10 = uVar10 + 1;
          FUN_140c4416(uVar1,(iVar3 - (iVar2 + 0xcc) >> 2) + 0x30U & 0xff);
          uVar7 = uVar9;
          goto LAB_140d5002;
        }
        if ((((*(uint *)(iVar2 + 0x104) == local_30) || (local_30 == *(uint *)(iVar2 + 0x11c))) &&
            (uVar5 == 0)) && (uVar7 != 0)) {
          if ((*(int *)(local_2c[0] + -0xc) != 0) && (local_50 == 0)) {
            FUN_140c4416(local_2c,uVar10 & 0xff);
          }
          FUN_140c4416(uVar1,0x65);
          FUN_140d2450(local_40);
          local_3c = 0xffffffff;
          uVar5 = FUN_140c9da6(&local_40,&param_5);
          uVar6 = uVar7;
          if (uVar5 != 0) goto code_r0x140d5204;
        }
      }
    }
    else if ((local_50 == 0) && (uVar5 == 0)) {
      if (uVar10 != 0) {
        FUN_140c4416(local_2c,uVar10 & 0xff);
        uVar5 = 0;
        uVar10 = 0;
        goto LAB_140d5002;
      }
      FUN_140c3ff8(uVar1);
    }
  }
  goto LAB_140d5118;
code_r0x140d5204:
  local_30 = FUN_140c9d64(&local_40);
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
    FUN_140c4416(uVar1,uVar4);
LAB_140d5002:
    FUN_140d2450(local_40);
    local_3c = 0xffffffff;
    iVar3 = FUN_140c9da6(&local_40,&param_5);
    uVar6 = uVar5;
    uVar8 = uVar9;
    if (iVar3 != 0) {
      local_30 = FUN_140c9d64(&local_40);
      uVar8 = 0;
    }
  }
  goto LAB_140d4fc2;
}

