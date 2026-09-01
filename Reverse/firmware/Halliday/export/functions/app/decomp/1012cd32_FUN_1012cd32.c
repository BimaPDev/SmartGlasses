/* FUN_1012cd32 @ 0x1012cd32 */

undefined4
FUN_1012cd32(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4,char param_5,
            int param_6)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  short *psVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint in_fpscr;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined2 uStack_80;
  undefined2 uStack_7e;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined2 uStack_74;
  undefined1 auStack_70 [88];
  
  iVar8 = FUN_1009dc20(param_2,param_5);
  if (iVar8 != 1) {
    return 0;
  }
  FUN_1009ce94(param_3);
  cVar1 = *(char *)(param_6 + 0x19);
  bVar2 = *(byte *)(param_6 + 0x18);
  uVar3 = *(undefined2 *)(param_6 + 8);
  uVar5 = FUN_1009dbd4();
  iVar8 = FUN_1009dbe4();
  if (param_5 != '\x06') {
    if (((bVar2 < 0xfd) || (cVar1 != '\0')) || (iVar6 = FUN_1012ce84(), iVar6 != 0))
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
    iVar6 = FUN_1012cf78(cVar1);
    if ((*(short *)(iVar8 + 0xe) == 0x40a) || (bVar2 < 0xfd)) {
      *(undefined2 *)(iVar8 + 0x54) = 0x1f01;
      if (*(short *)(iVar8 + 0xe) == 0x40a) {
        uVar7 = FUN_1012cce8(uVar3);
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
  psVar4 = DAT_1009d0b8;
  uStack_9c = 0;
  uStack_98 = 0;
  iStack_94 = (param_3[2] + 1) - *param_3;
  iStack_90 = (param_3[3] + 1) - param_3[1];
  if ((*DAT_1009d0b8 == 0) || (iVar6 != 0)) {
    iVar8 = FUN_1010dd20(uVar5,iVar8,&uStack_9c,DAT_1009d0b0,iVar6,uVar7,*DAT_1009d0b8);
  }
  else {
    uVar10 = VectorSignedToFloat(iStack_90,(byte)(in_fpscr >> 0x16) & 3);
    uStack_8c = 2;
    uStack_88 = 0x40000;
    uStack_84 = (undefined2)iStack_94;
    uStack_7c = (undefined2)iStack_90;
    uVar9 = VectorSignedToFloat(iStack_94,(byte)(in_fpscr >> 0x16) & 3);
    uStack_82 = 0;
    uStack_80 = 4;
    uStack_7a = 4;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_7e = uStack_84;
    uStack_76 = uStack_7c;
    iVar6 = FUN_1010ef00(DAT_1009d0a0,DAT_1009d0a0,uVar9,uVar10,auStack_70,1,2,0x1a,&uStack_8c);
    if (iVar6 != 0) {
      FUN_10094174(3,DAT_1009d0ac,0x12e,DAT_1009d0a8,DAT_1009d0a4,iVar6);
      return 0;
    }
    iVar8 = FUN_1010f628(uVar5,auStack_70,0x1900,DAT_1009d0b0,iVar8,DAT_1009d0b0,0,0x1d01,0,uVar7,
                         *psVar4);
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

