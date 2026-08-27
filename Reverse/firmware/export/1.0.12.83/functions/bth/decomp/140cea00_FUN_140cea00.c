/* FUN_140cea00 @ 0x140cea00 */

undefined4 *
FUN_140cea00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  iVar3 = FUN_140cd4fc(auStack_30,param_7 + 0x6c);
  local_2d = 0;
  iVar4 = FUN_140c5efe(&local_38,&param_5);
  if (iVar4 == 0) {
    local_2d = FUN_140c5ee0(&local_38);
    if ((((*(byte *)(iVar3 + 0x4b) == local_2d) || (*(byte *)(iVar3 + 0x4a) == local_2d)) &&
        ((*(char *)(iVar3 + 0x10) == '\0' || (*(byte *)(iVar3 + 0x25) != local_2d)))) &&
       (*(byte *)(iVar3 + 0x24) != local_2d)) {
      if (*(byte *)(iVar3 + 0x4b) == local_2d) {
        uVar5 = 0x2b;
      }
      else {
        uVar5 = 0x2d;
      }
      FUN_140c4416(uVar1,uVar5);
      FUN_140cbffc(local_38);
      local_34 = 0xffffffff;
      iVar4 = FUN_140c5f22(&local_38,&param_5);
      if (iVar4 == 0) goto LAB_140ceae8;
      local_2d = FUN_140c5ee0(&local_38);
    }
    uVar8 = 0;
    uVar11 = 0;
    while( true ) {
      uVar9 = 0;
      if ((((*(char *)(iVar3 + 0x10) != '\0') && (*(byte *)(iVar3 + 0x25) == local_2d)) ||
          (*(byte *)(iVar3 + 0x24) == local_2d)) || (*(byte *)(iVar3 + 0x4e) != local_2d))
      goto LAB_140ceaf2;
      if (uVar8 == 0) {
        FUN_140c4416(uVar1,0x30);
      }
      uVar11 = uVar11 + 1;
      FUN_140cbffc(local_38);
      local_34 = 0xffffffff;
      uVar8 = FUN_140c5f22(&local_38,&param_5);
      if (uVar8 == 0) break;
      local_2d = FUN_140c5ee0(&local_38);
    }
    uVar8 = 1;
    uVar9 = uVar8;
  }
  else {
LAB_140ceae8:
    uVar11 = 0;
    uVar9 = 1;
    uVar8 = 0;
  }
LAB_140ceaf2:
  local_2c[0] = DAT_140ced1c;
  if (*(char *)(iVar3 + 0x10) != '\0') {
    FUN_140c427a(local_2c,0x20);
  }
  uVar10 = (uint)*(byte *)(iVar3 + 100);
  local_48 = uVar10;
  if (uVar10 == 0) {
    while (uVar7 = uVar10, uVar9 == 0) {
      uVar6 = (uint)local_2d;
      if (uVar6 - 0x30 < 10) {
        FUN_140c4416(uVar1);
        uVar8 = 1;
LAB_140cebb0:
        FUN_140cbffc(local_38);
        local_34 = 0xffffffff;
        iVar4 = FUN_140c5f22(&local_38,&param_5);
        if (iVar4 == 0) {
          uVar9 = 1;
        }
        else {
          local_2d = FUN_140c5ee0(&local_38);
        }
      }
      else {
        if (((*(byte *)(iVar3 + 0x24) == uVar6) && (local_48 == 0)) && (uVar10 == 0)) {
          FUN_140c4416(uVar1,0x2e);
          local_48 = 1;
          goto LAB_140cebb0;
        }
        if (((*(byte *)(iVar3 + 0x5c) != uVar6) && (*(byte *)(iVar3 + 0x62) != uVar6)) ||
           ((uVar10 != 0 || (uVar8 == 0)))) break;
        FUN_140c4416(uVar1,0x65);
        FUN_140cbffc(local_38);
        local_34 = 0xffffffff;
        uVar10 = FUN_140c5f22(&local_38,&param_5);
        uVar7 = uVar8;
        if (uVar10 == 0) break;
        local_2d = FUN_140c5ee0(&local_38);
        uVar8 = uVar10;
        if (*(byte *)(iVar3 + 0x4b) == local_2d) {
          uVar5 = 0x2b;
LAB_140cec54:
          FUN_140c4416(uVar1,uVar5);
          goto LAB_140cebb0;
        }
        if (*(byte *)(iVar3 + 0x4a) == local_2d) {
          uVar5 = 0x2d;
          goto LAB_140cec54;
        }
        uVar9 = 0;
      }
    }
LAB_140cec7a:
    if (*(int *)(local_2c[0] + -0xc) != 0) {
      if ((local_48 == 0) && (uVar7 == 0)) {
        FUN_140c4416(local_2c,uVar11 & 0xff);
      }
      iVar3 = FUN_140d8b0c(*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc),local_2c);
      if (iVar3 == 0) {
        *param_8 = 4;
      }
    }
    *param_1 = local_38;
    param_1[1] = local_34;
    FUN_140c3fe4(local_2c);
    return param_1;
  }
  local_48 = 0;
  uVar7 = 0;
LAB_140ceb16:
  uVar6 = uVar7;
  bVar2 = local_2d;
  uVar7 = uVar6;
  if (uVar9 == 0) {
    if ((*(char *)(iVar3 + 0x10) == '\0') || (*(byte *)(iVar3 + 0x25) != local_2d)) {
      if (*(byte *)(iVar3 + 0x24) == local_2d) {
        if ((local_48 == 0) && (uVar6 == 0)) {
          if (*(int *)(local_2c[0] + -0xc) != 0) {
            FUN_140c4416(local_2c,uVar11 & 0xff);
          }
          FUN_140c4416(uVar1,0x2e);
          uVar6 = 0;
          local_48 = uVar10;
          goto LAB_140ceb5a;
        }
      }
      else {
        iVar4 = FUN_140c3d8c(iVar3 + 0x4e,10,&local_2d);
        if (iVar4 != 0) {
          uVar11 = uVar11 + 1;
          FUN_140c4416(uVar1,(iVar4 - (iVar3 + 0x4e)) + 0x30U & 0xff);
          uVar8 = uVar10;
          goto LAB_140ceb5a;
        }
        if ((((*(byte *)(iVar3 + 0x5c) == bVar2) || (*(byte *)(iVar3 + 0x62) == bVar2)) &&
            (uVar6 == 0)) && (uVar8 != 0)) {
          if ((*(int *)(local_2c[0] + -0xc) != 0) && (local_48 == 0)) {
            FUN_140c4416(local_2c,uVar11 & 0xff);
          }
          FUN_140c4416(uVar1,0x65);
          FUN_140cbffc(local_38);
          local_34 = 0xffffffff;
          uVar6 = FUN_140c5f22(&local_38,&param_5);
          uVar7 = uVar8;
          if (uVar6 != 0) goto code_r0x140ced6e;
        }
      }
    }
    else if ((local_48 == 0) && (uVar6 == 0)) {
      if (uVar11 != 0) {
        FUN_140c4416(local_2c,uVar11 & 0xff);
        uVar6 = 0;
        uVar11 = 0;
        goto LAB_140ceb5a;
      }
      FUN_140c3ff8(uVar1);
    }
  }
  goto LAB_140cec7a;
code_r0x140ced6e:
  local_2d = FUN_140c5ee0(&local_38);
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
    FUN_140c4416(uVar1,uVar5);
LAB_140ceb5a:
    FUN_140cbffc(local_38);
    local_34 = 0xffffffff;
    iVar4 = FUN_140c5f22(&local_38,&param_5);
    uVar7 = uVar6;
    uVar9 = uVar10;
    if (iVar4 != 0) {
      local_2d = FUN_140c5ee0(&local_38);
      uVar9 = 0;
    }
  }
  goto LAB_140ceb16;
}

