/* FUN_2c5680b8 @ 0x2c5680b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5680b8(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uStack_f0;
  uint *puStack_ec;
  uint uStack_e8;
  uint auStack_e4 [4];
  uint *puStack_d4;
  uint uStack_d0;
  uint auStack_cc [4];
  uint *puStack_bc;
  uint uStack_b8;
  uint auStack_b4 [4];
  uint *puStack_a4;
  uint uStack_a0;
  uint auStack_9c [4];
  uint *puStack_8c;
  uint uStack_88;
  uint auStack_84 [4];
  uint *puStack_74;
  uint uStack_70;
  uint auStack_6c [4];
  uint *puStack_5c;
  uint uStack_58;
  uint auStack_54 [4];
  uint *puStack_44;
  uint uStack_40;
  uint auStack_3c [4];
  int iStack_2c;
  
  iVar4 = param_2[1];
  iStack_2c = *_LAB_2c5683b4;
  iVar6 = *(int *)(param_1 + 0x24);
  iVar8 = *(int *)((int)param_2 + *(int *)(*param_2 + -0xc) + 8);
  if (iVar6 == 0) {
    puVar7 = *(undefined1 **)(iVar4 + 0x34);
    uVar5 = *(uint *)(iVar4 + 0x38);
    puStack_8c = auStack_84;
    if ((puVar7 + uVar5 != (undefined1 *)0x0) && (puVar7 == (undefined1 *)0x0)) goto LAB_2c5684c6;
    uStack_f0 = uVar5;
    if (uVar5 < 0x10) {
      if (uVar5 == 1) {
        auStack_84[0] = CONCAT31(auStack_84[0]._1_3_,*puVar7);
      }
      else if (uVar5 != 0) goto LAB_2c5684b8;
    }
    else {
      puStack_8c = (uint *)FUN_2c5674ac(&uStack_f0,0);
      auStack_84[0] = uStack_f0;
LAB_2c5684b8:
      FUN_2c674668(puStack_8c,puVar7,uVar5);
    }
    *(undefined1 *)((int)puStack_8c + uStack_f0) = 0;
    puVar7 = *(undefined1 **)(iVar4 + 4);
    uVar5 = *(uint *)(iVar4 + 8);
    puStack_74 = auStack_6c;
    uStack_88 = uStack_f0;
    if ((puVar7 + uVar5 != (undefined1 *)0x0) && (puVar7 == (undefined1 *)0x0)) goto LAB_2c5684c6;
    if (uVar5 < 0x10) {
      if (uVar5 == 1) {
        auStack_6c[0] = CONCAT31(auStack_6c[0]._1_3_,*puVar7);
      }
      else {
        uStack_f0 = uVar5;
        if (uVar5 != 0) goto LAB_2c568472;
      }
    }
    else {
      uStack_f0 = uVar5;
      puStack_74 = (uint *)FUN_2c5674ac(&uStack_f0,0);
      auStack_6c[0] = uStack_f0;
LAB_2c568472:
      FUN_2c674668(puStack_74,puVar7,uVar5);
      uVar5 = uStack_f0;
    }
    uStack_f0 = uVar5;
    *(undefined1 *)((int)puStack_74 + uStack_f0) = 0;
    puVar7 = *(undefined1 **)(iVar4 + 0x1c);
    uVar5 = *(uint *)(iVar4 + 0x20);
    puStack_5c = auStack_54;
    uStack_70 = uStack_f0;
    if ((puVar7 + uVar5 != (undefined1 *)0x0) && (puVar7 == (undefined1 *)0x0)) goto LAB_2c5684c6;
    if (uVar5 < 0x10) {
      if (uVar5 == 1) {
        auStack_54[0] = CONCAT31(auStack_54[0]._1_3_,*puVar7);
      }
      else {
        uStack_f0 = uVar5;
        if (uVar5 != 0) goto LAB_2c568456;
      }
    }
    else {
      uStack_f0 = uVar5;
      puStack_5c = (uint *)FUN_2c5674ac(&uStack_f0,0);
      auStack_54[0] = uStack_f0;
LAB_2c568456:
      FUN_2c674668(puStack_5c,puVar7,uVar5);
      uVar5 = uStack_f0;
    }
    uStack_f0 = uVar5;
    *(undefined1 *)((int)puStack_5c + uStack_f0) = 0;
    uVar3 = *(undefined4 *)(iVar8 + 0x68);
    puVar7 = *(undefined1 **)(iVar4 + 0x4c);
    uVar5 = *(uint *)(iVar4 + 0x50);
    puStack_44 = auStack_3c;
    uStack_58 = uStack_f0;
    if ((puVar7 + uVar5 != (undefined1 *)0x0) && (puVar7 == (undefined1 *)0x0)) goto LAB_2c5684c6;
    if (uVar5 < 0x10) {
      if (uVar5 == 1) {
        auStack_3c[0] = CONCAT31(auStack_3c[0]._1_3_,*puVar7);
      }
      else {
        uStack_f0 = uVar5;
        if (uVar5 != 0) goto LAB_2c568492;
      }
    }
    else {
      uStack_f0 = uVar5;
      puStack_44 = (uint *)FUN_2c5674ac(&uStack_f0,0);
      auStack_3c[0] = uStack_f0;
LAB_2c568492:
      FUN_2c674668(puStack_44,puVar7,uVar5);
      uVar5 = uStack_f0;
    }
    uStack_f0 = uVar5;
    piVar1 = _LAB_2c5683b8;
    *(undefined1 *)((int)puStack_44 + uStack_f0) = 0;
    uStack_40 = uStack_f0;
    if (*_LAB_2c5683b8 == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    uVar2 = FUN_2c47245c(0,0x70);
    FUN_2c566e74(uVar2,&puStack_8c,&puStack_74,&puStack_5c,uVar3,&puStack_44,
                 *(undefined1 *)(iVar4 + 100),*(undefined1 *)(iVar4 + 0x65));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    if (puStack_44 != auStack_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (puStack_5c != auStack_54) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (puStack_74 != auStack_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (puStack_8c == auStack_84) goto LAB_2c56820e;
    goto LAB_2c568208;
  }
  puVar7 = *(undefined1 **)(iVar4 + 0x34);
  uVar5 = *(uint *)(iVar4 + 0x38);
  puStack_ec = auStack_e4;
  if ((puVar7 + uVar5 != (undefined1 *)0x0) && (puVar7 == (undefined1 *)0x0)) goto LAB_2c5684c6;
  uStack_f0 = uVar5;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      auStack_e4[0] = CONCAT31(auStack_e4[0]._1_3_,*puVar7);
    }
    else if (uVar5 != 0) goto LAB_2c568248;
  }
  else {
    puStack_ec = (uint *)FUN_2c5674ac(&uStack_f0,0);
    auStack_e4[0] = uStack_f0;
LAB_2c568248:
    FUN_2c674668(puStack_ec,puVar7,uVar5);
  }
  *(undefined1 *)((int)puStack_ec + uStack_f0) = 0;
  puVar7 = *(undefined1 **)(iVar4 + 4);
  uVar5 = *(uint *)(iVar4 + 8);
  puStack_d4 = auStack_cc;
  uStack_e8 = uStack_f0;
  if ((puVar7 + uVar5 != (undefined1 *)0x0) && (puVar7 == (undefined1 *)0x0)) goto LAB_2c5684c6;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      auStack_cc[0] = CONCAT31(auStack_cc[0]._1_3_,*puVar7);
    }
    else {
      uStack_f0 = uVar5;
      if (uVar5 != 0) goto LAB_2c5683d8;
    }
  }
  else {
    uStack_f0 = uVar5;
    puStack_d4 = (uint *)FUN_2c5674ac(&uStack_f0,0);
    auStack_cc[0] = uStack_f0;
LAB_2c5683d8:
    FUN_2c674668(puStack_d4,puVar7,uVar5);
    uVar5 = uStack_f0;
  }
  uStack_f0 = uVar5;
  *(undefined1 *)((int)puStack_d4 + uStack_f0) = 0;
  puVar7 = *(undefined1 **)(iVar4 + 0x1c);
  uVar5 = *(uint *)(iVar4 + 0x20);
  puStack_bc = auStack_b4;
  uStack_d0 = uStack_f0;
  if ((puVar7 + uVar5 != (undefined1 *)0x0) && (puVar7 == (undefined1 *)0x0)) goto LAB_2c5684c6;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      auStack_b4[0] = CONCAT31(auStack_b4[0]._1_3_,*puVar7);
    }
    else {
      uStack_f0 = uVar5;
      if (uVar5 != 0) goto LAB_2c56841c;
    }
  }
  else {
    uStack_f0 = uVar5;
    puStack_bc = (uint *)FUN_2c5674ac(&uStack_f0,0);
    auStack_b4[0] = uStack_f0;
LAB_2c56841c:
    FUN_2c674668(puStack_bc,puVar7,uVar5);
    uVar5 = uStack_f0;
  }
  uStack_f0 = uVar5;
  *(undefined1 *)((int)puStack_bc + uStack_f0) = 0;
  uVar3 = *(undefined4 *)(iVar8 + 0x68);
  puVar7 = *(undefined1 **)(iVar4 + 0x4c);
  uVar5 = *(uint *)(iVar4 + 0x50);
  puStack_a4 = auStack_9c;
  uStack_b8 = uStack_f0;
  if ((puVar7 + uVar5 != (undefined1 *)0x0) && (puVar7 == (undefined1 *)0x0)) {
LAB_2c5684c6:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c5684f0);
  }
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      auStack_9c[0] = CONCAT31(auStack_9c[0]._1_3_,*puVar7);
    }
    else {
      uStack_f0 = uVar5;
      if (uVar5 != 0) goto LAB_2c5683fa;
    }
  }
  else {
    uStack_f0 = uVar5;
    puStack_a4 = (uint *)FUN_2c5674ac(&uStack_f0,0);
    auStack_9c[0] = uStack_f0;
LAB_2c5683fa:
    FUN_2c674668(puStack_a4,puVar7,uVar5);
    uVar5 = uStack_f0;
  }
  uStack_f0 = uVar5;
  *(undefined1 *)((int)puStack_a4 + uStack_f0) = 0;
  uStack_a0 = uStack_f0;
  FUN_2c567150(iVar6,&puStack_ec,&puStack_d4,&puStack_bc,uVar3,&puStack_a4,
               *(undefined1 *)(iVar4 + 100),*(undefined1 *)(iVar4 + 0x65));
  if (puStack_a4 != auStack_9c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_bc != auStack_b4) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_d4 != auStack_cc) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_ec == auStack_e4) {
LAB_2c56820e:
    uVar3 = FUN_2c5c55d8();
    iVar4 = func_0x2c5c5894(uVar3,*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x34),
                            *(int *)(param_1 + 0x24) + 0x68);
    if (iVar4 == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x68) = 0;
    }
    if (*_LAB_2c5683b4 != iStack_2c) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return;
  }
LAB_2c568208:
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0);
}

