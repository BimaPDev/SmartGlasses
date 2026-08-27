/* FUN_140af908 @ 0x140af908 */

/* WARNING: Type propagation algorithm not settling */

void FUN_140af908(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint local_40;
  undefined2 local_3c;
  int local_38 [2];
  undefined2 local_30;
  int local_2c;
  
  uVar4 = DAT_140afa94;
  local_2c = *DAT_140afa70;
  FUN_1402a6e8(4,0x1b4,DAT_140afa78,DAT_140afa74,DAT_140afa6c,DAT_140afa94);
  local_38[1] = 0;
  local_30 = 0;
  iVar6 = FUN_140db784(param_1,local_38 + 1,6);
  uVar5 = DAT_140afa98;
  piVar3 = DAT_140afa7c;
  uVar2 = DAT_140afa78;
  uVar1 = DAT_140afa74;
  if (iVar6 == 0) {
    iVar6 = *DAT_140afa7c;
    if (*(int *)(iVar6 + 0x16c) == -1) {
      FUN_1402a6e8(4,0x1c0,DAT_140afa78,DAT_140afa74,DAT_140afa90,uVar4);
      goto LAB_140af9e6;
    }
    if (*(int *)(iVar6 + 0x16c) != 0) {
      uVar9 = 0;
      do {
        iVar6 = uVar9 * 0x118 + iVar6;
        local_40 = *(uint *)(iVar6 + 0x170);
        uVar7 = *(uint *)(iVar6 + 0x174);
        local_3c = (undefined2)uVar7;
        FUN_1402a6e8(4,0x1c8,uVar2,uVar1,uVar5,local_40 & 0xff,local_40 >> 8 & 0xff,
                     local_40 >> 0x10 & 0xff,local_40 >> 0x18,uVar7 & 0xff,(uVar7 & 0xffff) >> 8);
        local_38[0] = FUN_1404ce50(&local_40);
        iVar6 = *piVar3;
        uVar9 = uVar9 + 1 & 0xff;
      } while (uVar9 < *(uint *)(iVar6 + 0x16c));
      if (local_38[0] != 0) goto LAB_140af9ca;
    }
LAB_140afa0e:
    FUN_1402a6e8(4,0x1d2,DAT_140afa78,DAT_140afa74,DAT_140afa80,uVar4);
    uVar2 = DAT_140afa8c;
    uVar1 = DAT_140afa88;
    iVar6 = DAT_140afa84;
    iVar8 = DAT_140afa84 + 0x14c;
    *(int *)(DAT_140afa84 + 0x14c) = iVar8;
    *(int *)(iVar6 + 0x150) = iVar8;
    FUN_140e5658(uVar1,0,0xf8);
    FUN_1402a6e8(4,0x1d5,DAT_140afa78,DAT_140afa74,uVar2,uVar4,uVar1);
    local_38[0] = 0;
  }
  else {
    FUN_140e5278(&local_40,param_1,param_2);
    local_38[0] = FUN_1404ce50(&local_40);
    if (local_38[0] == 0) goto LAB_140afa0e;
  }
LAB_140af9ca:
  FUN_140a49fc(0x33,local_38,4);
LAB_140af9e6:
  if (*DAT_140afa70 == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

