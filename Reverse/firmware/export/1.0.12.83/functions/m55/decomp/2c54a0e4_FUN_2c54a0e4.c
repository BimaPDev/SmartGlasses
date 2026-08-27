/* FUN_2c54a0e4 @ 0x2c54a0e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c54a0e4(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  uint in_fpscr;
  undefined8 uVar11;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  uint *puStack_e0;
  uint uStack_dc;
  uint auStack_d8 [4];
  uint *puStack_c8;
  uint uStack_c4;
  uint auStack_c0 [4];
  undefined4 uStack_b0;
  uint *puStack_ac;
  uint uStack_a8;
  uint auStack_a4 [4];
  uint *puStack_94;
  uint uStack_90;
  uint auStack_8c [4];
  uint *puStack_7c;
  uint uStack_78;
  uint auStack_74 [4];
  uint *puStack_64;
  uint uStack_60;
  uint auStack_5c [4];
  uint *puStack_4c;
  uint uStack_48;
  uint auStack_44 [4];
  int iStack_34;
  
  iStack_34 = *_LAB_2c54a288;
  uVar2 = FUN_2c48e738();
  FUN_2c48e5b4(uVar2,_LAB_2c54a28c,*(undefined4 *)(param_1 + 0x20));
  FUN_2c48e5b4(uVar2,_LAB_2c54a290,*(undefined4 *)(param_1 + 0x38));
  FUN_2c48e5b4(uVar2,_LAB_2c54a294,*(undefined4 *)(param_1 + 0x50));
  FUN_2c48e4c8(uVar2,_LAB_2c54a298,*(undefined1 *)(param_1 + 5));
  uVar11 = VectorUnsignedToFloat((uint)*(byte *)(param_1 + 4),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar11,uVar2,_LAB_2c54a29c);
  uVar3 = FUN_2c48e714();
  piVar1 = _LAB_2c54a2a8;
  uVar9 = _LAB_2c54a2a0;
  iVar6 = *(int *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 0xc);
  if (iVar6 != iVar5) {
    do {
      uStack_ec = uVar9;
      uStack_e8 = *(undefined4 *)(iVar6 + 4);
      uStack_e4 = *(undefined4 *)(iVar6 + 8);
      puVar10 = *(undefined1 **)(iVar6 + 0xc);
      uVar8 = *(uint *)(iVar6 + 0x10);
      puStack_e0 = auStack_d8;
      if ((puVar10 + uVar8 != (undefined1 *)0x0) && (puVar10 == (undefined1 *)0x0))
      goto LAB_2c54a592;
      if (uVar8 < 0x10) {
        if (uVar8 == 1) {
          auStack_d8[0] = CONCAT31(auStack_d8[0]._1_3_,*puVar10);
        }
        else if (uVar8 != 0) goto LAB_2c54a224;
      }
      else {
        if ((int)uVar8 < 0) goto LAB_2c54a58c;
        if (*piVar1 == 0) {
          FUN_2c4723c4();
          *piVar1 = 1;
        }
        puStack_e0 = (uint *)FUN_2c47245c(0,uVar8 + 1);
        auStack_d8[0] = uVar8;
LAB_2c54a224:
        FUN_2c674668(puStack_e0,puVar10,uVar8);
      }
      *(undefined1 *)((int)puStack_e0 + uVar8) = 0;
      puVar10 = *(undefined1 **)(iVar6 + 0x24);
      uVar7 = *(uint *)(iVar6 + 0x28);
      puStack_c8 = auStack_c0;
      uStack_dc = uVar8;
      if ((puVar10 + uVar7 != (undefined1 *)0x0) && (puVar10 == (undefined1 *)0x0))
      goto LAB_2c54a592;
      if (uVar7 < 0x10) {
        if (uVar7 == 1) {
          auStack_c0[0] = CONCAT31(auStack_c0[0]._1_3_,*puVar10);
        }
        else if (uVar7 != 0) goto LAB_2c54a250;
      }
      else {
        if ((int)uVar7 < 0) goto LAB_2c54a58c;
        if (*piVar1 == 0) {
          FUN_2c4723c4();
          *piVar1 = 1;
        }
        puStack_c8 = (uint *)FUN_2c47245c(0,uVar7 + 1);
        auStack_c0[0] = uVar7;
LAB_2c54a250:
        FUN_2c674668(puStack_c8,puVar10,uVar7);
      }
      *(undefined1 *)((int)puStack_c8 + uVar7) = 0;
      uStack_c4 = uVar7;
      uVar4 = FUN_2c549be4(&uStack_ec);
      FUN_2c48e444(uVar3,uVar4);
      uStack_ec = uVar9;
      if (puStack_c8 != auStack_c0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if (puStack_e0 != auStack_d8) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      iVar6 = iVar6 + 0x3c;
    } while (iVar5 != iVar6);
  }
  FUN_2c48e474();
  uVar9 = FUN_2c48e714();
  piVar1 = _LAB_2c54a2a8;
  iVar5 = *(int *)(param_1 + 0x14);
  iVar6 = *(int *)(param_1 + 0x18);
  do {
    if (iVar6 == iVar5) {
      FUN_2c48e474(uVar2,_LAB_2c54a5bc,uVar9);
      if (*_LAB_2c54a5c0 == iStack_34) {
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    puStack_ac = auStack_a4;
    puVar10 = *(undefined1 **)(iVar5 + 4);
    uVar8 = *(uint *)(iVar5 + 8);
    uStack_b0 = _LAB_2c54a5b8;
    if ((puVar10 + uVar8 != (undefined1 *)0x0) && (puVar10 == (undefined1 *)0x0)) {
LAB_2c54a592:
                    /* WARNING: Subroutine does not return */
      FUN_2c658674(_DAT_2c54a5c8);
    }
    if (uVar8 < 0x10) {
      if (uVar8 == 1) {
        uVar7 = auStack_a4[0] >> 8;
        auStack_a4[0] = CONCAT31((int3)uVar7,*puVar10);
      }
      else if (uVar8 != 0) goto LAB_2c54a446;
    }
    else {
      if ((int)uVar8 < 0) {
LAB_2c54a58c:
                    /* WARNING: Subroutine does not return */
        FUN_2c658680(_DAT_2c54a5c4);
      }
      if (*piVar1 == 0) {
        FUN_2c4723c4();
        *piVar1 = 1;
      }
      puStack_ac = (uint *)FUN_2c47245c(0,uVar8 + 1);
      auStack_a4[0] = uVar8;
LAB_2c54a446:
      FUN_2c674668(puStack_ac,puVar10,uVar8);
    }
    *(undefined1 *)((int)puStack_ac + uVar8) = 0;
    puVar10 = *(undefined1 **)(iVar5 + 0x1c);
    uVar7 = *(uint *)(iVar5 + 0x20);
    puStack_94 = auStack_8c;
    uStack_a8 = uVar8;
    if ((puVar10 + uVar7 != (undefined1 *)0x0) && (puVar10 == (undefined1 *)0x0)) goto LAB_2c54a592;
    if (uVar7 < 0x10) {
      if (uVar7 == 1) {
        auStack_8c[0] = CONCAT31(auStack_8c[0]._1_3_,*puVar10);
      }
      else if (uVar7 != 0) goto LAB_2c54a46c;
    }
    else {
      if ((int)uVar7 < 0) goto LAB_2c54a58c;
      if (*piVar1 == 0) {
        FUN_2c4723c4();
        *piVar1 = 1;
      }
      puStack_94 = (uint *)FUN_2c47245c(0,uVar7 + 1);
      auStack_8c[0] = uVar7;
LAB_2c54a46c:
      FUN_2c674668(puStack_94,puVar10,uVar7);
    }
    *(undefined1 *)((int)puStack_94 + uVar7) = 0;
    puVar10 = *(undefined1 **)(iVar5 + 0x34);
    uVar8 = *(uint *)(iVar5 + 0x38);
    puStack_7c = auStack_74;
    uStack_90 = uVar7;
    if ((puVar10 + uVar8 != (undefined1 *)0x0) && (puVar10 == (undefined1 *)0x0)) goto LAB_2c54a592;
    if (uVar8 < 0x10) {
      if (uVar8 == 1) {
        auStack_74[0] = CONCAT31(auStack_74[0]._1_3_,*puVar10);
      }
      else if (uVar8 != 0) goto LAB_2c54a492;
    }
    else {
      if ((int)uVar8 < 0) goto LAB_2c54a58c;
      if (*piVar1 == 0) {
        FUN_2c4723c4();
        *piVar1 = 1;
      }
      puStack_7c = (uint *)FUN_2c47245c(0,uVar8 + 1);
      auStack_74[0] = uVar8;
LAB_2c54a492:
      FUN_2c674668(puStack_7c,puVar10,uVar8);
    }
    *(undefined1 *)((int)puStack_7c + uVar8) = 0;
    puVar10 = *(undefined1 **)(iVar5 + 0x4c);
    uVar7 = *(uint *)(iVar5 + 0x50);
    puStack_64 = auStack_5c;
    uStack_78 = uVar8;
    if ((puVar10 + uVar7 != (undefined1 *)0x0) && (puVar10 == (undefined1 *)0x0)) goto LAB_2c54a592;
    if (uVar7 < 0x10) {
      if (uVar7 == 1) {
        auStack_5c[0] = CONCAT31(auStack_5c[0]._1_3_,*puVar10);
      }
      else if (uVar7 != 0) goto LAB_2c54a4b6;
    }
    else {
      if ((int)uVar7 < 0) goto LAB_2c54a58c;
      if (*piVar1 == 0) {
        FUN_2c4723c4();
        *piVar1 = 1;
      }
      puStack_64 = (uint *)FUN_2c47245c(0,uVar7 + 1);
      auStack_5c[0] = uVar7;
LAB_2c54a4b6:
      FUN_2c674668(puStack_64,puVar10,uVar7);
    }
    *(undefined1 *)((int)puStack_64 + uVar7) = 0;
    puVar10 = *(undefined1 **)(iVar5 + 100);
    uVar8 = *(uint *)(iVar5 + 0x68);
    puStack_4c = auStack_44;
    uStack_60 = uVar7;
    if ((puVar10 + uVar8 != (undefined1 *)0x0) && (puVar10 == (undefined1 *)0x0)) goto LAB_2c54a592;
    if (uVar8 < 0x10) {
      if (uVar8 == 1) {
        auStack_44[0] = CONCAT31(auStack_44[0]._1_3_,*puVar10);
      }
      else if (uVar8 != 0) goto LAB_2c54a4de;
    }
    else {
      if ((int)uVar8 < 0) goto LAB_2c54a58c;
      if (*piVar1 == 0) {
        FUN_2c4723c4();
        *piVar1 = 1;
      }
      puStack_4c = (uint *)FUN_2c47245c(0,uVar8 + 1);
      auStack_44[0] = uVar8;
LAB_2c54a4de:
      FUN_2c674668(puStack_4c,puVar10,uVar8);
    }
    *(undefined1 *)((int)puStack_4c + uVar8) = 0;
    uStack_48 = uVar8;
    uVar3 = FUN_2c549b90(&uStack_b0);
    FUN_2c48e444(uVar9,uVar3);
    uStack_b0 = _LAB_2c54a5b8;
    if (puStack_4c != auStack_44) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (puStack_64 != auStack_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (puStack_7c != auStack_74) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (puStack_94 != auStack_8c) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (puStack_ac != auStack_a4) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    iVar5 = iVar5 + 0x7c;
  } while( true );
}

