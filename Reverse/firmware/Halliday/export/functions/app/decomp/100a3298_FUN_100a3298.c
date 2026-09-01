/* FUN_100a3298 @ 0x100a3298 */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_100a3298(void)

{
  undefined4 *puVar1;
  int *piVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_24 [4];
  
  piVar2 = DAT_100a33ac;
  puVar1 = DAT_100a33a8;
  *DAT_100a33ac = (int)DAT_100a33a8;
  FUN_1011ea48(puVar1,0,0x38);
  uVar4 = FUN_10112e84(DAT_100a33b0);
  piVar7 = (int *)*piVar2;
  *puVar1 = uVar4;
  iVar5 = *piVar7;
  uVar8 = (DAT_100a33b4 - DAT_100a33b8) * 0x20 & 0xff00;
  if (iVar5 == 0) {
    FUN_100a5b78(DAT_100a33bc | uVar8,DAT_100a33c4,DAT_100a33c0);
    uVar6 = 0xffffffed;
  }
  else {
    (**(code **)(*(int *)(iVar5 + 8) + 8))(iVar5,DAT_100a33c8);
    if (((int *)*piVar2 == (int *)0x0) || (*(int *)*piVar2 == 0)) {
      FUN_100a5b78(DAT_100a33cc | uVar8,DAT_100a33d0,DAT_100a33c0);
    }
    else {
      FUN_100a5b78(DAT_100a33e4 | uVar8,DAT_100a33d0,DAT_100a33e8,DAT_100a33ec,0x19f);
      local_24[1] = 0;
      local_24[2] = 0;
      iVar5 = thunk_FUN_1009efa0(DAT_100a33f0,local_24 + 1,8);
      if (-1 < iVar5) {
        uVar3 = FUN_1013d036(local_24 + 1);
        uVar9 = (uint)uVar3;
        uVar10 = uVar9;
        FUN_100a5b78(DAT_100a33f4 | uVar8,DAT_100a33d0,DAT_100a33f8,DAT_100a33ec,uVar9);
        if ((uVar9 - 0x3e9 & 0xffff) < 3999) {
          local_24[0] = uVar9;
          FUN_1012d994(*(undefined4 *)*piVar2,10,local_24);
          FUN_100a5b78(uVar8 | 0x1c40031,DAT_100a33d0,DAT_100a33fc,uVar9,uVar10);
          FUN_1007b3b8(uVar9);
        }
      }
    }
    (**(code **)(*(int *)(*(int *)*piVar2 + 8) + 0xc))();
    uVar4 = DAT_100a33d8;
    iVar5 = *piVar2;
    *(undefined4 *)(iVar5 + 0x10) = DAT_100a33d4;
    *(undefined4 *)(iVar5 + 0x14) = uVar4;
    uVar4 = FUN_1012d9a0();
    *(undefined4 *)(iVar5 + 0x18) = uVar4;
    iVar5 = *piVar2;
    uVar4 = FUN_1012d99a();
    *(undefined4 *)(iVar5 + 0x1c) = uVar4;
    uVar4 = DAT_100a33e0;
    uVar6 = 0;
    iVar5 = *piVar2;
    *(undefined4 *)(iVar5 + 0x20) = DAT_100a33dc;
    *(undefined4 *)(iVar5 + 0x24) = 100;
    *(undefined4 *)(iVar5 + 0x30) = 0;
    FUN_100a1c48(uVar4);
  }
  return uVar6;
}

