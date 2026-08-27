/* FUN_2c4a0470 @ 0x2c4a0470 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4a0470(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined2 uStack_a0;
  undefined2 uStack_9e;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined2 uStack_98;
  undefined2 uStack_96;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined1 uStack_92;
  undefined1 uStack_28;
  int iStack_24;
  
  uVar6 = _LAB_2c4a058c;
  uVar5 = _LAB_2c4a0588;
  uVar4 = _LAB_2c4a0570;
  iVar3 = _LAB_2c4a056c;
  iStack_24 = *_LAB_2c4a0568;
  uStack_9e = 8;
  uStack_9c = 0x32;
  uStack_a0 = 0x507;
  uStack_9a = 0x2706;
  uStack_96 = 0x21;
  uStack_93 = 1;
  uStack_94 = 0;
  uStack_98 = 0x10f;
  uStack_92 = 2;
  uStack_28 = 7;
  iVar8 = 0;
  puVar9 = (undefined2 *)&uStack_94;
  do {
    iVar7 = iVar3 + iVar8 * 7;
    uVar2 = *(undefined2 *)(iVar7 + 4);
    uVar1 = *(undefined1 *)(iVar7 + 6);
    *(undefined4 *)((int)puVar9 + 3) = *(undefined4 *)(iVar3 + iVar8 * 7);
    *(undefined2 *)((int)puVar9 + 7) = uVar2;
    *(undefined1 *)((int)puVar9 + 9) = uVar1;
    FUN_2c66ac44(uVar5,iVar8,*(undefined1 *)((int)puVar9 + 3));
    FUN_2c66ac44(uVar6,iVar8,*(undefined1 *)(puVar9 + 2));
    iVar7 = iVar8 + 1;
    FUN_2c66ac44(uVar4,iVar8,*(undefined1 *)((int)puVar9 + 5));
    iVar8 = iVar7;
    puVar9 = (undefined2 *)((int)puVar9 + 7);
  } while (iVar7 != 0xf);
  FUN_2c66b4b8(_LAB_2c4a0578,_LAB_2c4a057c,0,5,0,_LAB_2c4a0574);
  FUN_2c66ac44(_LAB_2c4a0580,_LAB_2c4a0578);
  FUN_2c49fde0(&uStack_a0,&uStack_94);
  uStack_a4 = _LAB_2c4a0584;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  FUN_2c49ff88(&uStack_bc);
  if (*_LAB_2c4a0568 == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

