/* FUN_14040658 @ 0x14040658 */

void FUN_14040658(undefined4 param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_r1;
  undefined4 uVar6;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  uint uVar7;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined1 local_130 [4];
  byte local_12c;
  undefined1 local_12b;
  uint local_24;
  
  uVar5 = DAT_140407e8;
  local_24 = *DAT_140407c4;
  uVar6 = DAT_140407e8;
  FUN_1402a6e8(4,0x3bb,DAT_140407cc,DAT_140407c8,DAT_140407c0,DAT_140407e8);
  iVar2 = DAT_140407d0;
  bVar1 = *param_2;
  uVar7 = (uint)bVar1;
  if (*(char *)(DAT_140407d0 + uVar7 * 0x38 + 0x43e) == '\x02') {
    FUN_14042b44(uVar7);
  }
  if (*(char *)(iVar2 + uVar7 * 0x38 + 0x443) == '\0') {
    FUN_1402a6e8(4,0x3c6,DAT_140407cc,DAT_140407c8,DAT_140407e0,uVar5,0);
    uVar5 = 2;
    uVar6 = extraout_r1_00;
  }
  else {
    FUN_1402a6e8(4,0x3cb,DAT_140407cc,DAT_140407c8,DAT_140407d4,uVar6);
    pbVar3 = (byte *)FUN_14074378(0xe5a,param_4,0,0x13);
    pbVar3[1] = 0;
    *pbVar3 = *param_2;
    local_150 = 0;
    FUN_14043500(uVar7,&local_150);
    iVar4 = FUN_1409f8c0(uVar7 * 0x38 + iVar2 + 0x44a,&local_14c,*(undefined2 *)(param_2 + 2));
    if (iVar4 == 0) {
      if (*(char *)(iVar2 + (uint)*param_2 * 0x38 + 0x43e) != '\x02') {
        FUN_1402a6e8(4,0x3ea,DAT_140407cc,DAT_140407c8,DAT_140407e4,DAT_140407d8);
        thunk_FUN_14074168(pbVar3);
        uVar5 = 0;
        uVar6 = extraout_r1_01;
        goto LAB_1404073e;
      }
      FUN_1402a6e8(4,0x3e4,DAT_140407cc,DAT_140407c8,DAT_140407dc,DAT_140407d8);
    }
    else {
      pbVar3[1] = 1;
      pbVar3[0x12] = 0x10;
      *(undefined4 *)(pbVar3 + 2) = local_14c;
      *(undefined4 *)(pbVar3 + 6) = uStack_148;
      *(undefined4 *)(pbVar3 + 10) = uStack_144;
      *(undefined4 *)(pbVar3 + 0xe) = uStack_140;
    }
    FUN_140743d0(pbVar3);
    local_12b = pbVar3[1] == 1;
    local_130[0] = 0x1a;
    local_12c = bVar1;
    FUN_14041ad8(local_130,0);
    FUN_14040340(uVar7);
    uVar5 = 0;
    uVar6 = extraout_r1;
  }
LAB_1404073e:
  if ((*DAT_140407c4 ^ local_24) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(uVar5,uVar6,*DAT_140407c4 ^ local_24,0);
}

