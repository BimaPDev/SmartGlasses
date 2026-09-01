/* FUN_1009e6b4 @ 0x1009e6b4 */

int FUN_1009e6b4(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined1 auStack_24 [20];
  
  FUN_1011ea48(auStack_24,0,0x14);
  uVar3 = FUN_10115464();
  FUN_10115194(uVar3,0xfffffff0);
  FUN_1011dbf4(DAT_1009e780,0xffffffff);
  puVar4 = (undefined4 *)FUN_1009e688(param_1);
  uVar9 = (DAT_1009e784 - DAT_1009e788) * 0x20 & 0xff00;
  if (puVar4 == (undefined4 *)0x0) {
    FUN_100a5b78(uVar9 | 0x9d0011,DAT_1009e790,DAT_1009e78c,param_1);
    iVar5 = 0;
  }
  else {
    do {
      iVar5 = FUN_1012d0fc(auStack_24,0);
      puVar1 = DAT_1009e794;
    } while (iVar5 != 0);
    puVar2 = (undefined4 *)0x0;
    puVar7 = (undefined4 *)*DAT_1009e794;
    do {
      puVar8 = puVar7;
      puVar6 = puVar2;
      if (puVar8 == (undefined4 *)0x0) goto LAB_1009e738;
      puVar7 = (undefined4 *)*puVar8;
      puVar2 = puVar8;
    } while (puVar4 != puVar8);
    if (puVar6 == (undefined4 *)0x0) {
      puVar2 = DAT_1009e794 + 1;
      *DAT_1009e794 = puVar7;
      if (puVar4 == (undefined4 *)*puVar2) {
        puVar1[1] = puVar7;
      }
    }
    else {
      *puVar6 = puVar7;
      if (puVar4 == (undefined4 *)puVar1[1]) {
        puVar1[1] = puVar6;
      }
    }
    *puVar8 = 0;
LAB_1009e738:
    iVar5 = FUN_1009ec64(puVar4[1]);
    if (iVar5 == 0) {
      FUN_100a5b78(uVar9 | 0xab0011,DAT_1009e790,DAT_1009e798,puVar4[1]);
    }
    else {
      FUN_100a5b78(uVar9 | 0xb10031,DAT_1009e790,DAT_1009e79c,puVar4[1]);
      FUN_1012d1f4(puVar4);
    }
  }
  FUN_10113e2c(DAT_1009e780);
  return iVar5;
}

