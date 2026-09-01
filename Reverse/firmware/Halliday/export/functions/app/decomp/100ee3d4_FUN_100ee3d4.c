/* FUN_100ee3d4 @ 0x100ee3d4 */

void FUN_100ee3d4(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  short sVar10;
  int iVar11;
  short local_2c;
  short local_2a;
  short local_28;
  short local_26;
  short local_24;
  undefined *local_20;
  
  sVar10 = *(short *)(param_1 + 0x48);
  iVar11 = param_1 + 0x20;
  if (sVar10 < 0) {
    sVar10 = -sVar10;
  }
  iVar3 = FUN_100f15c0(*(undefined2 *)(param_1 + 0x26));
  puVar6 = PTR_DAT_100ee564;
  if (iVar3 == 0) {
    uVar7 = (uint)*(char *)(param_1 + 0x21);
    puVar6 = PTR_DAT_100ee560;
    if ((int)((uint)*(byte *)(param_1 + 0x4e) << 0x1e) < 0) {
      if (99 < sVar10) {
LAB_100ee518:
        puVar6 = PTR_DAT_100ee548;
      }
    }
    else {
      uVar7 = (uint)(byte)PTR_DAT_100ee564[uVar7];
      if (sVar10 < 100) goto LAB_100ee518;
    }
    uVar7 = (uint)(byte)puVar6[uVar7];
    goto LAB_100ee41e;
  }
  sVar2 = *(short *)(param_1 + 0x2a);
  if (sVar2 == *(short *)(param_1 + 0x2c)) {
    uVar7 = 0xffffffff;
    goto LAB_100ee41e;
  }
  puVar4 = PTR_DAT_100ee560;
  if (*(short *)(param_1 + 0x26) == sVar2) {
    if (sVar10 < 10) {
      uVar7 = (uint)*(char *)(param_1 + 0x21);
    }
    else {
      FUN_10139392(iVar11);
      uVar7 = (uint)*(char *)(param_1 + 0x21);
      puVar4 = PTR_DAT_100ee548;
    }
LAB_100ee41a:
    bVar1 = puVar4[uVar7];
  }
  else {
    if (sVar2 != 0) {
      if (sVar10 < 10) {
        uVar7 = (uint)(byte)PTR_DAT_100ee564[*(char *)(param_1 + 0x21)];
      }
      else {
        FUN_10139392(iVar11);
        uVar7 = (uint)(byte)puVar6[*(char *)(param_1 + 0x21)];
        puVar4 = PTR_DAT_100ee548;
      }
      goto LAB_100ee41a;
    }
    *(short *)(param_1 + 0x2a) = *(short *)(param_1 + 0x2c);
    puVar4 = PTR_DAT_100ee548;
    bVar1 = puVar6[*(char *)(param_1 + 0x21)];
    *(undefined2 *)(param_1 + 0x2c) = 0;
    bVar1 = puVar4[bVar1];
  }
  uVar7 = (uint)bVar1;
  iVar3 = 0;
LAB_100ee41e:
  FUN_100a5b78(((int)PTR_DAT_100ee550 - (int)PTR_DAT_100ee54c) * 0x20 & 0xff00U | 0x1720037,
               PTR_s_gesture_scroll_end_100ee558,PTR_s_gesture_end__d__view__u__related_100ee554,
               (int)*(char *)(param_1 + 0x21),*(undefined2 *)(param_1 + 0x2a),
               *(undefined2 *)(param_1 + 0x2c),(int)*(short *)(param_1 + 0x48),
               (int)*(short *)(param_1 + 0x34),(int)*(short *)(param_1 + 0x36),uVar7);
  sVar10 = *(short *)(param_1 + 0x2a);
  if (sVar10 != 0) {
    FUN_1011ea48(&local_2c,0,0x14);
    if (iVar3 == 0) {
      FUN_100f1e08(sVar10,&local_2c,uVar7 & 0xff);
    }
    else {
      FUN_100f202c(sVar10,&local_2c,iVar11);
    }
    if (local_24 == 0) {
      uVar8 = (int)local_28 - (int)local_2c;
      uVar5 = (int)local_26 - (int)local_2a;
      if ((int)uVar8 < 0) {
        uVar8 = -uVar8;
      }
      if ((int)uVar5 < 0) {
        uVar5 = -uVar5;
      }
      uVar9 = uVar8 & 0xffff;
      if ((uVar8 & 0xffff) < (uVar5 & 0xffff)) {
        uVar9 = uVar5 & 0xffff;
      }
      local_24 = (short)((int)(uVar9 * 0x10 + 0x1f) >> 5);
    }
    if (local_20 == (undefined *)0x0) {
      local_20 = PTR_LAB_101393c0_1_100ee55c;
    }
    if (iVar3 == 0) {
      FUN_100f1e9c(*(undefined2 *)(param_1 + 0x2a),*(undefined2 *)(param_1 + 0x2c),uVar7 & 0xff,
                   &local_2c);
    }
    else {
      FUN_100f20c0(*(undefined2 *)(param_1 + 0x2a),&local_2c);
    }
  }
  return;
}

