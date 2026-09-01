/* FUN_1007193c @ 0x1007193c */

undefined4 FUN_1007193c(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 extraout_r1;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  undefined1 local_39;
  ushort local_38;
  uint local_36;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  piVar1 = DAT_100719bc;
  uVar12 = (DAT_100719b4 - DAT_100719b0) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_100719b8 | uVar12,DAT_100719c4,DAT_100719c0);
  iVar6 = FUN_1011f622(piVar1 + 1);
  iVar7 = DAT_100719c8;
  if (-1 < iVar6 << 0x1f) {
    if (param_1 == 0) {
      return 0xffffffea;
    }
    piVar1[2] = param_1;
    if (*(int *)(iVar7 + 4) == 0) {
      iVar7 = FUN_100722ec();
      if (iVar7 != 0) {
        FUN_100a5b78(DAT_100719cc | uVar12,DAT_100719c4,DAT_100719d0);
      }
      FUN_10114438(DAT_100719c8,DAT_100719d4);
    }
    iVar7 = FUN_10112e84(DAT_100719d8);
    *piVar1 = iVar7;
    uVar8 = DAT_100719e0;
    uVar9 = DAT_100719c4;
    uVar10 = DAT_100719dc;
    if (iVar7 == 0) goto LAB_1007199e;
    local_39 = 0;
    FUN_1011f602(iVar7,DAT_10071ccc,&local_39);
    local_39 = 1;
    FUN_1011f602(*piVar1,DAT_10071cd0,&local_39);
    local_39 = 2;
    FUN_1011f602(*piVar1,DAT_10071cd4,&local_39);
    local_39 = 3;
    FUN_1011f602(*piVar1,DAT_10071cd8,&local_39);
    FUN_100a5b78(DAT_10071cdc | uVar12,DAT_10071ce4,DAT_10071ce0,0x2800);
    sVar4 = FUN_10068cf4(DAT_10071ce8,0x100,1);
    *DAT_10071cec = sVar4 + 0x8000U;
    piVar1[0x1a] = (uint)(ushort)(sVar4 + 0x8000U);
    sVar4 = FUN_10068cf4(DAT_10071ce8,0x100,1);
    uVar5 = sVar4 + 0x8000;
    *DAT_10071cf0 = uVar5;
    piVar1[0x1b] = (uint)uVar5;
    FUN_100a5b78(DAT_10071cf4 | uVar12,DAT_10071ce4,DAT_10071cf8,piVar1[0x1a],(uint)uVar5);
    iVar7 = FUN_10068cf4(DAT_10071ce8,0x100,0);
    uVar10 = DAT_10071d00;
    uVar9 = DAT_10071ce4;
    uVar8 = DAT_10071cfc | uVar12;
    piVar1[0x1e] = iVar7 + -0x2ff18000;
    FUN_100a5b78(uVar8,uVar9,uVar10);
    iVar7 = FUN_10068cf4(DAT_10071ce8,0x1000,0);
    piVar1[0x1d] = iVar7 + -0x2ff18000;
    iVar7 = FUN_10068cf4(DAT_10071ce8,0x800,0);
    piVar1[0x1c] = iVar7 + -0x2ff18000;
    FUN_100a5b78(DAT_10071d04 | uVar12,DAT_10071ce4,DAT_10071d08,piVar1[0x1d],iVar7 + -0x2ff18000);
    iVar7 = FUN_10068cf4(DAT_10071ce8,0x80,0);
    piVar1[0x1f] = iVar7 + -0x2ff18000;
    uVar9 = FUN_1011ea48(*(ushort *)(iVar7 + 8) + 0x2ff18000,0,0x80);
    FUN_100a5b78(uVar12 | 0x4580032,DAT_10071ce4,DAT_10071d0c,piVar1[0x1f],uVar9);
    uVar9 = FUN_10070bf4(DAT_10071d10);
    puVar3 = DAT_10071d90;
    puVar2 = DAT_10071d8c;
    *DAT_10071d8c = uVar9;
    uVar9 = FUN_10070bf4(DAT_10071d14);
    iVar7 = piVar1[0x22];
    *puVar3 = uVar9;
    uVar8 = uVar12 | DAT_10071d94;
    FUN_100a5b78(uVar8,DAT_10071ce4,DAT_10071d18,0,piVar1[0x24],iVar7);
    uVar9 = FUN_10070bf4(DAT_10071d1c);
    puVar2[1] = uVar9;
    uVar9 = FUN_10070bf4(DAT_10071d20);
    iVar6 = piVar1[0x23];
    puVar3[1] = uVar9;
    iVar11 = piVar1[0x25];
    FUN_100a5b78(uVar8,DAT_10071ce4,DAT_10071d18,1,iVar11,iVar6);
    iVar7 = thunk_FUN_1009efa0(DAT_10071d24,&local_30,0xc);
    if (iVar7 < 0xc) {
      FUN_100a5b78(DAT_10071d28 | uVar12,DAT_10071d30,DAT_10071d2c,iVar7,iVar11,iVar6);
      local_30 = *DAT_10071d34;
      uStack_2c = DAT_10071d34[1];
      local_28 = DAT_10071d34[2];
    }
    iVar7 = FUN_10119d28(&local_30,0xc,&local_38,6);
    if (iVar7 == 6) {
      *(undefined2 *)(piVar1 + 0x15) = 0x401;
      piVar1[0x16] = local_36 << 0x18 | (local_36 >> 8 & 0xff) << 0x10 |
                     (local_36 >> 0x10 & 0xff) << 8 | local_36 >> 0x18;
      piVar1[0x17] = (local_38 & 0xff) << 8 | (uint)(local_38 >> 8);
      FUN_10070e48(piVar1[0x1a]);
    }
    else {
      FUN_100a5b78(DAT_10071d38 | uVar12,DAT_10071d30,DAT_10071d3c);
    }
    *(undefined2 *)(piVar1 + 0x15) = 0x402;
    piVar1[0x16] = piVar1[0x1d];
    piVar1[0x17] = piVar1[0x1c];
    piVar1[0x18] = piVar1[0x1e];
    piVar1[0x19] = piVar1[0x1f];
    FUN_10070e48(piVar1[0x1a]);
    *(undefined2 *)(piVar1 + 0x15) = 0x40b;
    piVar1[0x16] = piVar1[0x24];
    piVar1[0x17] = piVar1[0x22];
    piVar1[0x18] = piVar1[0x25];
    piVar1[0x19] = piVar1[0x23];
    FUN_10070e48(piVar1[0x1a]);
    FUN_1011380c(DAT_10071d48,DAT_10071d44,0x400,DAT_10071d40,0,0,0,0xfffffff6,0);
    FUN_10113564(DAT_10071d48,DAT_10071d4c);
    FUN_1011380c(DAT_10071d58,DAT_10071d54,0x400,DAT_10071d50,0,0,0,1,0);
    FUN_10113564(DAT_10071d58,DAT_10071d5c);
    FUN_1011380c(DAT_10071d68,DAT_10071d64,0x400,DAT_10071d60,0,0,0,1,0);
    FUN_10113564(DAT_10071d68,DAT_10071d6c);
    FUN_10061c18(DAT_10071d74,DAT_10071d70,0);
    FUN_10061c80(DAT_10071d74,DAT_10071d78);
    FUN_1011f642(DAT_10071d7c,1);
  }
  iVar7 = FUN_1011f622(DAT_10071d7c);
  if (iVar7 << 0x1e < 0) {
    return 0;
  }
  iVar7 = (**(code **)(*(int *)(*piVar1 + 8) + 4))(*piVar1,0x8100000,0x34000);
  uVar8 = DAT_10071d88;
  uVar9 = DAT_10071d84;
  uVar10 = DAT_10071d80;
  if ((iVar7 == 0) &&
     (iVar7 = (**(code **)(*(int *)(*piVar1 + 8) + 8))(*piVar1,0), uVar8 = DAT_10071e04,
     uVar9 = DAT_10071e00, uVar10 = DAT_10071dfc, iVar7 == 0)) {
    FUN_100a5b78(DAT_10071e08 | uVar12,DAT_10071e00,DAT_10071e0c);
    FUN_1011401c(DAT_10071e10,extraout_r1,0xffffffff,0xffffffff);
    FUN_100a5b78(DAT_10071e14 | uVar12,DAT_10071e00,DAT_10071e18);
    return 0;
  }
LAB_1007199e:
  FUN_100a5b78(uVar8 | uVar12,uVar9,uVar10);
  return 0xffffffea;
}

