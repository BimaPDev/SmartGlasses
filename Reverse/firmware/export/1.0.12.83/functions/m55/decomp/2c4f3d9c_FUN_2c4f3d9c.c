/* FUN_2c4f3d9c @ 0x2c4f3d9c */

void FUN_2c4f3d9c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int local_8c;
  int local_88;
  undefined4 local_84;
  int *piStack_80;
  uint local_7c;
  int local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  uint local_5c;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  undefined1 auStack_3c [32];
  int local_1c;
  
  local_1c = *DAT_2c4f3f1c;
  if ((*(uint *)(param_1 + 0x3c) >> 0x14 & 0x700) != 0) {
    iVar3 = FUN_2c4f1b28(param_1,auStack_3c,param_1 + 0x40,0xffffffff,0xffffffff,0,0,0);
    if (iVar3 != 0) goto LAB_2c4f3e3c;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(uint *)(param_1 + 0x30) = DAT_2c4f3f28 & *(uint *)(param_1 + 0x30);
    local_5c = DAT_2c4f3f2c | *(uint *)(param_1 + 0x3c) & 0xffc00;
    local_58 = iVar3;
    iVar3 = FUN_2c4f384c(param_1,auStack_3c,&local_5c,1);
    if (iVar3 != 0) goto LAB_2c4f3e3c;
  }
  uVar2 = DAT_2c4f3f24;
  uVar1 = DAT_2c4f3f20;
  if ((*(uint *)(param_1 + 0x30) & 0x3ff) != 0) {
    local_7c = 0;
    local_68 = 0x1000000;
    local_60 = 1;
    local_64 = 0;
    local_78 = 0;
    uStack_74 = 0;
    local_70 = 0;
    local_6c = 0;
    do {
      iVar3 = FUN_2c4f1b28(param_1,&local_5c,&local_64,0xffffffff,0xffffffff,0,0,0);
      if (iVar3 != 0) goto LAB_2c4f3e3c;
      if (local_68._3_1_ == '\0') {
        uVar4 = FUN_2c4f20fc(param_1,&local_64,auStack_3c);
        if ((int)uVar4 < 0) {
          if (uVar4 != 0xfffffffe) goto LAB_2c4f3e3c;
        }
        else if (uVar4 != 0xfffffffe) {
          iVar3 = FUN_2c4f221c(param_1,auStack_3c,uVar1,uVar4,0,&local_8c,uVar4 & 0x3ff);
          if (-1 < iVar3) {
            if (((local_8c == local_64) && (local_88 == local_60)) ||
               ((local_8c == local_60 && (local_64 == local_88)))) goto LAB_2c4f3dfa;
            piStack_80 = &local_8c;
            local_84 = uVar2;
            iVar3 = FUN_2c4f384c(param_1,&local_7c,&local_84,1);
            if (iVar3 == 0) goto LAB_2c4f3e12;
          }
          goto LAB_2c4f3e3c;
        }
        iVar3 = FUN_2c4f3c8c(param_1,&local_7c,&local_5c);
        if (iVar3 != 0) goto LAB_2c4f3e3c;
      }
      else {
LAB_2c4f3dfa:
        local_7c = local_5c;
        local_78 = local_58;
        uStack_74 = uStack_54;
        local_70 = uStack_50;
        local_6c = local_4c;
        local_68 = uStack_48;
        local_64 = iStack_44;
        local_60 = iStack_40;
      }
LAB_2c4f3e12:
    } while ((local_64 != -1) && (local_60 != -1));
    uVar4 = (int)(char)-(char)*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = uVar4 & 0x7fffffff | (uint)((uVar4 & 0x3ff) != 0) << 0x1f;
  }
LAB_2c4f3e3c:
  if (*DAT_2c4f3f1c != local_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

