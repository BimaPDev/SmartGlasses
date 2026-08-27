/* FUN_2c0121ec @ 0x2c0121ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0121ec(int param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  undefined4 uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 unaff_lr;
  ushort uStack_1e;
  int iStack_1c;
  
  puVar3 = DAT_2c0124dc;
  iStack_1c = *DAT_2c0124d8;
  iVar9 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar9 = getBasePriority();
  }
  if (iVar9 != 0x40) {
    *DAT_2c0124dc = 0x2c012208;
    puVar3[1] = unaff_lr;
  }
  pbVar4 = _DAT_2c0124ec;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  if (param_1 == 0) {
    FUN_2c00b820(4,0x110f,DAT_2c0124f0,_DAT_2c0124e8,_DAT_2c0124e4,_DAT_2c0124fc);
    func_0x2c013d3c();
    func_0x2c013b5c(0);
    if ((*pbVar4 == 0) || (*pbVar4 == 3)) {
      uVar5 = 0x6b;
    }
    else {
      uVar5 = 0x10c;
    }
    FUN_2c008e4c(uVar5,&uStack_1e);
    uStack_1e = uStack_1e & 0xfe7f;
    if ((*pbVar4 == 0) || (*pbVar4 == 3)) {
      uVar5 = 0x6b;
    }
    else {
      uVar5 = 0x10c;
    }
    FUN_2c008f74(uVar5);
    if ((*pbVar4 == 0) || (*pbVar4 == 3)) {
      uVar5 = 0x6a;
    }
    else {
      uVar5 = 0x10b;
    }
    FUN_2c008f74(uVar5,4);
    uStack_1e = uStack_1e | 0x180;
    if ((*pbVar4 == 0) || (*pbVar4 == 3)) {
      uVar5 = 0x6b;
    }
    else {
      uVar5 = 0x10c;
    }
    FUN_2c008f74(uVar5);
    FUN_2c013870(0x80);
    FUN_2c00b820(4,0x1123,DAT_2c0124f0,_DAT_2c0124e8,_DAT_2c012500);
  }
  else {
    FUN_2c00b820(4,0x110f,DAT_2c0124f0,_DAT_2c0124e8,_DAT_2c0124e4,_DAT_2c0124e0);
    func_0x2c013d3c();
    func_0x2c013b5c(0);
  }
  FUN_2c007098(7);
  bVar1 = *pbVar4;
  *_DAT_2c0124f4 = *_DAT_2c0124f4 | 0x8000;
  if (bVar1 - 1 < 2) {
    func_0x2c00d028(1);
    FUN_2c00f404(3,6);
    FUN_2c00f110(3,1,1,1,1);
    FUN_2c013884(0x708);
    if (*pbVar4 - 1 < 2) {
      FUN_2c013870(0x50);
    }
    FUN_2c008e4c(0x4b,&uStack_1e);
    uStack_1e = uStack_1e & 0xfffc | 2;
    FUN_2c008f74(0x4b);
    func_0x2c00d028(0);
  }
  else {
    FUN_2c008e4c(0x48,&uStack_1e);
    if (1 < *pbVar4 - 1) {
      FUN_2c008e4c(0xe,&uStack_1e);
      uStack_1e = uStack_1e & 0xe0ff | 0x600;
      FUN_2c008f74(0xe);
      if (1 < *pbVar4 - 1) {
        FUN_2c008e4c(0xe,&uStack_1e);
        uStack_1e = uStack_1e | 0x6000;
        FUN_2c008f74(0xe);
      }
    }
    FUN_2c013884(0x708);
    FUN_2c008e4c(0x4b,&uStack_1e);
    uStack_1e = uStack_1e & 0xfffc | 2;
    FUN_2c008f74(0x4b);
  }
  if (*_DAT_2c0124f8 != '\x01') {
    func_0x2c00fa58(1);
  }
  FUN_2c013870(0x10);
  func_0x2c00e27c();
  FUN_2c008f74(0,0xcafe);
  FUN_2c008f74(0,0x5fee);
  FUN_2c013870(9);
  FUN_2c008f74(0x8000,0xcafe);
  FUN_2c008f74(0x8000,0x5fee);
  FUN_2c013870(9);
  func_0x2c012160(1);
  if (*pbVar4 == 2) {
    func_0x2c00dc0c();
  }
  func_0x2c00e11c();
  if (param_1 == 0) goto LAB_2c012338;
  if (*pbVar4 == 2) {
    FUN_2c008e4c(0x11,&uStack_1e);
    uVar7 = (uStack_1e & 3) >> 1;
LAB_2c0125c0:
    if (uVar7 == 0) goto LAB_2c012422;
    func_0x2c01327c();
  }
  else {
    if (*pbVar4 == 1) {
      FUN_2c008e4c(0x128,&uStack_1e);
      uVar7 = uStack_1e & 1;
      goto LAB_2c0125c0;
    }
LAB_2c012422:
    func_0x2c0110a0(3000);
    if (*_DAT_2c012504 != 0) {
      func_0x2c00d790();
    }
  }
  if (*pbVar4 == 2) {
    FUN_2c008e4c(0x11,&uStack_1e);
    uStack_1e = uStack_1e & 0xfffe;
    FUN_2c008f74(0x11);
  }
  FUN_2c008e4c(5,&uStack_1e);
  uStack_1e = uStack_1e | 0x100;
  FUN_2c008f74(5);
  FUN_2c008e4c(0x44,&uStack_1e);
  if ((*pbVar4 == 0) || (*pbVar4 == 3)) {
    uVar6 = 0xbfff;
  }
  else {
    uVar6 = 0xff7f;
  }
  uStack_1e = uVar6 & uStack_1e;
  FUN_2c008f74(0x44);
  FUN_2c008e4c(0x4f,&uStack_1e);
  if ((*pbVar4 - 1 < 2) && (*_DAT_2c0125e4 != '\0')) {
    uStack_1e = uStack_1e | 0x40;
  }
  else {
    uStack_1e = uStack_1e | 1;
  }
  iVar8 = 100;
  do {
    FUN_2c008f74(0x4f,uStack_1e);
    FUN_2c013870(0x50);
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  FUN_2c013870(800);
  FUN_2c00b820(4,0x1194,DAT_2c0124f0,_DAT_2c0124e8,_DAT_2c012508);
  FUN_2c013870(0x50);
LAB_2c012338:
  FUN_2c008490();
  if (iVar9 == 0) {
    *DAT_2c0124dc = 0xffffffff;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar9);
  }
  if (*DAT_2c0124d8 != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c0084a8();
  }
  return;
}

