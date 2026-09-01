/* FUN_100d28bc @ 0x100d28bc */

void FUN_100d28bc(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  byte bVar6;
  code *pcVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined1 auStack_30 [20];
  
  piVar1 = DAT_100d2a1c;
  piVar9 = param_1 + 0x35;
  iVar8 = *param_1;
  if (param_2 == 0) {
    iVar2 = FUN_1013577a(piVar9,0x11);
    if ((iVar2 != 0) && (iVar2 = FUN_1013577a(piVar9,0xe), iVar2 == 0)) {
      iVar10 = *param_1;
      FUN_100d0950();
      FUN_1013547c(DAT_100d2a20,iVar10 + 0x91);
      iVar2 = FUN_1013577a(piVar9,0x14);
      if (iVar2 == 0) {
        iVar2 = FUN_101356b6(*(int *)(iVar10 + 0xbc) + 0x1a,DAT_100d2a28,auStack_30);
      }
      else {
        iVar2 = FUN_101356f2(DAT_100d2a24,*(int *)(iVar10 + 0xbc) + 0x1a);
      }
      if (iVar2 == 0) {
        iVar2 = FUN_101356b6(auStack_30,DAT_100d2a30,DAT_100d2a2c);
        if (iVar2 != 0) {
          FUN_100d0950();
        }
        if ((int)((uint)*(byte *)(*(int *)(iVar10 + 0xbc) + 0xd) << 0x1f) < 0) {
          bVar6 = *(byte *)(DAT_100d2a20 + 8) | 5;
        }
        else {
          bVar6 = *(byte *)(DAT_100d2a20 + 8) & 0xfe | 4;
        }
        *(byte *)(DAT_100d2a20 + 8) = bVar6;
        iVar2 = FUN_100ca22c(iVar10 + 0x91);
        if (iVar2 != 0) {
          thunk_FUN_100e11ec(DAT_100d2a20);
          uVar4 = FUN_100e135c(DAT_100d2a20);
          *(undefined4 *)(iVar2 + 0xac) = uVar4;
          FUN_100ca13c(iVar2);
        }
      }
      else {
        FUN_100d0950();
      }
    }
    uVar3 = FUN_1013577a(piVar9,0xd);
    if (uVar3 != 0) {
      FUN_100e0bb4(*(undefined4 *)(iVar8 + 0xbc));
    }
    iVar2 = *piVar1;
    if (iVar2 == 0) goto LAB_100d293a;
    pcVar7 = *(code **)(iVar2 + 0x1c);
  }
  else {
    uVar3 = param_2 - 1U & 0xff;
    if (uVar3 < 0xe) {
      uVar3 = (uint)*(byte *)(DAT_100d2a34 + uVar3);
    }
    else {
      uVar3 = 8;
    }
    if ((*(int *)(iVar8 + 0xbc) != 0) &&
       ((*(char *)(*(int *)(iVar8 + 0xbc) + 0xc) == '\0' ||
        (iVar2 = FUN_1013577a(piVar9,2), iVar2 != 0)))) {
      FUN_100e0b60(*(undefined4 *)(iVar8 + 0xbc));
      *(undefined4 *)(iVar8 + 0xbc) = 0;
    }
    iVar2 = FUN_1013577a(piVar9,2);
    if (iVar2 == 0) {
      if (uVar3 == 8) {
        uVar5 = 0x1f;
      }
      else {
        uVar5 = *(undefined1 *)(DAT_100d2a38 + uVar3);
      }
      FUN_100c9da0(iVar8,uVar5,uVar3);
    }
    iVar2 = *piVar1;
    if (iVar2 == 0) goto LAB_100d293a;
    pcVar7 = *(code **)(iVar2 + 0x20);
  }
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(iVar8,uVar3);
  }
LAB_100d293a:
  FUN_10135c42(param_1);
  if (*(char *)(iVar8 + 9) != *(char *)(iVar8 + 10)) {
    FUN_10135f48(iVar8);
  }
  return;
}

