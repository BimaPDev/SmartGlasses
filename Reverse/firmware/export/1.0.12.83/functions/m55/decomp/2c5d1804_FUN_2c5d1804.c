/* FUN_2c5d1804 @ 0x2c5d1804 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5d1804(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined1 auStack_58 [24];
  int iStack_40;
  undefined4 uStack_28;
  undefined4 uStack_18;
  int iStack_14;
  
  iStack_14 = *DAT_2c5d1920;
  if (param_2 == 0) {
    if (param_3 == 0) {
      FUN_2c606abc(*(undefined4 *)(param_1 + 4),1,0,0);
      FUN_2c606e74(*(undefined4 *)(param_1 + 4),0xff,0);
      FUN_2c5c685c();
      iVar2 = FUN_2c5c6d5c();
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,_LAB_2c5d1944,0x430,_LAB_2c5d1940,_LAB_2c5d193c);
      }
      FUN_2c5d01a0(param_1);
      if (*DAT_2c5d1920 != iStack_14) goto LAB_2c5d191a;
      FUN_2c5c685c();
      iVar2 = FUN_2c5c6b84();
      if (iVar2 == 0) {
        puVar5 = (uint *)(param_1 + 0x30);
        uVar6 = 0x29;
        uVar1 = registry_lookup(0x1032);
LAB_2c5d160a:
        uVar3 = *puVar5;
        uVar4 = puVar5[1];
        if ((int)(uint)(uVar3 < 3) <= (int)uVar4) goto LAB_2c5d1616;
      }
      else {
        FUN_2c5229e8();
        puVar5 = (uint *)(param_1 + 0x38);
        iVar2 = FUN_2c522634();
        if (iVar2 == 0) {
          uVar6 = 0x2a;
          uVar1 = registry_lookup(0x1033);
          goto LAB_2c5d160a;
        }
        uVar6 = 0x2a;
        uVar1 = registry_lookup(0x1064);
        uVar3 = *puVar5;
        uVar4 = *(uint *)(param_1 + 0x3c);
        if ((int)(uint)(uVar3 < 3) <= (int)uVar4) goto LAB_2c5d1616;
      }
      FUN_2c5d1550(param_1,uVar1);
      uVar1 = FUN_2c62bdd8(DAT_2c5d1684,3000,param_1);
      *(undefined4 *)(param_1 + 0x1c) = uVar1;
      FUN_2c62be70(uVar1,1);
      uVar3 = *puVar5;
      uVar4 = puVar5[1];
LAB_2c5d1616:
      *puVar5 = uVar3 + 1;
      uStack_18 = 1;
      puVar5[1] = uVar4 + (0xfffffffe < uVar3);
      FUN_2c5e317c(uVar6);
      return;
    }
    FUN_2c5cfd9c(auStack_58,*(undefined4 *)(param_1 + 4),0,0xff,_LAB_2c5d1934,
                 PTR_LAB_2c5dff74_1_2c5d192c,PTR_LAB_2c5e1688_1_2c5d1930,PTR_LAB_2c5dfeb4_1_2c5d1924
                 ,0);
    uStack_28 = _LAB_2c5d1938;
    iStack_40 = param_1;
    FUN_2c62e8ec(auStack_58);
  }
  else if (param_3 == 0) {
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 4),1);
    FUN_2c606e74(*(undefined4 *)(param_1 + 4),0,0);
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_2c62be1c();
      *(undefined4 *)(param_1 + 0x1c) = 0;
      if (*(int *)(param_1 + 0xc) != 0) {
        FUN_2c6043d8();
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
    }
    func_0x2c5d16dc(param_1);
    iVar2 = *(int *)(param_1 + 0x18);
    if (iVar2 != 0) {
      if (*DAT_2c5d1920 == iStack_14) {
        *(byte *)(iVar2 + 0x14) = *(byte *)(iVar2 + 0x14) | 1;
        return;
      }
      goto LAB_2c5d191a;
    }
  }
  else {
    FUN_2c5cfd9c(auStack_58,*(undefined4 *)(param_1 + 4),0xff,0,0,PTR_LAB_2c5dff74_1_2c5d192c,
                 PTR_LAB_2c5e17cc_1_2c5d1928,PTR_LAB_2c5dfeb4_1_2c5d1924,0);
    iStack_40 = param_1;
    FUN_2c62e8ec(auStack_58);
  }
  if (*DAT_2c5d1920 == iStack_14) {
    return;
  }
LAB_2c5d191a:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

