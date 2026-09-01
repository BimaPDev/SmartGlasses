/* FUN_1006df10 @ 0x1006df10 */

bool FUN_1006df10(int param_1,undefined4 *param_2,int param_3,char param_4)

{
  int iVar1;
  undefined4 extraout_r1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 auStack_44 [4];
  undefined4 local_40;
  ushort local_3a;
  byte local_38;
  undefined4 local_34;
  int iStack_30;
  byte local_2c;
  
  iVar6 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 4);
  FUN_1011ea48(auStack_44,0,0x1c);
  if (*(char *)(iVar6 + 0x2d) == '\0') {
    FUN_10113cfc(iVar6,extraout_r1,0xffffffff,0xffffffff);
  }
  iVar9 = 0;
  uVar8 = ((int)PTR_DAT_1006e0a0 - (int)PTR_DAT_1006e0a4) * 0x20 & 0xff00U | DAT_1006e0b8;
  do {
    if (param_3 <= iVar9) {
      uVar4 = 0;
LAB_1006df64:
      if (*(char *)(iVar6 + 0x2d) == '\0') {
        FUN_10113e2c(iVar6);
      }
      return uVar4 != 0;
    }
    local_2c = *(byte *)(param_2 + 2) & 1 | param_4 << 1;
    iStack_30 = param_2[1];
    local_40 = 5;
    local_3a = (ushort)((uint)(iStack_30 << 0x14) >> 0x14) | 0x9000 | local_3a & 0x6000;
    local_38 = local_38 & 0xfd;
    local_34 = *param_2;
    iVar7 = *(int *)(param_1 + 4);
    iVar3 = (uint)*(byte *)(iVar2 + 10) * 0x4000;
    uVar4 = *(uint *)(iVar3 + 0x40088020);
    iVar5 = *(int *)(param_1 + 0x10);
    if ((*(byte *)(param_2 + 2) & 2) == 0) {
      uVar4 = uVar4 | 8;
    }
    else {
      uVar4 = uVar4 & 0xfffffff7;
    }
    *(uint *)(iVar3 + 0x40088020) = uVar4;
    uVar4 = (uint)((iStack_30 + 3) * 0x8000) / *(uint *)(iVar7 + 4) + 0x32;
    if (*(char *)(iVar5 + 0x2d) == '\0') {
      FUN_101140ac(iVar5 + 0x14);
    }
    iVar3 = *(int *)(param_1 + 0x10);
    *(undefined **)(iVar3 + 0x3c) = PTR_LAB_1011f0e8_1_1006e0a8;
    *(int *)(iVar3 + 0x4c) = param_1;
    uVar10 = FUN_1006dbb8(param_1,3,auStack_44);
    if ((int)uVar10 != 0) {
      uVar4 = 0xffffffff;
      goto LAB_1006df64;
    }
    if (*(char *)(iVar5 + 0x2d) == '\0') {
      iVar3 = FUN_1011401c(iVar5 + 0x14,(int)((ulonglong)uVar10 >> 0x20),uVar4);
      if (iVar3 != 0) {
        *(undefined1 *)(iVar5 + 0x2c) = 1;
        FUN_100a5b78(uVar8,DAT_1006e0b0,DAT_1006e0b4,*(undefined1 *)(iVar7 + 10),uVar4);
      }
    }
    else {
      iVar3 = FUN_1013d9e0();
      do {
        iVar1 = (*DAT_1006e0ac)(*(undefined1 *)(iVar7 + 10),3,0xffffffff,0);
        if (iVar1 != 0) goto LAB_1006e04e;
        iVar1 = FUN_1013d9e0();
      } while ((uint)(iVar1 - iVar3) <= uVar4);
      *(undefined1 *)(iVar5 + 0x2c) = 1;
    }
LAB_1006e04e:
    FUN_1006db40(param_1,3);
    iVar3 = *(int *)(param_1 + 0x10);
    param_2 = param_2 + 3;
    *(undefined4 *)(iVar3 + 0x3c) = 0;
    *(undefined4 *)(iVar3 + 0x4c) = 0;
    uVar4 = (uint)*(byte *)(iVar5 + 0x2c);
    if (uVar4 != 0) goto LAB_1006df64;
    iVar9 = iVar9 + 1;
  } while( true );
}

