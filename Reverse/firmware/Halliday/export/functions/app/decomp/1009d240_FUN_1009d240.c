/* FUN_1009d240 @ 0x1009d240 */

undefined4
FUN_1009d240(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4,char param_5,
            short *param_6)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  short *psVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint in_fpscr;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 local_9c;
  undefined4 uStack_98;
  int local_94;
  int local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined2 local_84;
  undefined2 local_82;
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined2 local_78;
  undefined2 local_76;
  undefined2 local_74;
  undefined1 auStack_70 [80];
  
  iVar8 = FUN_1009dc20(param_2,param_5);
  if (iVar8 != 1) {
    return 0;
  }
  FUN_1009ce94(param_3);
  sVar3 = param_6[1];
  sVar4 = *param_6;
  if ((sVar3 != 0x100) || (sVar4 != 0)) {
    uVar11 = VectorSignedToFloat(*(undefined4 *)(param_6 + 4),(byte)(in_fpscr >> 0x16) & 3);
    uVar9 = VectorSignedToFloat(*(undefined4 *)(param_6 + 2),(byte)(in_fpscr >> 0x16) & 3);
    FUN_1013b722(uVar9,uVar11,DAT_1009d314);
    if (sVar4 != 0) {
      fVar10 = (float)VectorSignedToFloat((int)*param_6,(byte)(in_fpscr >> 0x16) & 3);
      FUN_1010ee7c(fVar10 / 10.0,DAT_1009d314);
    }
    if (sVar3 != 0x100) {
      uVar9 = VectorSignedFixedToFloat((uint)(ushort)param_6[1],0x20,8);
      FUN_1013b756(uVar9,DAT_1009d314);
    }
    fVar10 = (float)VectorSignedToFloat(*(undefined4 *)(param_6 + 4),(byte)(in_fpscr >> 0x16) & 3);
    fVar13 = (float)VectorSignedToFloat(*(undefined4 *)(param_6 + 2),(byte)(in_fpscr >> 0x16) & 3);
    FUN_1013b722(DAT_1009d318 - fVar13,DAT_1009d318 - fVar10,DAT_1009d314);
    *DAT_1009d31c = 0x2000;
  }
  bVar1 = *(byte *)(param_6 + 8);
  bVar2 = *(byte *)((int)param_6 + 0xf);
  sVar3 = param_6[6];
  uVar9 = FUN_1009dbd4();
  iVar8 = FUN_1009dbe4();
  if (param_5 != '\x06') {
    if (((bVar2 < 0xfd) || ((bVar1 & 0xf) != 0)) || (iVar6 = FUN_1012ce84(), iVar6 != 0))
    goto LAB_1009cefc;
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_1009dc98(1);
    if (iVar6 == 0) {
      return 0;
    }
LAB_1009cefc:
    *(undefined1 *)(iVar8 + 0x56) = 1;
    iVar6 = FUN_1012cf78(bVar1 & 0xf);
    if ((*(short *)(iVar8 + 0xe) == 0x40a) || (bVar2 < 0xfd)) {
      *(undefined2 *)(iVar8 + 0x54) = 0x1f01;
      if (*(short *)(iVar8 + 0xe) == 0x40a) {
        uVar7 = FUN_1012cce8(sVar3);
      }
      else {
        uVar7 = 0xffffffff;
      }
      uVar7 = (uVar7 & 0xff) << 0x10 | (uVar7 & 0xffffff) >> 0x10 | (uint)bVar2 << 0x18 |
              uVar7 & 0xff00;
      goto LAB_1009cf44;
    }
  }
  uVar7 = 0xffffffff;
LAB_1009cf44:
  FUN_1010e930(*param_1,param_1[1],param_1[2] + 1,param_1[3] + 1);
  psVar5 = DAT_1009d0b8;
  local_9c = 0;
  uStack_98 = 0;
  local_94 = (param_3[2] + 1) - *param_3;
  local_90 = (param_3[3] + 1) - param_3[1];
  if ((*DAT_1009d0b8 == 0) || (iVar6 != 0)) {
    iVar8 = FUN_1010dd20(uVar9,iVar8,&local_9c,DAT_1009d0b0,iVar6,uVar7,*DAT_1009d0b8);
  }
  else {
    uVar12 = VectorSignedToFloat(local_90,(byte)(in_fpscr >> 0x16) & 3);
    local_8c = 2;
    uStack_88 = 0x40000;
    local_84 = (undefined2)local_94;
    local_7c = (undefined2)local_90;
    uVar11 = VectorSignedToFloat(local_94,(byte)(in_fpscr >> 0x16) & 3);
    local_82 = 0;
    local_80 = 4;
    local_7a = 4;
    local_78 = 0;
    local_74 = 0;
    local_7e = local_84;
    local_76 = local_7c;
    iVar6 = FUN_1010ef00(DAT_1009d0a0,DAT_1009d0a0,uVar11,uVar12,auStack_70,1,2,0x1a,&local_8c);
    if (iVar6 != 0) {
      FUN_10094174(3,DAT_1009d0ac,0x12e,DAT_1009d0a8,DAT_1009d0a4,iVar6);
      return 0;
    }
    iVar8 = FUN_1010f628(uVar9,auStack_70,0x1900,DAT_1009d0b0,iVar8,DAT_1009d0b0,0,0x1d01,0,uVar7,
                         *psVar5);
  }
  if (iVar8 == 0) {
    iVar8 = FUN_1009dc5c(param_1);
    if (iVar8 == 1) {
      FUN_1012cd24();
      if (param_5 == '\x06') {
        FUN_1009dc98(0);
        return 1;
      }
      return 1;
    }
  }
  else {
    FUN_10094174(3,DAT_1009d0ac,0x13a,DAT_1009d0a8,DAT_1009d0b4,iVar8);
  }
  return 0;
}

