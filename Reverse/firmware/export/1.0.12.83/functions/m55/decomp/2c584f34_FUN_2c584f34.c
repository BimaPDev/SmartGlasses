/* FUN_2c584f34 @ 0x2c584f34 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c584f34(int param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_e0 [24];
  uint *puStack_c8;
  int iStack_c4;
  uint auStack_c0 [4];
  undefined4 uStack_b0;
  uint *puStack_ac;
  int iStack_a8;
  uint auStack_a4 [4];
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined4 uStack_90;
  uint *puStack_8c;
  int iStack_88;
  uint auStack_84 [4];
  undefined1 uStack_74;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined2 uStack_6a;
  undefined4 uStack_68;
  uint *puStack_64;
  undefined1 *puStack_60;
  uint uStack_5c;
  undefined1 auStack_58 [16];
  undefined1 uStack_48;
  uint *puStack_44;
  int iStack_40;
  uint auStack_3c [4];
  undefined4 uStack_2c;
  
  iVar7 = param_1 + 0x30;
  iVar5 = func_0x2c582cdc(iVar7);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c584f80,0xe7,_LAB_2c584f7c);
  }
  func_0x2c582c10(iVar7);
  uVar6 = func_0x2c582c68(iVar7);
  *(undefined4 *)(param_1 + 0x28) = uVar6;
  piVar1 = DAT_2c584d88;
  uStack_2c = *DAT_2c584d84;
  if (*DAT_2c584d88 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar4 = (undefined4 *)FUN_2c47245c(0,0x1c);
  uVar6 = DAT_2c584d8c;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  *puVar4 = uVar6;
  FUN_2c5849d4(param_1,param_1 + 4,puVar4 + 1,*(undefined4 *)(param_1 + 0x28),2);
  puVar4[5] = 2;
  puVar4[6] = *(undefined4 *)(param_1 + 0x2c);
  puVar4[4] = *(undefined4 *)(param_1 + 0x28);
  FUN_2c58c9d8(auStack_e0,puVar4);
  iStack_a8 = 0;
  auStack_a4[0] = auStack_a4[0] & 0xffffff00;
  uStack_93 = 2;
  uStack_b0 = DAT_2c584d90;
  puStack_ac = auStack_a4;
  FUN_2c58c9d8(&puStack_64,puVar4);
  uVar3 = auStack_a4[0];
  puVar2 = puStack_ac;
  if (puStack_64 == &uStack_5c) {
    if (puStack_60 != (undefined1 *)0x0) {
      if (puStack_60 == (undefined1 *)0x1) {
        *(undefined1 *)puStack_ac = (undefined1)uStack_5c;
      }
      else {
        FUN_2c674668(puStack_ac,&uStack_5c);
      }
    }
    *(undefined1 *)((int)puStack_ac + (int)puStack_60) = 0;
    iStack_a8 = (int)puStack_60;
  }
  else {
    bVar8 = puStack_ac != auStack_a4;
    puStack_ac = puStack_64;
    if (bVar8) {
      iStack_a8 = (int)puStack_60;
      auStack_a4[0] = uStack_5c;
      if (puVar2 != (uint *)0x0) {
        uStack_5c = uVar3;
        puStack_64 = puVar2;
        goto LAB_2c584b92;
      }
    }
    auStack_a4[0] = uStack_5c;
    iStack_a8 = (int)puStack_60;
    puStack_64 = &uStack_5c;
  }
LAB_2c584b92:
  puStack_60 = (undefined1 *)0x0;
  *(undefined1 *)puStack_64 = 0;
  if (puStack_64 != &uStack_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680();
  }
  uStack_94 = 0;
  puStack_60 = auStack_58;
  iStack_88 = 0;
  auStack_84[0] = auStack_84[0] & 0xffffff00;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_5c = 0;
  auStack_58[0] = 0;
  iStack_40 = 0;
  auStack_3c[0] = auStack_3c[0] & 0xffffff00;
  uStack_90 = DAT_2c584da8;
  uStack_6c = 0xb;
  uStack_68 = 0xffffffff;
  puStack_64 = DAT_2c584dac;
  uStack_6a = 0x67;
  puStack_8c = auStack_84;
  puStack_44 = auStack_3c;
  FUN_2c58c9d8(&puStack_c8,&uStack_b0);
  uVar3 = auStack_3c[0];
  puVar2 = puStack_44;
  if (puStack_c8 == auStack_c0) {
    if (iStack_c4 != 0) {
      if (iStack_c4 == 1) {
        *(undefined1 *)puStack_44 = (undefined1)auStack_c0[0];
      }
      else {
        FUN_2c674668(puStack_44,auStack_c0);
      }
    }
    *(undefined1 *)((int)puStack_44 + iStack_c4) = 0;
    iStack_40 = iStack_c4;
  }
  else {
    bVar8 = puStack_44 != auStack_3c;
    puStack_44 = puStack_c8;
    if (bVar8) {
      iStack_40 = iStack_c4;
      auStack_3c[0] = auStack_c0[0];
      if (puVar2 != (uint *)0x0) {
        auStack_c0[0] = uVar3;
        puStack_c8 = puVar2;
        goto LAB_2c584c26;
      }
    }
    auStack_3c[0] = auStack_c0[0];
    iStack_40 = iStack_c4;
    puStack_c8 = auStack_c0;
  }
LAB_2c584c26:
  iStack_c4 = 0;
  *(undefined1 *)puStack_c8 = 0;
  if (puStack_c8 != auStack_c0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680();
  }
  uStack_48 = 2;
  FUN_2c58c9d8(&puStack_c8,&puStack_64);
  uVar3 = auStack_84[0];
  puVar2 = puStack_8c;
  if (puStack_c8 == auStack_c0) {
    if (iStack_c4 != 0) {
      if (iStack_c4 == 1) {
        *(undefined1 *)puStack_8c = (undefined1)auStack_c0[0];
      }
      else {
        FUN_2c674668(puStack_8c,auStack_c0);
      }
    }
    *(undefined1 *)((int)puStack_8c + iStack_c4) = 0;
    iStack_88 = iStack_c4;
  }
  else {
    bVar8 = puStack_8c != auStack_84;
    puStack_8c = puStack_c8;
    if (bVar8) {
      iStack_88 = iStack_c4;
      auStack_84[0] = auStack_c0[0];
      if (puVar2 != (uint *)0x0) {
        auStack_c0[0] = uVar3;
        puStack_c8 = puVar2;
        goto LAB_2c584c6a;
      }
    }
    auStack_84[0] = auStack_c0[0];
    iStack_88 = iStack_c4;
    puStack_c8 = auStack_c0;
  }
LAB_2c584c6a:
  iStack_c4 = 0;
  *(undefined1 *)puStack_c8 = 0;
  if (puStack_c8 == auStack_c0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680();
}

