/* FUN_2c46d048 @ 0x2c46d048 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c46d048(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  int aiStack_64 [2];
  undefined1 auStack_5c [4];
  int iStack_58;
  int aiStack_54 [3];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  
  iStack_30 = *_LAB_2c46d2c0;
  aiStack_54[0] = 0;
  FUN_2c46c9d8(aiStack_54,0x60,param_3,0);
  puVar4 = _LAB_2c46d2c4;
  if (aiStack_54[0] == 0) {
    if (*_LAB_2c46d2c0 == iStack_30) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  FUN_2c674268(aiStack_54[0],0,0x60);
  iStack_58 = param_1 + 0x10;
  uStack_48 = *puVar4;
  uStack_44 = puVar4[1];
  uStack_40 = puVar4[2];
  uStack_3c = puVar4[3];
  uStack_38 = puVar4[4];
  uStack_34 = puVar4[5];
  iVar7 = FUN_2c66c4ec(iStack_58);
  FUN_2c674668(aiStack_54[0],iStack_58,iVar7 + 1);
  puVar4 = _LAB_2c46d2c8;
  uVar3 = *(undefined2 *)(_LAB_2c46d2c8 + 1);
  *(undefined4 *)(aiStack_54[0] + 0x2a) = *_LAB_2c46d2c8;
  puVar6 = _LAB_2c46d2d0;
  puVar5 = _LAB_2c46d2cc;
  *(undefined2 *)(aiStack_54[0] + 0x2e) = uVar3;
  uVar2 = *(undefined1 *)((int)puVar4 + 6);
  uVar3 = *puVar6;
  *(undefined2 *)(aiStack_54[0] + 0x32) = *puVar5;
  *(undefined1 *)(aiStack_54[0] + 0x30) = uVar2;
  *(undefined2 *)(aiStack_54[0] + 0x28) = uVar3;
  *(undefined4 *)(aiStack_54[0] + 0x34) = uStack_48;
  *(undefined4 *)(aiStack_54[0] + 0x38) = uStack_44;
  *(undefined4 *)(aiStack_54[0] + 0x40) = uStack_3c;
  *(undefined4 *)(aiStack_54[0] + 0x3c) = uStack_40;
  *(undefined4 *)(aiStack_54[0] + 0x44) = uStack_38;
  *(undefined4 *)(aiStack_54[0] + 0x48) = uStack_34;
  iStack_58 = *(undefined4 *)(param_1 + 4);
  iVar8 = FUN_2c66c4ec(iStack_58);
  iVar7 = -(iVar8 + 8U & 0xfffffff8);
  puVar1 = auStack_5c + iVar7;
  FUN_2c674668(puVar1,iStack_58,iVar8 + 1);
  iVar8 = FUN_2c66b624(puVar1,_LAB_2c46d2d4);
  if (iVar8 == 0) {
    *(undefined4 *)((int)aiStack_64 + iVar7) = _LAB_2c46d2fc;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xb,_LAB_2c46d2f4,_LAB_2c46d2f8);
  }
  iVar8 = FUN_2c66b624(puVar1,_LAB_2c46d2d8);
  if (iVar8 == 0) {
    *(undefined4 *)((int)aiStack_64 + iVar7) = _LAB_2c46d300;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xf,_LAB_2c46d2f4,_LAB_2c46d2f8);
  }
  iVar8 = FUN_2c66b624(puVar1,_LAB_2c46d2dc);
  if (iVar8 == 0) {
    *(undefined4 *)((int)aiStack_64 + iVar7) = _LAB_2c46d30c;
    *(undefined4 *)((int)aiStack_64 + iVar7 + 4) = 1;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x13,_LAB_2c46d2f4,_LAB_2c46d2f8);
  }
  iVar8 = FUN_2c66b624(puVar1,_LAB_2c46d2e0);
  if (iVar8 == 0) {
    *(undefined4 *)((int)aiStack_64 + iVar7) = _LAB_2c46d308;
    *(undefined4 *)((int)aiStack_64 + iVar7 + 4) = _LAB_2c46d304;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x18,_LAB_2c46d2f4,_LAB_2c46d2f8);
  }
  iVar8 = FUN_2c66b624(puVar1,_LAB_2c46d2e4);
  if (iVar8 == 0) {
    *(undefined4 *)((int)aiStack_64 + iVar7) = _LAB_2c46d310;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x4e,_LAB_2c46d2f4,_LAB_2c46d2f8);
  }
  iVar8 = FUN_2c66b624(puVar1,_LAB_2c46d2e8);
  if (iVar8 == 0) {
    FUN_2c6684cc(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18));
    *(undefined4 *)((int)aiStack_64 + iVar7) = _LAB_2c46d318;
    *(undefined4 *)((int)aiStack_64 + iVar7 + 4) = 1;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x22,_LAB_2c46d2f4,_LAB_2c46d2f8);
  }
  iVar8 = FUN_2c66b624(puVar1,_LAB_2c46d2ec);
  if (iVar8 == 0) {
    *(undefined4 *)((int)aiStack_64 + iVar7) = _LAB_2c46d2f0;
    *(undefined4 *)((int)aiStack_64 + iVar7 + 4) = 1;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x26,_LAB_2c46d2f4,_LAB_2c46d2f8);
  }
  *(undefined4 *)((int)aiStack_64 + iVar7) = _LAB_2c46d31c;
  *(undefined1 **)((int)aiStack_64 + iVar7 + 4) = puVar1;
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x65,_LAB_2c46d2f4,_LAB_2c46d2f8);
}

