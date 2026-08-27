/* FUN_2c4c82b0 @ 0x2c4c82b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4c82b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined4 extraout_r1;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  int iVar24;
  
  FUN_2c6741e8(0x41,_LAB_2c4c85b4,_LAB_2c4c85b0,param_4,param_4);
  if (param_1 == 1) {
    if (*_LAB_2c4c9234 == 1) {
      return 0;
    }
LAB_2c4c82cc:
    iVar12 = *_LAB_2c4c85b8;
    piVar1 = _LAB_2c4c85b8;
  }
  else {
    if (param_1 != 2) goto LAB_2c4c82cc;
    if (*_LAB_2c4c921c == 1) {
      return 0;
    }
    iVar12 = *_LAB_2c4c9220;
    piVar1 = _LAB_2c4c9220;
  }
  if (iVar12 == 0) {
    iVar12 = FUN_2c4c2564(_LAB_2c4c9224);
    *piVar1 = iVar12;
    if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(_LAB_2c4c9228);
    }
  }
  piVar1 = _LAB_2c4c85bc;
  if (*_LAB_2c4c85bc == 0) {
    iVar12 = FUN_2c4c2564(_LAB_2c4c9558);
    *piVar1 = iVar12;
    if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(_LAB_2c4c955c);
    }
  }
  piVar1 = _LAB_2c4c85c0;
  if (*_LAB_2c4c85c0 == 0) {
    iVar12 = FUN_2c4c2564(_LAB_2c4c9550);
    *piVar1 = iVar12;
    if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(_LAB_2c4c9554);
    }
  }
  piVar1 = _LAB_2c4c85c4;
  if (*_LAB_2c4c85c4 == 0) {
    iVar12 = FUN_2c4c2564(_LAB_2c4c9548);
    *piVar1 = iVar12;
    if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(_LAB_2c4c954c);
    }
  }
  piVar2 = _LAB_2c4c85cc;
  piVar1 = _LAB_2c4c85c8;
  if ((*_LAB_2c4c85c8 == 0) && (*_LAB_2c4c85cc == 0)) {
    iVar12 = FUN_2c674568();
    if (iVar12 == 0) {
      func_0x2c4b7b58(_LAB_2c4c9900);
    }
    else {
      func_0x2c4b7b58(_LAB_2c4c89f8);
    }
    uVar19 = func_0x2c674608();
    *_LAB_2c4c89fc = (uint)(1 < uVar19);
    iVar12 = _LAB_2c4c8a04;
    if (1 < uVar19) {
      *_LAB_2c4c8a00 = _LAB_2c4c8a04;
      *_LAB_2c4c8a08 = iVar12 + 0x200;
      *_LAB_2c4c8a0c = iVar12 + 0x104;
      *_LAB_2c4c8a10 = iVar12 + 0x304;
      *_LAB_2c4c8a14 = iVar12 + 0x118;
      *_LAB_2c4c8a18 = iVar12 + 0x318;
      *_LAB_2c4c8a1c = iVar12 + -0x800;
      *_LAB_2c4c8a20 = iVar12 + -0x600;
      *_LAB_2c4c8a24 = iVar12 + -0x6fc;
      *_LAB_2c4c8a28 = iVar12 + -0x4fc;
      *_LAB_2c4c8a2c = iVar12 + -0x6e8;
      *_LAB_2c4c8a30 = iVar12 + -0x4e8;
    }
    uVar5 = _LAB_2c4c8a48;
    uVar20 = _LAB_2c4c8a44;
    uVar19 = _DAT_2c4c8a38;
    iVar12 = _LAB_2c4c8a34;
    *(uint *)(_LAB_2c4c8a34 + 0x6c) = *(uint *)(_LAB_2c4c8a34 + 0x6c) & 0xffffc03f;
    *(uint *)(iVar12 + 0x33c) = *(uint *)(iVar12 + 0x33c) & 0xfeffffff;
    *(uint *)(iVar12 + 0x33c) = *(uint *)(iVar12 + 0x33c) & 0xfdffffff;
    *(uint *)(iVar12 + 0x33c) = *(uint *)(iVar12 + 0x33c) & 0xffbfffff;
    *(uint *)(iVar12 + 0x33c) = *(uint *)(iVar12 + 0x33c) & 0xfffffffb;
    *(uint *)(iVar12 + 0x33c) = *(uint *)(iVar12 + 0x33c) & 0xffffffbf;
    *(uint *)(iVar12 + 0xd0) = *(uint *)(iVar12 + 0xd0) & 0xfffffffc;
    *(uint *)(iVar12 + 0x33c) = *(uint *)(iVar12 + 0x33c) | 0x500;
    *(uint *)(iVar12 + 0x33c) = *(uint *)(iVar12 + 0x33c) & 0xfffff5ff;
    *(uint *)(iVar12 + 0x244) = *(uint *)(iVar12 + 0x244) & 0xfffffffb;
    *(uint *)(iVar12 + 0x238) = *(uint *)(iVar12 + 0x238) & uVar20 | 0x1000;
    *(uint *)(iVar12 + 0x244) = *(uint *)(iVar12 + 0x244) | 4;
    *(uint *)(iVar12 + 0x244) = *(uint *)(iVar12 + 0x244) & 0xfffffff7;
    *(uint *)(iVar12 + 0x238) = *(uint *)(iVar12 + 0x238) & 0xffff | 0x10000000;
    *(uint *)(iVar12 + 0x244) = *(uint *)(iVar12 + 0x244) | 8;
    *(uint *)(iVar12 + 0x244) = *(uint *)(iVar12 + 0x244) | 3;
    *(uint *)(iVar12 + 0x244) = *(uint *)(iVar12 + 0x244) & 0xffffffbf;
    *(uint *)(iVar12 + 0x23c) = *(uint *)(iVar12 + 0x23c) & uVar20 | 0x1000;
    *(uint *)(iVar12 + 0x244) = *(uint *)(iVar12 + 0x244) | 0x40;
    *(uint *)(iVar12 + 0x244) = *(uint *)(iVar12 + 0x244) & 0xffffff7f;
    *(uint *)(iVar12 + 0x23c) = *(uint *)(iVar12 + 0x23c) & 0xffff | 0x10000000;
    *(uint *)(iVar12 + 0x244) = *(uint *)(iVar12 + 0x244) | 0x80;
    *(uint *)(iVar12 + 0x244) = *(uint *)(iVar12 + 0x244) | 0x30;
    *(uint *)(iVar12 + 0x22c) = *(uint *)(iVar12 + 0x22c) & uVar5;
    *(uint *)(iVar12 + 0x22c) = uVar19 & *(uint *)(iVar12 + 0x22c);
    *(uint *)(iVar12 + 0xd0) = *(uint *)(iVar12 + 0xd0) & 0xfffffbff;
    *(uint *)(iVar12 + 0xd0) = *(uint *)(iVar12 + 0xd0) & 0xfe7fffff;
    *(uint *)(iVar12 + 0xd0) = *(uint *)(iVar12 + 0xd0) & 0xfffffff3;
    *(undefined4 *)(iVar12 + 0x308) = 0x28;
    *(undefined4 *)(iVar12 + 0x30c) = 0x28;
    *(undefined4 *)(iVar12 + 0x310) = 0x28;
    *(undefined4 *)(iVar12 + 0x314) = 0x28;
    *(undefined4 *)(iVar12 + 0x690) = 0x28;
    *(undefined4 *)(iVar12 + 0x694) = 0x28;
    *(undefined4 *)(iVar12 + 0x698) = 0x28;
    uVar14 = *(undefined4 *)(iVar12 + 0x69c);
    *(undefined4 *)(iVar12 + 0x69c) = 0x28;
    uVar19 = 0;
    if (*_LAB_2c4c8a3a_2 != '\0') {
      do {
        uVar20 = uVar19 + 1;
        FUN_2c4c7f48(uVar19 & 0xff,uVar14);
        if (uVar20 == 6) break;
        uVar19 = uVar19 + 2;
        FUN_2c4c7f48(uVar20 & 0xff);
        uVar14 = extraout_r1;
      } while (uVar19 != 6);
    }
    uVar19 = _LAB_2c4c8a40;
    iVar12 = _LAB_2c4c8a34;
    *(uint *)(_LAB_2c4c8a34 + 0x248) = *(uint *)(_LAB_2c4c8a34 + 0x248) & 0xfffffffe;
    *(uint *)(iVar12 + 0x248) = *(uint *)(iVar12 + 0x248) & 0xfffffffd;
    *(uint *)(iVar12 + 0x248) = *(uint *)(iVar12 + 0x248) & 0xfffffffb;
    *(uint *)(iVar12 + 0x248) = *(uint *)(iVar12 + 0x248) | 8;
    *(uint *)(iVar12 + 0x248) = *(uint *)(iVar12 + 0x248) | 0x40;
    *(uint *)(iVar12 + 0x248) = *(uint *)(iVar12 + 0x248) & 0xfffff07f;
    *(uint *)(iVar12 + 0x248) = *(uint *)(iVar12 + 0x248) & 0xffffefff;
    *(uint *)(iVar12 + 0x248) = *(uint *)(iVar12 + 0x248) & 0xffffdfff;
    *(uint *)(iVar12 + 0x24c) = *(uint *)(iVar12 + 0x24c) & 0xfffffffe;
    *(uint *)(iVar12 + 0x24c) = *(uint *)(iVar12 + 0x24c) & 0xfffffffd;
    *(uint *)(iVar12 + 0x24c) = *(uint *)(iVar12 + 0x24c) & 0xfffffffb;
    *(uint *)(iVar12 + 0x24c) = *(uint *)(iVar12 + 0x24c) | 8;
    *(uint *)(iVar12 + 0x24c) = *(uint *)(iVar12 + 0x24c) | 0x40;
    *(uint *)(iVar12 + 0x24c) = *(uint *)(iVar12 + 0x24c) & 0xfffff07f;
    *(uint *)(iVar12 + 0x24c) = *(uint *)(iVar12 + 0x24c) & 0xffffefff;
    *(uint *)(iVar12 + 0x24c) = *(uint *)(iVar12 + 0x24c) & 0xffffdfff;
    *(uint *)(iVar12 + 0x250) = *(uint *)(iVar12 + 0x250) & 0xfffffffe;
    *(uint *)(iVar12 + 0x250) = *(uint *)(iVar12 + 0x250) & 0xfffffffd;
    *(uint *)(iVar12 + 0x250) = *(uint *)(iVar12 + 0x250) & 0xfffffffb;
    *(uint *)(iVar12 + 0x250) = *(uint *)(iVar12 + 0x250) | 8;
    *(uint *)(iVar12 + 0x250) = *(uint *)(iVar12 + 0x250) | 0x40;
    *(uint *)(iVar12 + 0x250) = *(uint *)(iVar12 + 0x250) & 0xfffff07f;
    *(uint *)(iVar12 + 0x250) = *(uint *)(iVar12 + 0x250) & 0xffffefff;
    *(uint *)(iVar12 + 0x250) = *(uint *)(iVar12 + 0x250) & 0xffffdfff;
    *(uint *)(iVar12 + 0x254) = *(uint *)(iVar12 + 0x254) & 0xfffffffe;
    *(uint *)(iVar12 + 0x254) = *(uint *)(iVar12 + 0x254) & 0xfffffffd;
    *(uint *)(iVar12 + 0x254) = *(uint *)(iVar12 + 0x254) & 0xfffffffb;
    *(uint *)(iVar12 + 0x254) = *(uint *)(iVar12 + 0x254) | 8;
    *(uint *)(iVar12 + 0x254) = *(uint *)(iVar12 + 0x254) | 0x40;
    *(uint *)(iVar12 + 0x254) = *(uint *)(iVar12 + 0x254) & 0xfffff07f;
    *(uint *)(iVar12 + 0x254) = *(uint *)(iVar12 + 0x254) & 0xffffefff;
    *(uint *)(iVar12 + 0x254) = *(uint *)(iVar12 + 0x254) & 0xffffdfff;
    *(uint *)(iVar12 + 0x680) = *(uint *)(iVar12 + 0x680) & 0xfffffffe;
    *(uint *)(iVar12 + 0x680) = *(uint *)(iVar12 + 0x680) & 0xfffffffd;
    *(uint *)(iVar12 + 0x680) = *(uint *)(iVar12 + 0x680) & 0xfffffffb;
    *(uint *)(iVar12 + 0x680) = *(uint *)(iVar12 + 0x680) | 8;
    *(uint *)(iVar12 + 0x680) = *(uint *)(iVar12 + 0x680) | 0x40;
    *(uint *)(iVar12 + 0x680) = *(uint *)(iVar12 + 0x680) & 0xfffff07f;
    *(uint *)(iVar12 + 0x680) = *(uint *)(iVar12 + 0x680) & 0xffffefff;
    *(uint *)(iVar12 + 0x680) = *(uint *)(iVar12 + 0x680) & 0xffffdfff;
    *(uint *)(iVar12 + 0x684) = *(uint *)(iVar12 + 0x684) & 0xfffffffe;
    *(uint *)(iVar12 + 0x684) = *(uint *)(iVar12 + 0x684) & 0xfffffffd;
    *(uint *)(iVar12 + 0x684) = *(uint *)(iVar12 + 0x684) & 0xfffffffb;
    *(uint *)(iVar12 + 0x684) = *(uint *)(iVar12 + 0x684) | 8;
    *(uint *)(iVar12 + 0x684) = *(uint *)(iVar12 + 0x684) | 0x40;
    *(uint *)(iVar12 + 0x684) = *(uint *)(iVar12 + 0x684) & 0xfffff07f;
    *(uint *)(iVar12 + 0x684) = *(uint *)(iVar12 + 0x684) & 0xffffefff;
    *(uint *)(iVar12 + 0x684) = *(uint *)(iVar12 + 0x684) & 0xffffdfff;
    *(uint *)(iVar12 + 0x688) = *(uint *)(iVar12 + 0x688) & 0xfffffffe;
    *(uint *)(iVar12 + 0x688) = *(uint *)(iVar12 + 0x688) & 0xfffffffd;
    *(uint *)(iVar12 + 0x688) = *(uint *)(iVar12 + 0x688) & 0xfffffffb;
    *(uint *)(iVar12 + 0x688) = *(uint *)(iVar12 + 0x688) | 8;
    *(uint *)(iVar12 + 0x688) = *(uint *)(iVar12 + 0x688) | 0x40;
    *(uint *)(iVar12 + 0x688) = *(uint *)(iVar12 + 0x688) & 0xfffff07f;
    *(uint *)(iVar12 + 0x688) = *(uint *)(iVar12 + 0x688) & 0xffffefff;
    *(uint *)(iVar12 + 0x688) = *(uint *)(iVar12 + 0x688) & 0xffffdfff;
    *(uint *)(iVar12 + 0x68c) = *(uint *)(iVar12 + 0x68c) & 0xfffffffe;
    *(uint *)(iVar12 + 0x68c) = *(uint *)(iVar12 + 0x68c) & 0xfffffffd;
    *(uint *)(iVar12 + 0x68c) = *(uint *)(iVar12 + 0x68c) & 0xfffffffb;
    *(uint *)(iVar12 + 0x68c) = *(uint *)(iVar12 + 0x68c) | 8;
    *(uint *)(iVar12 + 0x68c) = *(uint *)(iVar12 + 0x68c) | 0x40;
    *(uint *)(iVar12 + 0x68c) = *(uint *)(iVar12 + 0x68c) & 0xfffff07f;
    *(uint *)(iVar12 + 0x68c) = *(uint *)(iVar12 + 0x68c) & 0xffffefff;
    *(uint *)(iVar12 + 0x68c) = *(uint *)(iVar12 + 0x68c) & 0xffffdfff;
    *(uint *)(iVar12 + 0xd0) = *(uint *)(iVar12 + 0xd0) & 0xffffffcf;
    *(uint *)(iVar12 + 0xd0) = *(uint *)(iVar12 + 0xd0) & 0xffffff3f;
    *(uint *)(iVar12 + 0xd0) = *(uint *)(iVar12 + 0xd0) & 0xfffffcff;
    *(uint *)(iVar12 + 0xd4) = *(uint *)(iVar12 + 0xd4) | 0x3000000;
    *(uint *)(iVar12 + 0xd8) = *(uint *)(iVar12 + 0xd8) | 0x3000000;
    *(uint *)(iVar12 + 0x230) = *(uint *)(iVar12 + 0x230) | uVar19;
    *(uint *)(iVar12 + 0x234) = *(uint *)(iVar12 + 0x234) | uVar19;
    iVar12 = func_0x2c4b6cac();
    puVar16 = _LAB_2c4c9908;
    puVar15 = _LAB_2c4c8f04;
    if (iVar12 == 0) {
      uVar14 = 0xc80;
      *_LAB_2c4c9904 = 0xc80;
      uVar17 = 12000;
    }
    else {
      uVar14 = 0x20;
      *_LAB_2c4c8f00 = 0x20;
      uVar17 = 0x480;
      puVar16 = puVar15;
    }
    *puVar16 = uVar17;
    *_LAB_2c4c8f08 = uVar14;
    *_LAB_2c4c8f0c = uVar17;
    *_LAB_2c4c8f10 = 0;
    *_LAB_2c4c8f14 = 0;
    *_LAB_2c4c8f18 = 0;
    *_LAB_2c4c8f1c = 0;
    *_LAB_2c4c8f20 = 0;
    *_LAB_2c4c8f24 = 0;
    *_LAB_2c4c8f28 = 0;
    *_LAB_2c4c8f2c = 0;
    *_LAB_2c4c8f30 = 0;
    *_LAB_2c4c8f34 = 0;
    *_LAB_2c4c8f38 = 0;
    *_LAB_2c4c8f3c = 0;
    *_LAB_2c4c8f40 = 0;
    *_LAB_2c4c8f44 = 0;
    *_LAB_2c4c8f48 = 0;
    *_LAB_2c4c8f4c = 0;
    *_LAB_2c4c8f50 = 0;
    if (param_1 != 1) goto LAB_2c4c8306;
LAB_2c4c8c8e:
    piVar3 = _LAB_2c4c8f54;
    *piVar1 = param_1;
    if (*piVar3 << 0x1f < 0) {
      *_LAB_2c4c8f58 = 0x200;
    }
    piVar6 = _LAB_2c4c8f30;
    if ((*_LAB_2c4c8f30 == 1) || (*piVar3 << 0x1e < 0)) {
      *_LAB_2c4c8f5c = 0x200;
    }
    FUN_2c6741e8(0x41,_LAB_2c4c8f64,_LAB_2c4c8f60);
    uVar19 = _LAB_2c4c98b8;
    iVar12 = _LAB_2c4c98b4;
    if (*piVar3 << 0x1f < 0) {
      *(uint *)(_LAB_2c4c98b4 + 0xd4) = *(uint *)(_LAB_2c4c98b4 + 0xd4) & 0xfbffffff;
      *(uint *)(iVar12 + 0xd4) = uVar19 & *(uint *)(iVar12 + 0xd4) | 0x200;
      FUN_2c673b08(1);
      puVar15 = _LAB_2c4c98bc;
      puVar21 = _LAB_2c4c98bc + 0x4e;
      *(uint *)(iVar12 + 0xd4) = *(uint *)(iVar12 + 0xd4) | 0x4000000;
      *_LAB_2c4c98c0 = 0;
      *_LAB_2c4c98c4 = 0;
      puVar16 = puVar15;
      do {
        puVar16[7] = 0;
        puVar16[4] = 0;
        puVar16[5] = 0;
        puVar16[6] = 0;
        puVar16[2] = 0;
        puVar16[3] = 0;
        puVar22 = _LAB_2c4c9910;
        puVar23 = _LAB_2c4c990c;
        piVar7 = _LAB_2c4c98c8;
        iVar12 = _LAB_2c4c98b4;
        puVar16 = puVar16 + 6;
      } while (puVar16 != puVar21);
      *puVar15 = 0x200;
      puVar15[1] = 0xd0000;
      uVar19 = *(uint *)(iVar12 + 0x6c) & 0xffffc03f | *(uint *)(iVar12 + 0x6c) & 0x3fc0;
      if (*piVar7 == 1) {
        uVar19 = uVar19 | 0x100;
      }
      else {
        uVar19 = uVar19 | 0x40;
      }
      *(uint *)(iVar12 + 0x6c) = uVar19;
      iVar11 = func_0x2c4b6cac();
      iVar12 = _LAB_2c4c98b4;
      iVar24 = *piVar7;
      uVar14 = 0x401;
      if (iVar11 == 0) {
        uVar14 = 0x10;
        uVar18 = 8;
        uVar17 = _LAB_2c4c98d4;
        uVar10 = _DAT_2c4c98cc;
      }
      else {
        uVar18 = 0x200;
        uVar17 = _LAB_2c4c98d8;
        uVar10 = _LAB_2c4c98d0;
      }
      if (iVar24 == 1) {
        *(uint *)(_LAB_2c4c98b4 + 0x250) = *(uint *)(_LAB_2c4c98b4 + 0x250) & 0xfffffffe;
        *(uint *)(iVar12 + 0x250) = *(uint *)(iVar12 + 0x250) & 0xfffffffd;
        *(uint *)(iVar12 + 0x250) = *(uint *)(iVar12 + 0x250) & 0xfffffffb;
        *(uint *)(iVar12 + 0x250) = *(uint *)(iVar12 + 0x250) & 0xffffefff;
        *(uint *)(iVar12 + 0x250) = *(uint *)(iVar12 + 0x250) & 0xffffdfff;
        puVar23 = (undefined4 *)*puVar23;
        puVar22 = (undefined4 *)*puVar22;
        *puVar23 = uVar10;
        puVar23[1] = uVar17;
        puVar23[4] = uVar18;
        puVar23[2] = uVar14;
        puVar23[3] = uVar18;
        *puVar22 = uVar10;
        puVar22[1] = uVar17;
        puVar22[4] = uVar18;
        puVar22[2] = uVar14;
        puVar22[3] = uVar18;
        *(uint *)(iVar12 + 0x250) = *(uint *)(iVar12 + 0x250) & 0xffffffef;
        *(uint *)(iVar12 + 0x250) = *(uint *)(iVar12 + 0x250) & 0xffffffdf;
        *(uint *)(iVar12 + 0x25c) = *(uint *)(iVar12 + 0x25c) & 0xffffffdf;
      }
      else {
        *(uint *)(_LAB_2c4c98b4 + 0x248) = *(uint *)(_LAB_2c4c98b4 + 0x248) & 0xfffffffe;
        *(uint *)(iVar12 + 0x248) = *(uint *)(iVar12 + 0x248) & 0xfffffffd;
        *(uint *)(iVar12 + 0x248) = *(uint *)(iVar12 + 0x248) & 0xfffffffb;
        *(uint *)(iVar12 + 0x248) = *(uint *)(iVar12 + 0x248) & 0xffffefff;
        *(uint *)(iVar12 + 0x248) = *(uint *)(iVar12 + 0x248) & 0xffffdfff;
        puVar23 = (undefined4 *)*puVar23;
        puVar22 = (undefined4 *)*puVar22;
        *puVar23 = uVar10;
        puVar23[1] = uVar17;
        puVar23[4] = uVar18;
        puVar23[2] = uVar14;
        puVar23[3] = uVar18;
        *puVar22 = uVar10;
        puVar22[1] = uVar17;
        puVar22[4] = uVar18;
        puVar22[2] = uVar14;
        puVar22[3] = uVar18;
        *(uint *)(iVar12 + 0x248) = *(uint *)(iVar12 + 0x248) & 0xffffffef;
        *(uint *)(iVar12 + 0x248) = *(uint *)(iVar12 + 0x248) & 0xffffffdf;
        *(uint *)(iVar12 + 0x25c) = *(uint *)(iVar12 + 0x25c) & 0xfffffffd;
      }
      puVar15 = _LAB_2c4c9920;
      uVar18 = _DAT_2c4c991c;
      uVar10 = _LAB_2c4c9918;
      uVar17 = _LAB_2c4c9914;
      uVar14 = _LAB_2c4c98e4;
      puVar16 = (undefined4 *)*_LAB_2c4c98da_2;
      puVar21 = (undefined4 *)*_LAB_2c4c98e0;
      *puVar16 = _LAB_2c4c9914;
      puVar16[1] = 0;
      puVar16[4] = 0;
      puVar16[2] = uVar10;
      puVar16[3] = 0;
      puVar16[5] = uVar18;
      puVar16[6] = 0;
      puVar16[9] = 0;
      puVar16[7] = uVar14;
      puVar16[8] = 0;
      *puVar21 = uVar17;
      puVar21[1] = 0;
      puVar16 = _LAB_2c4c9924;
      puVar21[4] = 0;
      puVar21[2] = uVar10;
      puVar21[3] = 0;
      puVar21[5] = uVar18;
      puVar21[6] = 0;
      puVar21[9] = 0;
      puVar21[7] = uVar14;
      puVar21[8] = 0;
      puVar23 = _LAB_2c4c992c;
      puVar21 = _LAB_2c4c9928;
      uVar14 = puVar15[1];
      uVar17 = puVar15[2];
      uVar10 = puVar15[3];
      *puVar16 = *puVar15;
      puVar16[1] = uVar14;
      puVar16[2] = uVar17;
      puVar16[3] = uVar10;
      uVar14 = puVar15[5];
      puVar16[4] = puVar15[4];
      puVar16[5] = uVar14;
      uVar14 = puVar21[1];
      uVar17 = puVar21[2];
      uVar10 = puVar21[3];
      *puVar23 = *puVar21;
      puVar23[1] = uVar14;
      puVar23[2] = uVar17;
      puVar23[3] = uVar10;
      uVar14 = puVar21[5];
      puVar23[4] = puVar21[4];
      puVar23[5] = uVar14;
      iVar11 = _LAB_2c4c9bd8;
      uVar8 = _LAB_2c4c9bcc;
      uVar5 = _LAB_2c4c9bc8;
      uVar20 = _LAB_2c4c98ec;
      uVar19 = _LAB_2c4c98e8;
      iVar12 = _LAB_2c4c98b4;
      if (iVar24 == 1) {
        *(uint *)(_LAB_2c4c9bd8 + 0x250) = *(uint *)(_LAB_2c4c9bd8 + 0x250) & 0xffffffbf;
        *(uint *)(iVar11 + 0x25c) = *(uint *)(iVar11 + 0x25c) & 0xffbfffff;
        *(uint *)(iVar11 + 0x324) = uVar8 | uVar5 & *(uint *)(iVar11 + 0x324);
        FUN_2c673b08(1);
        *(uint *)(iVar11 + 0x25c) = *(uint *)(iVar11 + 0x25c) | 0x400000;
        *(uint *)(iVar11 + 0x300) = *(uint *)(iVar11 + 0x300) & 0xffe03fff | 0x4000;
      }
      else {
        *(uint *)(_LAB_2c4c98b4 + 0x248) = *(uint *)(_LAB_2c4c98b4 + 0x248) & 0xffffffbf;
        *(uint *)(iVar12 + 0x25c) = *(uint *)(iVar12 + 0x25c) & 0xffefffff;
        *(uint *)(iVar12 + 0x31c) = uVar20 | uVar19 & *(uint *)(iVar12 + 0x31c);
        FUN_2c673b08(1);
        *(uint *)(iVar12 + 0x25c) = *(uint *)(iVar12 + 0x25c) | 0x100000;
        *(uint *)(iVar12 + 0x300) = *(uint *)(iVar12 + 0x300) & 0xffffff80 | 1;
      }
      puVar21 = (undefined4 *)*_LAB_2c4c98f0;
      puVar15 = (undefined4 *)*_LAB_2c4c98f4;
      puVar16 = puVar21;
      do {
        *puVar16 = 0;
        puVar23 = puVar16 + 5;
        puVar16[1] = 0;
        puVar16[4] = 0;
        puVar16[2] = 0;
        puVar16[3] = 0;
        *puVar15 = 0;
        puVar15[1] = 0;
        puVar15[4] = 0;
        puVar15[2] = 0;
        puVar15[3] = 0;
        iVar11 = _LAB_2c4c9bd8;
        pcVar4 = _LAB_2c4c98f8;
        iVar12 = _LAB_2c4c98b4;
        puVar15 = puVar15 + 5;
        puVar16 = puVar23;
      } while (puVar21 + 0x41 != puVar23);
      if (*piVar7 == 1) {
        *(uint *)(_LAB_2c4c9bd8 + 0x250) = *(uint *)(_LAB_2c4c9bd8 + 0x250) & 0xfffffff7;
        *(uint *)(iVar11 + 0x250) = *(uint *)(iVar11 + 0x250) & 0xfffff07f | 0x680;
        *(uint *)(iVar11 + 0x250) = *(uint *)(iVar11 + 0x250) | 0x2000;
        *(uint *)(iVar11 + 0x250) = *(uint *)(iVar11 + 0x250) | 2;
        *(uint *)(iVar11 + 0x250) = *(uint *)(iVar11 + 0x250) | 4;
        *(uint *)(iVar11 + 0x250) = *(uint *)(iVar11 + 0x250) | 1;
      }
      else {
        *(uint *)(_LAB_2c4c98b4 + 0x248) = *(uint *)(_LAB_2c4c98b4 + 0x248) & 0xfffffff7;
        *(uint *)(iVar12 + 0x248) = *(uint *)(iVar12 + 0x248) & 0xfffff07f | 0x680;
        if (*pcVar4 != '\0') {
          FUN_2c6741e8(0x42,_LAB_2c4c9bd4,_LAB_2c4c9bd0,0);
          FUN_2c4c7c74(0);
          *(uint *)(iVar12 + 0x610) = *(uint *)(iVar12 + 0x610) & 0xfdffffff;
        }
        iVar12 = _LAB_2c4c98b4;
        *(uint *)(_LAB_2c4c98b4 + 0x248) = *(uint *)(_LAB_2c4c98b4 + 0x248) | 0x2000;
        *(uint *)(iVar12 + 0x248) = *(uint *)(iVar12 + 0x248) | 2;
        *(uint *)(iVar12 + 0x248) = *(uint *)(iVar12 + 0x248) | 4;
        *(uint *)(iVar12 + 0x248) = *(uint *)(iVar12 + 0x248) | 1;
      }
      *_LAB_2c4c98fc = 0;
    }
    uVar19 = _LAB_2c4c8f6c;
    iVar12 = _LAB_2c4c8f68;
    if ((*piVar6 != 1) && (-1 < *piVar3 << 0x1e)) goto LAB_2c4c9106;
    *(uint *)(_LAB_2c4c8f68 + 0xd4) = *(uint *)(_LAB_2c4c8f68 + 0xd4) & 0xf7ffffff;
    *(uint *)(iVar12 + 0xd4) = uVar19 & *(uint *)(iVar12 + 0xd4) | 0x200000;
    FUN_2c673b08(1);
    puVar16 = _LAB_2c4c8f74;
    puVar15 = _LAB_2c4c8f6e_2;
    *(uint *)(iVar12 + 0xd4) = *(uint *)(iVar12 + 0xd4) | 0x8000000;
    puVar21 = _LAB_2c4c8f78;
    *puVar15 = 0;
    *puVar21 = 0;
    puVar15 = puVar16;
    do {
      puVar15[7] = 0;
      puVar15[4] = 0;
      puVar15[5] = 0;
      puVar15[6] = 0;
      puVar15[2] = 0;
      puVar15[3] = 0;
      puVar23 = _LAB_2c4c8fb8;
      puVar21 = _LAB_2c4c8fb4;
      uVar14 = _LAB_2c4c8f80;
      piVar3 = _LAB_2c4c8f7c;
      iVar12 = _LAB_2c4c8f68;
      puVar15 = puVar15 + 6;
    } while (puVar16 + 0x4e != puVar15);
    *puVar16 = 0x200;
    puVar16[1] = 0xd0000;
    uVar19 = *(uint *)(iVar12 + 0x6c) & 0xffffc03f | *(uint *)(iVar12 + 0x6c) & 0x3fc0;
    if (*piVar3 == 1) {
      uVar19 = uVar19 | 0x40;
    }
    else {
      uVar19 = uVar19 | 0x100;
    }
    *(uint *)(iVar12 + 0x6c) = uVar19;
    iVar11 = func_0x2c4b6cac();
    iVar12 = _LAB_2c4c8f68;
    iVar24 = *piVar3;
    uVar17 = 0x401;
    if (iVar11 == 0) {
      uVar17 = 0x10;
      uVar18 = 8;
      uVar14 = _DAT_2c4c8f8c;
      uVar10 = _LAB_2c4c8f84;
    }
    else {
      uVar18 = 0x200;
      uVar10 = _LAB_2c4c8f88;
    }
    if (iVar24 == 1) {
      *(uint *)(_LAB_2c4c8f68 + 0x248) = *(uint *)(_LAB_2c4c8f68 + 0x248) & 0xfffffffe;
      *(uint *)(iVar12 + 0x248) = *(uint *)(iVar12 + 0x248) & 0xfffffffd;
      *(uint *)(iVar12 + 0x248) = *(uint *)(iVar12 + 0x248) & 0xfffffffb;
      *(uint *)(iVar12 + 0x248) = *(uint *)(iVar12 + 0x248) & 0xffffefff;
      *(uint *)(iVar12 + 0x248) = *(uint *)(iVar12 + 0x248) & 0xffffdfff;
      puVar21 = (undefined4 *)*puVar21;
      puVar23 = (undefined4 *)*puVar23;
      *puVar21 = uVar14;
      puVar21[1] = uVar10;
      puVar21[4] = uVar18;
      puVar21[2] = uVar17;
      puVar21[3] = uVar18;
      *puVar23 = uVar14;
      puVar23[1] = uVar10;
      puVar23[4] = uVar18;
      puVar23[2] = uVar17;
      puVar23[3] = uVar18;
      *(uint *)(iVar12 + 0x248) = *(uint *)(iVar12 + 0x248) & 0xffffffef;
      *(uint *)(iVar12 + 0x248) = *(uint *)(iVar12 + 0x248) & 0xffffffdf;
      *(uint *)(iVar12 + 0x25c) = *(uint *)(iVar12 + 0x25c) & 0xfffffffd;
    }
    else {
      *(uint *)(_LAB_2c4c8f68 + 0x250) = *(uint *)(_LAB_2c4c8f68 + 0x250) & 0xfffffffe;
      *(uint *)(iVar12 + 0x250) = *(uint *)(iVar12 + 0x250) & 0xfffffffd;
      *(uint *)(iVar12 + 0x250) = *(uint *)(iVar12 + 0x250) & 0xfffffffb;
      *(uint *)(iVar12 + 0x250) = *(uint *)(iVar12 + 0x250) & 0xffffefff;
      *(uint *)(iVar12 + 0x250) = *(uint *)(iVar12 + 0x250) & 0xffffdfff;
      puVar21 = (undefined4 *)*puVar21;
      puVar23 = (undefined4 *)*puVar23;
      *puVar21 = uVar14;
      puVar21[1] = uVar10;
      puVar21[4] = uVar18;
      puVar21[2] = uVar17;
      puVar21[3] = uVar18;
      *puVar23 = uVar14;
      puVar23[1] = uVar10;
      puVar23[4] = uVar18;
      puVar23[2] = uVar17;
      puVar23[3] = uVar18;
      *(uint *)(iVar12 + 0x250) = *(uint *)(iVar12 + 0x250) & 0xffffffef;
      *(uint *)(iVar12 + 0x250) = *(uint *)(iVar12 + 0x250) & 0xffffffdf;
      *(uint *)(iVar12 + 0x25c) = *(uint *)(iVar12 + 0x25c) & 0xffffffdf;
    }
    puVar16 = _LAB_2c4c8fc4;
    uVar18 = _LAB_2c4c8fc0;
    uVar10 = _LAB_2c4c8fbc;
    uVar17 = _LAB_2c4c8f9c;
    uVar14 = _DAT_2c4c8f98;
    puVar15 = (undefined4 *)*_LAB_2c4c8f90;
    puVar23 = (undefined4 *)*_LAB_2c4c8f94;
    *puVar15 = _LAB_2c4c8fbc;
    puVar15[1] = 0;
    puVar15[4] = 0;
    puVar15[2] = uVar18;
    puVar15[3] = 0;
    puVar15[5] = uVar14;
    puVar15[6] = 0;
    puVar15[9] = 0;
    puVar15[7] = uVar17;
    puVar15[8] = 0;
    *puVar23 = uVar10;
    puVar23[1] = 0;
    puVar21 = _LAB_2c4c8fc8;
    puVar23[4] = 0;
    puVar23[2] = uVar18;
    puVar23[3] = 0;
    puVar23[5] = uVar14;
    puVar23[6] = 0;
    puVar23[9] = 0;
    puVar23[7] = uVar17;
    puVar23[8] = 0;
    puVar23 = _LAB_2c4c8fcc;
    puVar15 = _LAB_2c4c8fa0;
    uVar14 = puVar16[1];
    uVar17 = puVar16[2];
    uVar10 = puVar16[3];
    *puVar21 = *puVar16;
    puVar21[1] = uVar14;
    puVar21[2] = uVar17;
    puVar21[3] = uVar10;
    uVar14 = puVar16[5];
    puVar21[4] = puVar16[4];
    puVar21[5] = uVar14;
    uVar14 = puVar23[1];
    uVar17 = puVar23[2];
    uVar10 = puVar23[3];
    *puVar15 = *puVar23;
    puVar15[1] = uVar14;
    puVar15[2] = uVar17;
    puVar15[3] = uVar10;
    uVar14 = puVar23[5];
    puVar15[4] = puVar23[4];
    puVar15[5] = uVar14;
    uVar5 = _LAB_2c4c9bcc;
    uVar20 = _LAB_2c4c9bc8;
    uVar19 = _LAB_2c4c8fa4;
    iVar12 = _LAB_2c4c8f68;
    if (iVar24 == 1) {
      *(uint *)(_LAB_2c4c8f68 + 0x248) = *(uint *)(_LAB_2c4c8f68 + 0x248) & 0xffffffbf;
      *(uint *)(iVar12 + 0x25c) = *(uint *)(iVar12 + 0x25c) & 0xffefffff;
      *(uint *)(iVar12 + 0x31c) = uVar5 | uVar20 & *(uint *)(iVar12 + 0x31c);
      FUN_2c673b08(1);
      *(uint *)(iVar12 + 0x25c) = *(uint *)(iVar12 + 0x25c) | 0x100000;
      *(uint *)(iVar12 + 0x300) = *(uint *)(iVar12 + 0x300) & 0xffffff80 | 1;
    }
    else {
      *(uint *)(_LAB_2c4c8f68 + 0x250) = *(uint *)(_LAB_2c4c8f68 + 0x250) & 0xffffffbf;
      *(uint *)(iVar12 + 0x25c) = *(uint *)(iVar12 + 0x25c) & 0xffbfffff;
      *(uint *)(iVar12 + 0x324) = _LAB_2c4c8fa8 | uVar19 & *(uint *)(iVar12 + 0x324);
      FUN_2c673b08(1);
      *(uint *)(iVar12 + 0x25c) = *(uint *)(iVar12 + 0x25c) | 0x400000;
      *(uint *)(iVar12 + 0x300) = *(uint *)(iVar12 + 0x300) & 0xffe03fff | 0x4000;
    }
    puVar21 = (undefined4 *)*_LAB_2c4c8fac;
    puVar15 = (undefined4 *)*_LAB_2c4c8fb0;
    puVar16 = puVar21;
    do {
      *puVar16 = 0;
      puVar23 = puVar16 + 5;
      puVar16[1] = 0;
      puVar16[4] = 0;
      puVar16[2] = 0;
      puVar16[3] = 0;
      *puVar15 = 0;
      puVar15[1] = 0;
      puVar15[4] = 0;
      puVar15[2] = 0;
      puVar15[3] = 0;
      iVar11 = _LAB_2c4c98b4;
      pcVar4 = _LAB_2c4c9208;
      iVar12 = _LAB_2c4c9204;
      puVar15 = puVar15 + 5;
      puVar16 = puVar23;
    } while (puVar23 != puVar21 + 0x41);
    if (*piVar3 == 1) {
      *(uint *)(_LAB_2c4c98b4 + 0x248) = *(uint *)(_LAB_2c4c98b4 + 0x248) & 0xfffffff7;
      *(uint *)(iVar11 + 0x248) = *(uint *)(iVar11 + 0x248) & 0xfffff07f | 0x680;
      *(uint *)(iVar11 + 0x248) = *(uint *)(iVar11 + 0x248) | 0x2000;
      *(uint *)(iVar11 + 0x248) = *(uint *)(iVar11 + 0x248) | 2;
      *(uint *)(iVar11 + 0x248) = *(uint *)(iVar11 + 0x248) | 4;
      *(uint *)(iVar11 + 0x248) = *(uint *)(iVar11 + 0x248) | 1;
    }
    else {
      *(uint *)(_LAB_2c4c9204 + 0x250) = *(uint *)(_LAB_2c4c9204 + 0x250) & 0xfffffff7;
      *(uint *)(iVar12 + 0x250) = *(uint *)(iVar12 + 0x250) & 0xfffff07f | 0x680;
      if (*pcVar4 != '\0') {
        FUN_2c6741e8(0x42,_LAB_2c4c9bd4,_LAB_2c4c9bd0,2);
        FUN_2c4c7c74(2);
        *(uint *)(iVar12 + 0x648) = *(uint *)(iVar12 + 0x648) & 0xfdffffff;
      }
      iVar12 = _LAB_2c4c9204;
      *(uint *)(_LAB_2c4c9204 + 0x250) = *(uint *)(_LAB_2c4c9204 + 0x250) | 0x2000;
      *(uint *)(iVar12 + 0x250) = *(uint *)(iVar12 + 0x250) | 2;
      *(uint *)(iVar12 + 0x250) = *(uint *)(iVar12 + 0x250) | 4;
      *(uint *)(iVar12 + 0x250) = *(uint *)(iVar12 + 0x250) | 1;
    }
    *_LAB_2c4c920c = 0;
    if (*piVar1 != 1) goto LAB_2c4c910c;
LAB_2c4c906c:
    piVar3 = _LAB_2c4c9210;
    iVar12 = _LAB_2c4c9204;
    if (*piVar2 != 1) goto LAB_2c4c9114;
    if (*_LAB_2c4c9210 << 0x1f < 0) {
      *(uint *)(_LAB_2c4c9204 + 0xd0) = *(uint *)(_LAB_2c4c9204 + 0xd0) | 0x800000;
      *(uint *)(iVar12 + 0xd0) = *(uint *)(iVar12 + 0xd0) | 4;
    }
    iVar12 = _LAB_2c4c9204;
    if ((*_LAB_2c4c9214 == 1) || (*piVar3 << 0x1e < 0)) {
      *(uint *)(_LAB_2c4c9204 + 0xd0) = *(uint *)(_LAB_2c4c9204 + 0xd0) | 0x1000000;
      *(uint *)(iVar12 + 0xd0) = *(uint *)(iVar12 + 0xd0) | 8;
    }
  }
  else {
    if (param_1 == 1) goto LAB_2c4c8c8e;
LAB_2c4c8306:
    piVar3 = _LAB_2c4c85d0;
    if (param_1 == 2) {
      *piVar2 = 1;
      if (*piVar3 << 0x1f < 0) {
        *_LAB_2c4c85d4 = 0x200;
      }
      if (*piVar3 << 0x1e < 0) {
        *_LAB_2c4c85d8 = 0x200;
      }
      FUN_2c6741e8(0x41,_LAB_2c4c85b4,_LAB_2c4c85dc);
      iVar12 = _LAB_2c4c9500;
      if (*piVar3 << 0x1f < 0) {
        *(uint *)(_LAB_2c4c9500 + 0xd8) = *(uint *)(_LAB_2c4c9500 + 0xd8) & 0xfbffffff;
        *(uint *)(iVar12 + 0xd8) = _LAB_2c4c9504 & *(uint *)(iVar12 + 0xd8) | 0x200;
        FUN_2c673b08(1);
        puVar15 = _LAB_2c4c9508;
        puVar21 = _LAB_2c4c9508 + 0x4e;
        *(uint *)(iVar12 + 0xd8) = *(uint *)(iVar12 + 0xd8) | 0x4000000;
        *_LAB_2c4c950c = 0;
        *_LAB_2c4c9510 = 0;
        puVar16 = puVar15;
        do {
          puVar16[7] = 0;
          puVar16[4] = 0;
          puVar16[5] = 0;
          puVar16[6] = 0;
          puVar16[2] = 0;
          puVar16[3] = 0;
          uVar19 = _LAB_2c4c9568;
          puVar22 = _LAB_2c4c9564;
          puVar23 = _LAB_2c4c9560;
          uVar14 = _LAB_2c4c9514;
          iVar12 = _LAB_2c4c9500;
          puVar16 = puVar16 + 6;
        } while (puVar16 != puVar21);
        *puVar15 = 0x200;
        puVar15[1] = 0xd0000;
        *(uint *)(iVar12 + 0x6c) =
             *(uint *)(iVar12 + 0x6c) & 0xffffc03f | *(uint *)(iVar12 + 0x6c) & 0x3fc0 | 0x400;
        *(uint *)(iVar12 + 0x680) = *(uint *)(iVar12 + 0x680) & 0xfffffffe;
        *(uint *)(iVar12 + 0x680) = *(uint *)(iVar12 + 0x680) & 0xfffffffd;
        *(uint *)(iVar12 + 0x680) = *(uint *)(iVar12 + 0x680) & 0xfffffffb;
        *(uint *)(iVar12 + 0x680) = *(uint *)(iVar12 + 0x680) & 0xffffefff;
        *(uint *)(iVar12 + 0x680) = *(uint *)(iVar12 + 0x680) & 0xffffdfff;
        iVar9 = func_0x2c4b6cac();
        uVar17 = _DAT_2c4c956c;
        iVar24 = _LAB_2c4c9528;
        iVar11 = _LAB_2c4c9524;
        uVar10 = 0x401;
        if (iVar9 == 0) {
          uVar13 = 8;
          uVar10 = 0x10;
          uVar18 = _DAT_2c4c951c;
          uVar14 = _LAB_2c4c9518;
        }
        else {
          uVar13 = 0x200;
          uVar18 = _LAB_2c4c9520;
        }
        *(undefined4 *)(_LAB_2c4c9528 + 4) = uVar18;
        *(undefined4 *)(iVar24 + 8) = uVar14;
        *(undefined4 *)(iVar24 + 0x14) = uVar13;
        *(undefined4 *)(iVar24 + 0xc) = uVar10;
        *(undefined4 *)(iVar24 + 0x10) = uVar13;
        *(undefined4 *)(iVar11 + 4) = uVar18;
        *(undefined4 *)(iVar11 + 8) = uVar14;
        *(undefined4 *)(iVar11 + 0x14) = uVar13;
        *(undefined4 *)(iVar11 + 0xc) = uVar10;
        *(undefined4 *)(iVar11 + 0x10) = uVar13;
        uVar18 = _LAB_2c4c9570;
        uVar14 = _DAT_2c4c952c;
        *(uint *)(iVar12 + 0x680) = *(uint *)(iVar12 + 0x680) & 0xffffffef;
        *(uint *)(iVar12 + 0x680) = *(uint *)(iVar12 + 0x680) & 0xffffffdf;
        *(uint *)(iVar12 + 0x25c) = *(uint *)(iVar12 + 0x25c) & 0xfffffdff;
        uVar10 = _LAB_2c4c9530;
        *(undefined4 *)(iVar24 + 0x18) = uVar17;
        *(undefined4 *)(iVar24 + 0x1c) = 0;
        *(undefined4 *)(iVar24 + 0x28) = 0;
        *(undefined4 *)(iVar24 + 0x20) = uVar18;
        *(undefined4 *)(iVar24 + 0x24) = 0;
        *(undefined4 *)(iVar24 + 0x2c) = uVar14;
        *(undefined4 *)(iVar24 + 0x30) = 0;
        *(undefined4 *)(iVar24 + 0x3c) = 0;
        *(undefined4 *)(iVar24 + 0x34) = uVar10;
        *(undefined4 *)(iVar24 + 0x38) = 0;
        *(undefined4 *)(iVar11 + 0x18) = uVar17;
        *(undefined4 *)(iVar11 + 0x1c) = 0;
        *(undefined4 *)(iVar11 + 0x28) = 0;
        *(undefined4 *)(iVar11 + 0x20) = uVar18;
        *(undefined4 *)(iVar11 + 0x24) = 0;
        *(undefined4 *)(iVar11 + 0x2c) = uVar14;
        *(undefined4 *)(iVar11 + 0x30) = 0;
        *(undefined4 *)(iVar11 + 0x3c) = 0;
        *(undefined4 *)(iVar11 + 0x34) = uVar10;
        *(undefined4 *)(iVar11 + 0x38) = 0;
        puVar16 = _LAB_2c4c9578;
        puVar15 = _LAB_2c4c9574;
        uVar14 = puVar23[1];
        uVar17 = puVar23[2];
        uVar10 = puVar23[3];
        *puVar22 = *puVar23;
        puVar22[1] = uVar14;
        puVar22[2] = uVar17;
        puVar22[3] = uVar10;
        uVar14 = puVar23[5];
        puVar22[4] = puVar23[4];
        puVar22[5] = uVar14;
        uVar14 = puVar15[1];
        uVar17 = puVar15[2];
        uVar10 = puVar15[3];
        *puVar16 = *puVar15;
        puVar16[1] = uVar14;
        puVar16[2] = uVar17;
        puVar16[3] = uVar10;
        uVar14 = puVar15[5];
        puVar16[4] = puVar15[4];
        puVar16[5] = uVar14;
        *(uint *)(iVar12 + 0x680) = *(uint *)(iVar12 + 0x680) & 0xffffffbf;
        *(uint *)(iVar12 + 0x25c) = *(uint *)(iVar12 + 0x25c) & 0xfeffffff;
        *(uint *)(iVar12 + 0x32c) = *(uint *)(iVar12 + 0x32c) & uVar19 | _LAB_2c4c9534;
        FUN_2c673b08(1);
        puVar15 = _LAB_2c4c9538;
        *(uint *)(iVar12 + 0x25c) = *(uint *)(iVar12 + 0x25c) | 0x1000000;
        *(uint *)(iVar12 + 0x304) = *(uint *)(iVar12 + 0x304) & 0xffffff80 | 1;
        puVar16 = _LAB_2c4c953c;
        do {
          *puVar16 = 0;
          puVar16[1] = 0;
          puVar21 = puVar16 + 5;
          puVar16[4] = 0;
          puVar16[2] = 0;
          puVar16[3] = 0;
          puVar16[0x80] = 0;
          puVar16[0x81] = 0;
          puVar16[0x84] = 0;
          puVar16[0x82] = 0;
          puVar16[0x83] = 0;
          iVar12 = _LAB_2c4c9500;
          puVar16 = puVar21;
        } while (puVar21 != puVar15);
        *(uint *)(_LAB_2c4c9500 + 0x680) = *(uint *)(_LAB_2c4c9500 + 0x680) & 0xfffffff7;
        *(uint *)(iVar12 + 0x680) = *(uint *)(iVar12 + 0x680) & 0xfffff07f | 0x680;
        if (*_LAB_2c4c9540 != '\0') {
          FUN_2c6741e8(0x42,_LAB_2c4c9bd4,_LAB_2c4c9bd0,4);
          FUN_2c4c7c74(4);
          *(uint *)(iVar12 + 0x6a0) = *(uint *)(iVar12 + 0x6a0) & 0xfdffffff;
        }
        iVar12 = _LAB_2c4c9500;
        *(uint *)(_LAB_2c4c9500 + 0x680) = *(uint *)(_LAB_2c4c9500 + 0x680) | 0x2000;
        *(uint *)(iVar12 + 0x680) = *(uint *)(iVar12 + 0x680) | 2;
        *(uint *)(iVar12 + 0x680) = *(uint *)(iVar12 + 0x680) | 4;
        *(uint *)(iVar12 + 0x680) = *(uint *)(iVar12 + 0x680) | 1;
        *_LAB_2c4c9544 = 0;
      }
      uVar19 = _LAB_2c4c85e4;
      iVar12 = _LAB_2c4c85e0;
      if (*piVar3 << 0x1e < 0) {
        *(uint *)(_LAB_2c4c85e0 + 0xd8) = *(uint *)(_LAB_2c4c85e0 + 0xd8) & 0xf7ffffff;
        *(uint *)(iVar12 + 0xd8) = uVar19 & *(uint *)(iVar12 + 0xd8) | 0x200000;
        FUN_2c673b08(1);
        puVar16 = _LAB_2c4c85ec;
        puVar15 = _LAB_2c4c85e8;
        *(uint *)(iVar12 + 0xd8) = *(uint *)(iVar12 + 0xd8) | 0x8000000;
        puVar21 = _LAB_2c4c85f0;
        *puVar15 = 0;
        *puVar21 = 0;
        puVar15 = puVar16;
        do {
          puVar15[7] = 0;
          puVar15[4] = 0;
          puVar15[5] = 0;
          puVar15[6] = 0;
          puVar15[2] = 0;
          puVar15[3] = 0;
          uVar20 = _LAB_2c4c8630;
          uVar19 = _LAB_2c4c862c;
          puVar23 = _LAB_2c4c8628;
          puVar21 = _LAB_2c4c8624;
          uVar14 = _LAB_2c4c85f4;
          iVar12 = _LAB_2c4c85e0;
          puVar15 = puVar15 + 6;
        } while (puVar16 + 0x4e != puVar15);
        *puVar16 = 0x200;
        puVar16[1] = 0xd0000;
        *(uint *)(iVar12 + 0x6c) =
             *(uint *)(iVar12 + 0x6c) & 0xffffc03f | *(uint *)(iVar12 + 0x6c) & 0x3fc0 | 0x1000;
        *(uint *)(iVar12 + 0x688) = *(uint *)(iVar12 + 0x688) & 0xfffffffe;
        *(uint *)(iVar12 + 0x688) = *(uint *)(iVar12 + 0x688) & 0xfffffffd;
        *(uint *)(iVar12 + 0x688) = *(uint *)(iVar12 + 0x688) & 0xfffffffb;
        *(uint *)(iVar12 + 0x688) = *(uint *)(iVar12 + 0x688) & 0xffffefff;
        *(uint *)(iVar12 + 0x688) = *(uint *)(iVar12 + 0x688) & 0xffffdfff;
        iVar9 = func_0x2c4b6cac();
        uVar17 = _DAT_2c4c8634;
        iVar24 = _LAB_2c4c8608;
        iVar11 = _LAB_2c4c8604;
        uVar10 = 0x401;
        if (iVar9 == 0) {
          uVar13 = 8;
          uVar10 = 0x10;
          uVar18 = _DAT_2c4c85fc;
          uVar14 = _LAB_2c4c85f8;
        }
        else {
          uVar13 = 0x200;
          uVar18 = _LAB_2c4c8600;
        }
        *(undefined4 *)(_LAB_2c4c8608 + 4) = uVar18;
        *(undefined4 *)(iVar24 + 8) = uVar14;
        *(undefined4 *)(iVar24 + 0x14) = uVar13;
        *(undefined4 *)(iVar24 + 0xc) = uVar10;
        *(undefined4 *)(iVar24 + 0x10) = uVar13;
        *(undefined4 *)(iVar11 + 4) = uVar18;
        *(undefined4 *)(iVar11 + 8) = uVar14;
        *(undefined4 *)(iVar11 + 0x14) = uVar13;
        *(undefined4 *)(iVar11 + 0xc) = uVar10;
        *(undefined4 *)(iVar11 + 0x10) = uVar13;
        uVar18 = _LAB_2c4c8638;
        uVar14 = _DAT_2c4c860c;
        *(uint *)(iVar12 + 0x688) = *(uint *)(iVar12 + 0x688) & 0xffffffef;
        *(uint *)(iVar12 + 0x688) = *(uint *)(iVar12 + 0x688) & 0xffffffdf;
        *(uint *)(iVar12 + 0x25c) = *(uint *)(iVar12 + 0x25c) & 0xffffdfff;
        uVar10 = _LAB_2c4c8610;
        *(undefined4 *)(iVar24 + 0x18) = uVar17;
        *(undefined4 *)(iVar24 + 0x1c) = 0;
        *(undefined4 *)(iVar24 + 0x28) = 0;
        *(undefined4 *)(iVar24 + 0x20) = uVar18;
        *(undefined4 *)(iVar24 + 0x24) = 0;
        *(undefined4 *)(iVar24 + 0x2c) = uVar14;
        *(undefined4 *)(iVar24 + 0x30) = 0;
        *(undefined4 *)(iVar24 + 0x3c) = 0;
        *(undefined4 *)(iVar24 + 0x34) = uVar10;
        *(undefined4 *)(iVar24 + 0x38) = 0;
        *(undefined4 *)(iVar11 + 0x18) = uVar17;
        *(undefined4 *)(iVar11 + 0x1c) = 0;
        *(undefined4 *)(iVar11 + 0x28) = 0;
        *(undefined4 *)(iVar11 + 0x20) = uVar18;
        *(undefined4 *)(iVar11 + 0x24) = 0;
        *(undefined4 *)(iVar11 + 0x2c) = uVar14;
        *(undefined4 *)(iVar11 + 0x30) = 0;
        *(undefined4 *)(iVar11 + 0x3c) = 0;
        *(undefined4 *)(iVar11 + 0x34) = uVar10;
        *(undefined4 *)(iVar11 + 0x38) = 0;
        puVar16 = _LAB_2c4c8640;
        puVar15 = _LAB_2c4c863c;
        uVar14 = puVar21[1];
        uVar17 = puVar21[2];
        uVar10 = puVar21[3];
        *puVar23 = *puVar21;
        puVar23[1] = uVar14;
        puVar23[2] = uVar17;
        puVar23[3] = uVar10;
        uVar14 = puVar21[5];
        puVar23[4] = puVar21[4];
        puVar23[5] = uVar14;
        uVar14 = puVar15[1];
        uVar17 = puVar15[2];
        uVar10 = puVar15[3];
        *puVar16 = *puVar15;
        puVar16[1] = uVar14;
        puVar16[2] = uVar17;
        puVar16[3] = uVar10;
        uVar14 = puVar15[5];
        puVar16[4] = puVar15[4];
        puVar16[5] = uVar14;
        *(uint *)(iVar12 + 0x688) = *(uint *)(iVar12 + 0x688) & 0xffffffbf;
        *(uint *)(iVar12 + 0x25c) = *(uint *)(iVar12 + 0x25c) & 0xfbffffff;
        *(uint *)(iVar12 + 0x334) = *(uint *)(iVar12 + 0x334) & uVar19 | uVar20;
        FUN_2c673b08(1);
        puVar15 = _LAB_2c4c8614;
        *(uint *)(iVar12 + 0x25c) = *(uint *)(iVar12 + 0x25c) | 0x4000000;
        *(uint *)(iVar12 + 0x304) = *(uint *)(iVar12 + 0x304) & 0xffe03fff | 0x4000;
        puVar16 = _LAB_2c4c8618;
        do {
          *puVar16 = 0;
          puVar16[1] = 0;
          puVar21 = puVar16 + 5;
          puVar16[4] = 0;
          puVar16[2] = 0;
          puVar16[3] = 0;
          puVar16[0x80] = 0;
          puVar16[0x81] = 0;
          puVar16[0x84] = 0;
          puVar16[0x82] = 0;
          puVar16[0x83] = 0;
          pcVar4 = _LAB_2c4c861c;
          iVar12 = _LAB_2c4c85e0;
          puVar16 = puVar21;
        } while (puVar21 != puVar15);
        *(uint *)(_LAB_2c4c85e0 + 0x688) = *(uint *)(_LAB_2c4c85e0 + 0x688) & 0xfffffff7;
        *(uint *)(iVar12 + 0x688) = *(uint *)(iVar12 + 0x688) & 0xfffff07f | 0x680;
        if (*pcVar4 != '\0') {
          FUN_2c6741e8(0x42,_LAB_2c4c9bd4,_LAB_2c4c9bd0,5);
          FUN_2c4c7c74(5);
          *(uint *)(iVar12 + 0x6bc) = *(uint *)(iVar12 + 0x6bc) & 0xfdffffff;
        }
        puVar15 = _LAB_2c4c8620;
        iVar12 = _LAB_2c4c85e0;
        *(uint *)(_LAB_2c4c85e0 + 0x688) = *(uint *)(_LAB_2c4c85e0 + 0x688) | 0x2000;
        *(uint *)(iVar12 + 0x688) = *(uint *)(iVar12 + 0x688) | 2;
        *(uint *)(iVar12 + 0x688) = *(uint *)(iVar12 + 0x688) | 4;
        *(uint *)(iVar12 + 0x688) = *(uint *)(iVar12 + 0x688) | 1;
        *puVar15 = 0;
      }
    }
    else {
      FUN_2c6741e8(0x41,_LAB_2c4c9230,_LAB_2c4c922c);
    }
LAB_2c4c9106:
    if (*piVar1 == 1) goto LAB_2c4c906c;
LAB_2c4c910c:
    if (*_LAB_2c4c9218 == 1) goto LAB_2c4c906c;
LAB_2c4c9114:
    piVar3 = _LAB_2c4c9210;
    iVar12 = _LAB_2c4c9204;
    if (*piVar2 == 1) {
      if (*_LAB_2c4c9210 << 0x1f < 0) {
        *(uint *)(_LAB_2c4c9204 + 0xd0) = *(uint *)(_LAB_2c4c9204 + 0xd0) | 0x800000;
        *(uint *)(iVar12 + 0xd0) = *(uint *)(iVar12 + 0xd0) & 0xfffffffb;
      }
      iVar12 = _LAB_2c4c9204;
      if ((*_LAB_2c4c9214 == 1) || (*piVar3 << 0x1e < 0)) {
        *(uint *)(_LAB_2c4c9204 + 0xd0) = *(uint *)(_LAB_2c4c9204 + 0xd0) | 0x1000000;
        *(uint *)(iVar12 + 0xd0) = *(uint *)(iVar12 + 0xd0) & 0xfffffff7;
      }
    }
    else if (*piVar2 == 0) {
      if (*_LAB_2c4c9210 << 0x1f < 0) {
        *(uint *)(_LAB_2c4c9204 + 0xd0) = *(uint *)(_LAB_2c4c9204 + 0xd0) & 0xff7fffff;
        *(uint *)(iVar12 + 0xd0) = *(uint *)(iVar12 + 0xd0) & 0xfffffffb;
      }
      iVar12 = _LAB_2c4c9204;
      if ((*_LAB_2c4c9214 == 1) || (*piVar3 << 0x1e < 0)) {
        *(uint *)(_LAB_2c4c9204 + 0xd0) = *(uint *)(_LAB_2c4c9204 + 0xd0) & 0xfeffffff;
        *(uint *)(iVar12 + 0xd0) = *(uint *)(iVar12 + 0xd0) & 0xfffffff7;
        iVar12 = *piVar1;
        piVar1 = _LAB_2c4c9210;
        goto joined_r0x2c4c916e;
      }
    }
  }
  iVar12 = *piVar1;
  piVar1 = _LAB_2c4c9210;
joined_r0x2c4c916e:
  _LAB_2c4c9210 = piVar1;
  if (((iVar12 == 1) || (*piVar2 == 1)) || (*_LAB_2c4c9218 == 1)) {
    if (*piVar1 << 0x1f < 0) {
      *(uint *)(_LAB_2c4c9204 + 0xd0) = *(uint *)(_LAB_2c4c9204 + 0xd0) | 1;
    }
    if ((*_LAB_2c4c9214 == 1) || (*piVar1 << 0x1e < 0)) {
      *(uint *)(_LAB_2c4c9204 + 0xd0) = *(uint *)(_LAB_2c4c9204 + 0xd0) | 2;
      return 0;
    }
  }
  return 0;
}

