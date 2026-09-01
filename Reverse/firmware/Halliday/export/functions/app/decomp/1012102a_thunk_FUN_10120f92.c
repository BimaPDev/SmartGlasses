/* thunk_FUN_10120f92 @ 0x1012102a */

undefined4 thunk_FUN_10120f92(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  ushort uVar8;
  undefined1 auStack_4c [4];
  ushort uStack_48;
  undefined1 auStack_3c [5];
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 uStack_34;
  int iStack_33;
  undefined1 *puStack_2f;
  
  iVar4 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(iVar4 + 0x10f4) = 0xffffffff;
  *(uint *)(iVar4 + 0x10f8) = *(uint *)(iVar4 + 0x10f8) | 0xfff0fff;
  *(undefined2 *)(iVar4 + 0x10fc) = 0xffff;
  *(undefined4 *)(iVar4 + 0x1100) = 0;
  *(undefined1 *)(iVar4 + 0x110c) = 0;
  *(undefined4 *)(iVar4 + 0x10e0) = 0xffffffff;
  *(undefined4 *)(iVar4 + 0x10e4) = 0xffffffff;
  *(undefined4 *)(iVar4 + 0x10e8) = 0xffffff6e;
  *(undefined4 *)(iVar4 + 0x10ec) = 0xffffffff;
  *(ushort *)(iVar4 + 0x10f0) = *(ushort *)(iVar4 + 0x10f0) & 0xf000 | 0xfff;
  *(undefined4 *)(iVar4 + 0x1104) = 0;
  *(undefined4 *)(iVar4 + 0x1108) = 0;
  FUN_1011ea48(iVar4 + 0x1da0,0xff,0x10);
  *(undefined2 *)(iVar4 + 0x10c8) = 0;
  *(undefined4 *)(iVar4 + 0x10ca) = 0;
  *(undefined4 *)(iVar4 + 0x10ce) = 0;
  FUN_10121576(param_1);
  FUN_10121a2c(param_1);
  uVar5 = 0;
  uVar2 = 1;
  iVar4 = *(int *)(param_1 + 0xc);
  *(int *)(iVar4 + 0x74) = iVar4 + 0x78;
  puVar6 = (ushort *)(iVar4 + 0x10ca);
  do {
    if (((int)(uint)*(byte *)(iVar4 + 0x30) <= (int)uVar5) ||
       (*(short *)(iVar4 + 100 + uVar5 * 4) == -1)) {
      return uVar2;
    }
    uVar7 = 0;
    FUN_1007f384(param_1,uVar5 & 0xff);
    do {
      puStack_2f = auStack_4c;
      uStack_37 = 0xf;
      uVar3 = *(ushort *)(*(int *)(*(int *)(iVar4 + 0x74) + 0xc) + uVar7 * 8 + 2) & 0xfff;
      uStack_36 = 0;
      uStack_35 = 0;
      uStack_34 = 0;
      iStack_33 = iVar4 + 0xc6;
      if (uVar3 == 0xfff) break;
      uVar8 = 0;
      bVar1 = true;
      do {
        FUN_10120a74(param_1,auStack_3c,0,uVar3,uVar8);
        uVar2 = FUN_1007e320(param_1,auStack_3c);
        if (uStack_48 != uVar8) {
          bVar1 = false;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 <= *(ushort *)(*(int *)(*(int *)(iVar4 + 0x74) + 0xc) + uVar7 * 8 + 4));
      uVar3 = (ushort)(1 << (uVar7 & 0xff));
      if (bVar1) {
        uVar3 = *puVar6 | uVar3;
      }
      else {
        uVar3 = *puVar6 & ~uVar3;
      }
      uVar7 = uVar7 + 1;
      *puVar6 = uVar3;
    } while (uVar7 != 4);
    uVar5 = uVar5 + 1;
    puVar6 = puVar6 + 1;
  } while( true );
}

