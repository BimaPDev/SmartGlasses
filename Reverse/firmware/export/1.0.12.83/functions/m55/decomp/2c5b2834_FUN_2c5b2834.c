/* FUN_2c5b2834 @ 0x2c5b2834 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5b2834(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puStack_1a4;
  undefined4 *puStack_1a0;
  undefined4 *puStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined1 auStack_180 [124];
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined2 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_bc [124];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined2 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  iStack_24 = *_LAB_2c5b2b14;
  piVar1 = (int *)FUN_2c48e3b8(param_2,param_2,param_3,0);
  iVar2 = FUN_2c48e424(piVar1,_LAB_2c5b2b18);
  if (iVar2 == 0) {
    iVar2 = FUN_2c48e85c(piVar1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5b2b30,0x97,_LAB_2c5b2b34,_LAB_2c5b2b38,_LAB_2c5b2b24);
    }
    FUN_2c5abf68();
    puStack_1a4 = (undefined4 *)FUN_2c5ac3d0();
    if (puStack_1a4 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5b2b30,0x85,_LAB_2c5b2b34,_LAB_2c5b2b3c);
    }
    puStack_1a0 = puStack_1a4;
    puStack_19c = puStack_1a4;
    func_0x2c5b5b20(piVar1,&puStack_1a4);
    FUN_2c5b1e68(param_1 + 0x44,*(undefined4 *)(param_1 + 0x154),&puStack_1a4);
    FUN_2c5afbe4(param_1 + 0x44);
    func_0x2c5b39e8(param_1 + 0x38);
    puVar8 = puStack_1a4;
    puVar6 = puStack_1a0;
    while (puVar8 != puStack_1a0) {
      puVar11 = (undefined4 *)*puVar8;
      puVar8 = puVar8 + 1;
      puVar6 = puStack_1a4;
      if (puVar11 != (undefined4 *)0x0) {
        *puVar11 = _LAB_2c5b2b40;
        if ((undefined4 *)puVar11[8] != puVar11 + 10) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if ((undefined4 *)puVar11[1] == puVar11 + 3) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0,puVar11);
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
    }
    puStack_1a4 = (undefined4 *)0x0;
    puStack_1a0 = (undefined4 *)0x0;
    puStack_19c = (undefined4 *)0x0;
    if (puVar6 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,puVar6);
    }
  }
  else {
    uStack_e4 = _LAB_2c5b2b1c;
    uStack_d0 = 0;
    uStack_c0 = 0;
    uStack_e0 = 0xffffffff;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    FUN_2c674268(auStack_bc,0,0x7c);
    uStack_38 = 0;
    uStack_28 = 0;
    uStack_34 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    func_0x2c5b53f0(piVar1,&uStack_e4);
    iVar2 = FUN_2c5abf68();
    *(uint *)(iVar2 + 8) = uStack_e0;
    *(undefined4 *)(iVar2 + 0xc) = uStack_dc;
    *(undefined4 *)(iVar2 + 0x10) = uStack_d8;
    *(undefined4 *)(iVar2 + 0x14) = uStack_d4;
    *(undefined4 *)(iVar2 + 0x18) = uStack_d0;
    *(undefined4 *)(iVar2 + 0x1c) = uStack_cc;
    *(undefined4 *)(iVar2 + 0x20) = uStack_c8;
    *(undefined4 *)(iVar2 + 0x24) = uStack_c4;
    puVar4 = (undefined1 *)(iVar2 + 0x28);
    puVar8 = &uStack_c0;
    do {
      puVar6 = (undefined4 *)((int)puVar8 + 1);
      *puVar4 = *(undefined1 *)puVar8;
      puVar4 = puVar4 + 1;
      puVar8 = puVar6;
    } while (puVar6 != &uStack_40);
    *(undefined4 *)(iVar2 + 0xa8) = uStack_40;
    puVar4 = (undefined1 *)((int)&uStack_40 + 3);
    puVar9 = (undefined1 *)(iVar2 + 0xac);
    do {
      puVar4 = puVar4 + 1;
      puVar7 = puVar9 + 1;
      *puVar9 = *puVar4;
      puVar9 = puVar7;
    } while (puVar7 != (undefined1 *)(iVar2 + 0xb6));
    *(undefined4 *)(iVar2 + 0xb8) = uStack_30;
    uStack_184 = 0;
    *(undefined4 *)(iVar2 + 0xbc) = uStack_2c;
    *(undefined4 *)(iVar2 + 0xc0) = uStack_28;
    uStack_194 = 0;
    uStack_190 = 0;
    uStack_198 = _LAB_2c5b2b20;
    uStack_18c = 0;
    uStack_188 = 0;
    FUN_2c674268(auStack_180,0,0x7c);
    uStack_e8 = 0xffffffff;
    uStack_fc = 0;
    uStack_ec = 0;
    uStack_f8 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    FUN_2c5b53f8(piVar1,&uStack_198);
    iVar2 = FUN_2c5abf68();
    *(undefined4 *)(iVar2 + 200) = uStack_194;
    *(undefined4 *)(iVar2 + 0xcc) = uStack_190;
    *(undefined4 *)(iVar2 + 0xd0) = uStack_18c;
    *(undefined4 *)(iVar2 + 0xd4) = uStack_188;
    puVar4 = (undefined1 *)(iVar2 + 0xd8);
    puVar8 = &uStack_184;
    do {
      puVar6 = (undefined4 *)((int)puVar8 + 1);
      *puVar4 = *(undefined1 *)puVar8;
      puVar4 = puVar4 + 1;
      puVar8 = puVar6;
    } while (&uStack_104 != puVar6);
    puVar4 = (undefined1 *)((int)&uStack_104 + 3);
    *(undefined4 *)(iVar2 + 0x158) = uStack_104;
    puVar9 = (undefined1 *)(iVar2 + 0x15c);
    do {
      puVar4 = puVar4 + 1;
      puVar7 = puVar9 + 1;
      *puVar9 = *puVar4;
      puVar9 = puVar7;
    } while (puVar7 != (undefined1 *)(iVar2 + 0x166));
    *(undefined4 *)(iVar2 + 0x168) = uStack_f4;
    *(undefined4 *)(iVar2 + 0x16c) = uStack_f0;
    *(undefined4 *)(iVar2 + 0x170) = uStack_ec;
    *(undefined4 *)(iVar2 + 0x174) = uStack_e8;
    if (2 < (uStack_e0 & 0xff)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5b2b30,0xa2,_LAB_2c5b2b2c,_LAB_2c5b2b28,_LAB_2c5b2b24,
                   (int)(char)uStack_e0);
    }
    func_0x2c5b2360(param_1,(int)(char)uStack_e0,&uStack_198);
    FUN_2c5b27dc(param_1,uStack_d8);
    uVar3 = FUN_2c5af03c();
    func_0x2c5af198(uVar3,uStack_d4);
    iVar2 = FUN_2c5af03c();
    if (*(char *)(iVar2 + 8) != '\0') {
      FUN_2c5af548(iVar2,uStack_e8);
    }
    FUN_2c5abf68();
    FUN_2c5ac4f4();
  }
  iVar2 = DAT_2c48deec;
  if (*_LAB_2c5b2b14 != iStack_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  if (piVar1 == (int *)0x0) {
    return;
  }
  do {
    piVar10 = (int *)*piVar1;
    iVar5 = piVar1[3];
    if (-1 < iVar5 << 0x17) {
      if (piVar1[2] != 0) {
        FUN_2c48dea0();
        iVar5 = piVar1[3];
        if (iVar5 << 0x17 < 0) goto LAB_2c48dece;
      }
      if (piVar1[4] != 0) {
        (**(code **)(iVar2 + 4))();
        iVar5 = piVar1[3];
      }
    }
LAB_2c48dece:
    if ((-1 < iVar5 << 0x16) && (piVar1[8] != 0)) {
      (**(code **)(iVar2 + 4))();
    }
    (**(code **)(iVar2 + 4))(piVar1);
    piVar1 = piVar10;
    if (piVar10 == (int *)0x0) {
      return;
    }
  } while( true );
}

