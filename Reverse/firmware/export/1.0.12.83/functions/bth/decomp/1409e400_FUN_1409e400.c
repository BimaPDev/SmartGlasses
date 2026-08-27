/* FUN_1409e400 @ 0x1409e400 */

void FUN_1409e400(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  uint local_14;
  
  puVar1 = DAT_1409e59c;
  local_14 = *DAT_1409e57c;
  local_30 = 0;
  uStack_2c = 0;
  local_28 = 0;
  uStack_24 = 0;
  local_20 = 0;
  uStack_1c = 0;
  local_18 = 0;
  uVar6 = DAT_1409e5b0;
  if ((*(int *)(param_1 + 8) != 1) && (uVar6 = DAT_1409e580, *(int *)(param_1 + 8) == 2)) {
    uVar6 = DAT_1409e584;
  }
  uVar7 = (uint)*(byte *)(param_1 + 6);
  uVar4 = DAT_1409e58c;
  if (*(byte *)(param_1 + 0x10) < 6) {
    uVar4 = *(undefined4 *)(DAT_1409e588 + (uint)*(byte *)(param_1 + 0x10) * 4);
  }
  FUN_1402a6e8(4,0x1c9,DAT_1409e594,DAT_1409e598,DAT_1409e590,uVar6,uVar7,uVar4);
  FUN_1402a9fc(DAT_1409e5a0,1,6,param_1);
  uVar2 = FUN_1409e86c(*puVar1);
  if (uVar2 < 2) {
    FUN_1402a6e8(4,0x1d0,DAT_1409e594,DAT_1409e598,DAT_1409e5b4,uVar6,uVar7,uVar4);
    uVar4 = 0;
    uVar6 = extraout_r1_00;
  }
  else {
    puVar3 = (undefined4 *)FUN_1409e7c0(*puVar1);
    uVar4 = DAT_1409e5b0;
    if ((puVar3[2] != 1) && (uVar4 = DAT_1409e580, puVar3[2] == 2)) {
      uVar4 = DAT_1409e584;
    }
    uVar7 = (uint)*(byte *)((int)puVar3 + 6);
    uVar8 = DAT_1409e58c;
    if (*(byte *)(puVar3 + 4) < 6) {
      uVar8 = *(undefined4 *)(DAT_1409e588 + (uint)*(byte *)(puVar3 + 4) * 4);
    }
    FUN_1402a6e8(4,0x1d4,DAT_1409e594,DAT_1409e598,DAT_1409e5a4,uVar4,uVar7,uVar8);
    FUN_1402a9fc(DAT_1409e5a0,1,6,puVar3);
    uVar9 = FUN_1409e7c0(*puVar1);
    uVar6 = (undefined4)((ulonglong)uVar9 >> 0x20);
    iVar5 = (int)uVar9;
    if (((*(char *)(iVar5 + 6) == *(char *)(param_1 + 6)) &&
        (*(int *)(param_1 + 8) == *(int *)(iVar5 + 8))) &&
       (*(char *)(iVar5 + 0x10) == *(char *)(param_1 + 0x10))) {
      local_30 = *puVar3;
      uStack_2c = puVar3[1];
      local_28 = puVar3[2];
      uStack_24 = puVar3[3];
      local_20 = puVar3[4];
      uStack_1c = puVar3[5];
      local_18 = puVar3[6];
      FUN_1402a6e8(4,0x1db,DAT_1409e594,DAT_1409e598,DAT_1409e5a8,uVar4,uVar7,uVar8);
      FUN_1409e854(*puVar1);
      iVar5 = FUN_1409e7c0(*puVar1);
      FUN_1409dec8(&local_30);
      (**(code **)(iVar5 + 0x18))(*(undefined1 *)(iVar5 + 6),*(undefined1 *)(iVar5 + 0x10),1);
      uVar6 = FUN_1409e86c(*puVar1);
      FUN_1402a6e8(4,0x1e7,DAT_1409e594,DAT_1409e598,DAT_1409e5ac,uVar6);
      FUN_1409de74(*puVar1);
      uVar4 = 1;
      uVar6 = extraout_r1;
    }
    else {
      uVar4 = 0;
    }
  }
  if ((*DAT_1409e57c ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(uVar4,uVar6,*DAT_1409e57c ^ local_14,0);
}

