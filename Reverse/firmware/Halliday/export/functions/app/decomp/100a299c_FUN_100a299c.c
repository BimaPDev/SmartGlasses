/* FUN_100a299c @ 0x100a299c */

uint FUN_100a299c(void)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [2];
  undefined1 local_42;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 *puStack_34;
  undefined1 auStack_30 [24];
  
  piVar2 = DAT_100a2ae8;
  iVar5 = *DAT_100a2ae8;
  iVar9 = iVar5 + 0x10;
  FUN_1011dbf4(iVar9,0xffffffff);
  if (*(int *)(iVar5 + 4) == 0) {
    uVar7 = 0xfffffffe;
  }
  else {
    FUN_100a5b78((DAT_100a2af0 - DAT_100a2aec) * 0x20 & 0xff00U | 0x13a0032,DAT_100a2af8,
                 DAT_100a2af4,*(undefined4 *)(iVar5 + 0xc),*(undefined1 *)(iVar5 + 0x24));
    if ((*(int *)(iVar5 + 0xc) == 0) && (*(char *)(iVar5 + 0x24) == '\0')) {
      iVar8 = *(int *)(iVar5 + 4);
      FUN_1012d950((int *)(iVar5 + 4),iVar8);
      *(char *)(iVar5 + 0x25) = *(char *)(iVar5 + 0x25) + -1;
      if (*(code **)(iVar5 + 0x30) != (code *)0x0) {
        (**(code **)(iVar5 + 0x30))(iVar8 + 0x16,1);
      }
      if ((int)((uint)*(byte *)(iVar8 + 0x14) << 0x1a) < 0) {
        bVar1 = *(byte *)(iVar8 + 0x15);
        *(byte *)(iVar8 + 0x15) = bVar1 + 1;
        FUN_1013d306(auStack_54,0,0xe,*(undefined4 *)(iVar8 + 0x10),
                     *(undefined1 *)((uint)bVar1 + iVar8 + 0x16));
        puVar4 = auStack_54;
      }
      else {
        puVar4 = (undefined1 *)(iVar8 + 0x16);
      }
      uVar3 = FUN_100a26a8(puVar4);
      *(undefined4 *)(iVar5 + 0x2c) = uVar3;
      if (*(int *)(iVar5 + 0x2c) == 0) {
        FUN_100a27e8(iVar5,iVar8);
        FUN_100a265c();
        thunk_FUN_10113e2c(iVar9);
        return 0xffffffef;
      }
      iVar6 = *piVar2;
      iVar5 = FUN_1009e224();
      if (iVar5 != 0) {
        FUN_1011ea48(auStack_44,0,0x14);
        local_42 = 10;
        local_3c = 1;
        FUN_1013ca1a(auStack_30,0);
        local_38 = DAT_100a2afc;
        puStack_34 = auStack_30;
        iVar5 = FUN_1009ece8(iVar5,auStack_44);
        if (iVar5 != 0) {
          thunk_FUN_10113e2c(iVar6 + 0x10);
          FUN_1011dbde(auStack_30,0xffffffff);
          FUN_1011dbf4(iVar6 + 0x10,0xffffffff);
        }
      }
      uVar7 = *(byte *)(iVar8 + 0x14) & 0x20;
      if ((*(byte *)(iVar8 + 0x14) & 0x20) == 0) {
        FUN_100a288c(iVar8,iVar8 + 0x16);
      }
      else {
        FUN_100a288c(iVar8,auStack_54);
        uVar7 = 0;
      }
    }
    else {
      uVar7 = 0xffffffd2;
    }
  }
  thunk_FUN_10113e2c(iVar9);
  return uVar7;
}

