/* FUN_1009d4c8 @ 0x1009d4c8 */

undefined4 FUN_1009d4c8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,ushort *param_4)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint in_fpscr;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  uint local_a4;
  undefined4 local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 auStack_78 [76];
  
  uVar3 = FUN_1009dbd4();
  bVar1 = *(byte *)((int)param_4 + 0x11);
  uVar6 = 0x1701;
  uVar7 = 0x1801;
  if ((bVar1 & 0xc) == 0) {
    uVar6 = 0x1700;
    uVar7 = 0x1800;
  }
  if (*(int *)(param_4 + 4) == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = false;
    if (*(int *)(param_4 + 6) != 0) {
      bVar2 = true;
    }
  }
  local_9c = DAT_1009d724;
  local_98 = DAT_1009d724;
  if (bVar2) {
    local_9c = (float)VectorSignedToFloat(*(int *)(param_4 + 4),(byte)(in_fpscr >> 0x16) & 3);
    local_98 = (float)VectorSignedToFloat(*(undefined4 *)(param_4 + 6),(byte)(in_fpscr >> 0x16) & 3)
    ;
    uVar5 = 2;
    fVar12 = local_9c * 0.5;
  }
  else {
    uVar5 = 0;
    fVar12 = DAT_1009d724;
  }
  if (((byte)param_4[8] < 0xfd) || (local_a4 = bVar1 & 3, (bVar1 & 3) != 0)) {
    local_a4 = FUN_1012cf78(bVar1 & 3);
  }
  fVar10 = (float)VectorSignedToFloat(param_3[3],(byte)(in_fpscr >> 0x16) & 3);
  fVar11 = (float)VectorSignedToFloat(param_3[2],(byte)(in_fpscr >> 0x16) & 3);
  local_90 = *param_1;
  local_8c = param_1[1];
  local_88 = 4;
  local_84 = *param_2;
  uVar9 = VectorSignedToFloat(param_3[1],(byte)(in_fpscr >> 0x16) & 3);
  local_80 = param_2[1];
  uVar13 = *(undefined4 *)(param_4 + 2);
  uVar8 = VectorSignedToFloat(*param_3,(byte)(in_fpscr >> 0x16) & 3);
  local_94 = 2;
  local_7c = 0;
  iVar4 = FUN_1010ef00(uVar8,uVar9,fVar11 + 1.0,fVar10 + 1.0,auStack_78,2,0,0x1c,&local_94);
  if (iVar4 != 0) {
    FUN_10094174(3,DAT_1009d730,0x67,DAT_1009d72c,DAT_1009d728,iVar4);
    return 0;
  }
  iVar4 = FUN_1012cf1a(&local_a0,
                       ((int)((uint)(*(byte *)((int)param_4 + 1) >> 3) * 0x107 + 7) >> 5 & 0xffU) <<
                       0x10 | ((int)(((*param_4 & 0x7ff) >> 5) * 0x103 + 3) >> 6 & 0xffU) << 8 |
                       (int)(((byte)*param_4 & 0x1f) * 0x107 + 7) >> 5 & 0xffU | 0xff000000,
                       (byte)param_4[8],0x400);
  if (iVar4 != 1) {
    return 0;
  }
  iVar4 = FUN_1013b78a(auStack_78,1);
  if (iVar4 == 0) {
    uVar8 = VectorSignedToFloat(uVar13,(byte)(in_fpscr >> 0x16) & 3);
    iVar4 = FUN_10112418(uVar8,0x41000000,fVar12,auStack_78,uVar6,uVar7,&local_9c,uVar5,local_a0);
    if (iVar4 != 0) {
      uVar3 = 0x74;
      uVar6 = DAT_1009d738;
LAB_1009d684:
      FUN_10094174(3,DAT_1009d730,uVar3,DAT_1009d72c,uVar6,iVar4);
      return 0;
    }
    iVar4 = FUN_10111324(auStack_78);
    if (iVar4 == 0) {
      FUN_1010e930(*param_3,param_3[1],param_3[2] + 1,param_3[3] + 1);
      iVar4 = FUN_1010efdc(uVar3,auStack_78,0x1901,0,local_a4,local_a0);
      if (iVar4 == 0) {
        iVar4 = FUN_1009dc5c(param_3);
        if (iVar4 != 1) {
          FUN_1013b79e(auStack_78);
          return 0;
        }
        FUN_1010e930(0,0,0x7fffffff);
        iVar4 = FUN_1013b79e(auStack_78);
        if (iVar4 == 0) {
          return 1;
        }
        uVar3 = 0x8c;
        uVar6 = DAT_1009d744;
        goto LAB_1009d684;
      }
      FUN_1013b79e(auStack_78);
      uVar3 = 0x81;
      uVar6 = DAT_1009d740;
    }
    else {
      FUN_1013b79e(auStack_78);
      uVar3 = 0x79;
      uVar6 = DAT_1009d73c;
    }
  }
  else {
    uVar3 = 0x70;
    uVar6 = DAT_1009d734;
  }
  FUN_10094174(3,DAT_1009d730,uVar3,DAT_1009d72c,uVar6,iVar4);
  return 0;
}

