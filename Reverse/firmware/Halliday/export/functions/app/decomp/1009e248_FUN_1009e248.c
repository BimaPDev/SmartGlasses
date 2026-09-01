/* FUN_1009e248 @ 0x1009e248 */

int FUN_1009e248(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined1 auStack_48 [12];
  code *local_3c;
  undefined1 auStack_34 [2];
  undefined1 local_32;
  undefined4 local_2c;
  
  FUN_1011ea48(auStack_48,0,0x14);
  puVar2 = (undefined4 *)FUN_1009dfd4(param_1);
  uVar9 = (DAT_1009e380 - DAT_1009e384) * 0x20 & 0xff00;
  if (puVar2 == (undefined4 *)0x0) {
    FUN_100a5b78(uVar9 | 0xe10011,DAT_1009e38c,DAT_1009e388,param_1);
    iVar3 = 0;
  }
  else {
    FUN_10115194(puVar2[2],0xfffffff0);
    FUN_1011dbf4(DAT_1009e390,0xffffffff);
    while (iVar3 = FUN_1012d0fc(auStack_48,0), puVar1 = DAT_1009e394, iVar3 != 0) {
      if (local_3c != (code *)0x0) {
        (*local_3c)(auStack_48,0);
      }
    }
    puVar4 = (undefined4 *)*DAT_1009e394;
    puVar6 = (undefined4 *)0x0;
    do {
      puVar8 = puVar6;
      puVar6 = puVar4;
      if (puVar6 == (undefined4 *)0x0) goto LAB_1009e2c8;
      puVar4 = (undefined4 *)*puVar6;
    } while (puVar2 != puVar6);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = DAT_1009e394 + 1;
      *DAT_1009e394 = puVar4;
      if (puVar2 == (undefined4 *)*puVar8) {
        puVar1[1] = puVar4;
      }
    }
    else {
      *puVar8 = puVar4;
      if (puVar2 == (undefined4 *)puVar1[1]) {
        puVar1[1] = puVar8;
      }
    }
    *puVar6 = 0;
LAB_1009e2c8:
    iVar3 = FUN_1009ec64(puVar2[1]);
    puVar1 = DAT_1009e3ac;
    if (iVar3 == 0) {
      param_1 = puVar2[1];
      uVar9 = uVar9 | 0xf30011;
      uVar7 = DAT_1009e398;
    }
    else {
      iVar5 = FUN_1011ea18(*(undefined4 *)*DAT_1009e3ac,puVar2[1]);
      puVar4 = DAT_1009e39c;
      if (iVar5 == 0) {
        uVar7 = *puVar1;
        *puVar1 = 0;
        puVar1 = DAT_1009e3b0;
        *puVar4 = uVar7;
        puVar4 = (undefined4 *)*puVar1;
        if (((puVar4 != (undefined4 *)0x0) && (iVar5 = FUN_1011ea18(*puVar4,puVar2[1]), iVar5 != 0))
           && (*DAT_1009e3a0 != '\0')) {
          FUN_1011ea48(auStack_34,0);
          local_32 = 1;
          local_2c = *(undefined4 *)*puVar1;
          FUN_1009ece8(DAT_1009e3a4,auStack_34);
        }
      }
      FUN_1012d1f4(puVar2);
      uVar9 = uVar9 | 0x10a0031;
      uVar7 = DAT_1009e3a8;
    }
    FUN_100a5b78(uVar9,DAT_1009e38c,uVar7,param_1);
    FUN_1009e02c();
  }
  return iVar3;
}

