/* FUN_2c5bf0f8 @ 0x2c5bf0f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5bf0f8(int param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_r1;
  uint uVar7;
  int extraout_r1_00;
  uint extraout_r2;
  char cVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  uint in_stack_ffffff10;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 auStack_d4 [4];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_b8 [12];
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 uStack_88;
  undefined4 uStack_84;
  undefined1 *puStack_70;
  undefined1 *puStack_64;
  uint uStack_60;
  undefined1 auStack_5c [16];
  undefined1 *apuStack_4c [2];
  undefined1 auStack_44 [16];
  undefined1 *apuStack_34 [2];
  undefined1 auStack_2c [16];
  int iStack_1c;
  
  iStack_1c = *piRam2c5bf2d8;
  FUN_2c674268(auStack_b8,0,0x50,0);
  uStack_ac = FUN_2c5e2e8c(uRam2c5bf2dc);
  uStack_a0 = *(undefined4 *)(param_1 + 4);
  uStack_98 = *(undefined4 *)(param_1 + 0x18);
  uStack_a8 = *(undefined4 *)(param_1 + 0x1c);
  uStack_a4 = *(undefined4 *)(param_1 + 0x20);
  uStack_90 = *(undefined4 *)(param_1 + 0x10);
  uStack_8c = *(undefined4 *)(param_1 + 0x14);
  uStack_9c = *(undefined4 *)(param_1 + 8);
  if (*(char *)(param_1 + 0x28) == '\0') {
    uStack_94 = 0;
    cVar8 = '\0';
  }
  else {
    uStack_94 = registry_lookup(0x6011);
    cVar8 = *(char *)(param_1 + 0x28);
  }
  uStack_88 = 0x100;
  uStack_84 = uRam2c5bf2e0;
  if (*(char *)(param_1 + 0x29) == '\0') {
    puStack_70 = (undefined1 *)0x0;
  }
  else {
    auStack_d4[0] = *(undefined1 *)(param_1 + 0x2a);
    uStack_d0 = *(undefined4 *)(param_1 + 0x2c);
    uStack_cc = *(undefined4 *)(param_1 + 0x30);
    uStack_c8 = *(undefined4 *)(param_1 + 0x34);
    uStack_c0 = *(undefined4 *)(param_1 + 0x38);
    uStack_c4 = *(undefined4 *)(param_1 + 0x3c);
    puStack_70 = auStack_d4;
  }
  if (cVar8 == '\0') goto LAB_2c5bf17a;
  iVar4 = registry_lookup(0x6011);
  apuStack_34[0] = auStack_2c;
  if (iVar4 == 0) {
    iVar5 = 1;
  }
  else {
    iVar5 = FUN_2c66c4ec();
    iVar5 = iVar4 + iVar5;
  }
  FUN_2c5beb54(apuStack_34,iVar4,iVar5);
  FUN_2c5bf078(&puStack_64,apuStack_34);
  uVar7 = uStack_60;
  puVar2 = puStack_64;
  if (apuStack_34[0] != auStack_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((uStack_60 == 0) || (iVar4 = FUN_2c643680(puStack_64,0x2f,uStack_60), iVar4 == 0)) {
    apuStack_4c[0] = auStack_44;
    FUN_2c5beb54(apuStack_4c,puVar2,puVar2 + uVar7);
    uVar7 = 0;
  }
  else {
    uVar9 = iVar4 - (int)puVar2;
    apuStack_4c[0] = auStack_44;
    if (uVar9 < uVar7) {
      uVar7 = uVar9;
    }
    FUN_2c5beb54(apuStack_4c,puVar2,puVar2 + uVar7);
    uVar7 = uVar9 + 1;
    if (uStack_60 < uVar7) {
      FUN_2c65868c(uRam2c5bf2e8,uRam2c5bf2ec,uVar7,uStack_60);
      puVar2 = puRamffffffb0;
      coprocessor_moveto(0xc,2,2,extraout_r2,in_cr13,in_cr12);
      *(undefined1 *)(uVar9 + 0x18) = 0xb0;
      *(undefined2 *)(puVar2 + -0x50) = 0xffb0;
      puVar3 = puRamffffffb0;
      if ((extraout_r2 + 0x7fffffff) - uRamffffffb4 < in_stack_ffffff10) {
                    /* WARNING: Subroutine does not return */
        FUN_2c658680(_LAB_2c5bf480);
      }
      iVar4 = in_stack_ffffff10 - extraout_r2;
      uVar9 = uRamffffffb4 + iVar4;
      uVar7 = uRamffffffb8;
      if (puRamffffffb0 == (undefined1 *)0xffffffb8) {
        uVar7 = 0xf;
      }
      if (uVar7 < uVar9) {
        FUN_2c52263c(0xffffffb0,extraout_r1_00,extraout_r2,puVar2,in_stack_ffffff10);
        goto LAB_2c5bf366;
      }
      puVar11 = puRamffffffb0 + extraout_r1_00;
      iVar5 = uRamffffffb4 - (extraout_r2 + extraout_r1_00);
      if ((puVar2 < puRamffffffb0) || (puRamffffffb0 + uRamffffffb4 < puVar2)) {
        if ((iVar5 != 0) && (extraout_r2 != in_stack_ffffff10)) {
          if (iVar5 == 1) {
            puVar11[in_stack_ffffff10] = puVar11[extraout_r2];
          }
          else {
            FUN_2c673eb8(puVar11 + in_stack_ffffff10,puVar11 + extraout_r2,iVar5);
          }
        }
        if (in_stack_ffffff10 == 0) goto LAB_2c5bf366;
        if (in_stack_ffffff10 != 1) {
          FUN_2c674668(puVar11,puVar2,in_stack_ffffff10);
          goto LAB_2c5bf366;
        }
      }
      else {
        if ((in_stack_ffffff10 == 0) || (extraout_r2 < in_stack_ffffff10)) {
LAB_2c5bf3cc:
          if (iVar5 != 0) {
            if (extraout_r2 == in_stack_ffffff10) goto LAB_2c5bf366;
            goto LAB_2c5bf3d4;
          }
        }
        else {
          if (in_stack_ffffff10 == 1) {
            puRamffffffb0[extraout_r1_00] = *puVar2;
            goto LAB_2c5bf3cc;
          }
          FUN_2c673eb8(puVar11,puVar2,in_stack_ffffff10);
          if ((extraout_r2 == in_stack_ffffff10) || (iVar5 == 0)) goto LAB_2c5bf366;
LAB_2c5bf3d4:
          if (iVar5 == 1) {
            puVar11[in_stack_ffffff10] = puVar11[extraout_r2];
          }
          else {
            FUN_2c673eb8(puVar11 + in_stack_ffffff10,puVar11 + extraout_r2,iVar5);
          }
        }
        if (in_stack_ffffff10 <= extraout_r2) goto LAB_2c5bf366;
        puVar10 = puVar11 + extraout_r2;
        if (puVar10 < puVar2 + in_stack_ffffff10) {
          if (puVar2 < puVar10) {
            uVar7 = (int)puVar10 - (int)puVar2;
            if (uVar7 == 1) {
              puVar3[extraout_r1_00] = *puVar2;
            }
            else if (uVar7 != 0) {
              FUN_2c673eb8(puVar11,puVar2,uVar7);
            }
            if (in_stack_ffffff10 - uVar7 == 1) {
              puVar11[uVar7] = puVar11[in_stack_ffffff10];
            }
            else if (in_stack_ffffff10 != uVar7) {
              FUN_2c674668(puVar11 + uVar7,puVar11 + in_stack_ffffff10);
            }
          }
          else if (in_stack_ffffff10 == 1) {
            puVar3[extraout_r1_00] = puVar2[iVar4];
          }
          else if (in_stack_ffffff10 != 0) {
            FUN_2c674668(puVar11,puVar2 + iVar4,in_stack_ffffff10);
          }
          goto LAB_2c5bf366;
        }
        if (in_stack_ffffff10 != 1) {
          if (in_stack_ffffff10 != 0) {
            FUN_2c673eb8(puVar11,puVar2,in_stack_ffffff10);
          }
          goto LAB_2c5bf366;
        }
      }
      puVar3[extraout_r1_00] = *puVar2;
LAB_2c5bf366:
      uRamffffffb4 = uVar9;
      puRamffffffb0[uVar9] = 0;
      return;
    }
  }
  puVar1 = puRam2c5bf2e4;
  apuStack_34[0] = auStack_2c;
  FUN_2c5beb54(apuStack_34,puStack_64 + uVar7,puStack_64 + uStack_60);
  uStack_e4 = *puVar1;
  uStack_e0 = puVar1[1];
  func_0x2c5e9094(apuStack_4c[0],&uStack_e4);
  uVar6 = registry_lookup(0x6002);
  func_0x2c5e9094(uVar6,&uStack_e4);
  uStack_dc = puVar1[2];
  uStack_d8 = puVar1[3];
  func_0x2c5e9094(apuStack_34[0],&uStack_dc);
  uVar6 = registry_lookup(0x6001);
  func_0x2c5e9094(uVar6,&uStack_dc);
  if (apuStack_34[0] != auStack_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (apuStack_4c[0] != auStack_44) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_64 != auStack_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
LAB_2c5bf17a:
  FUN_2c5e8f34(auStack_b8);
  FUN_2c531704(0,extraout_r1,6,0,uRam2c5bf2d0);
  if (*piRam2c5bf2d8 != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

