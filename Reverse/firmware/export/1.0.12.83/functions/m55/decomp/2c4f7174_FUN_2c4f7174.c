/* FUN_2c4f7174 @ 0x2c4f7174 */

/* WARNING: Removing unreachable block (ram,0x2c4f6dc6) */
/* WARNING: Removing unreachable block (ram,0x2c4f6dae) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4f7174(uint param_1,int param_2,short param_3)

{
  undefined1 uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint auStack_38 [3];
  undefined4 uStack_2c;
  uint local_28;
  uint uStack_24;
  uint local_1c;
  
  local_1c._0_1_ = (undefined1)param_1;
  uVar5 = (undefined1)local_1c;
  local_1c = param_1;
  local_28 = FUN_2c4c049c();
  if ((local_28 & 0x600000) != 0) {
    auStack_38[2] = DAT_2c4f71c4;
    uStack_2c = DAT_2c4f71c0;
    uStack_24 = param_1 & 0xff;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x18e,SUB_2c4f71cc,DAT_2c4f71c8);
  }
  uStack_2c = *_LAB_2c4f6df8;
  bVar3 = param_2 != 0 && param_3 != 0;
  if (bVar3) {
    uVar9 = (uint)(ushort)(param_3 + 0xe);
  }
  else {
    uVar9 = 0xe;
  }
  auStack_38[1] = (uint)bVar3;
  iVar2 = -(uVar9 + 7 & 0xfffffff8);
  puVar8 = (undefined4 *)((int)auStack_38 + iVar2);
  FUN_2c674268(puVar8,0);
  uVar4 = auStack_38[1];
  uVar6 = *_LAB_2c4f6e0c;
  uVar7 = _LAB_2c4f6e0c[1];
  *(undefined4 *)((int)auStack_38 + iVar2 + 8) = _LAB_2c4f6e0c[2];
  uVar1 = *(undefined1 *)(_LAB_2c4f6e0c + 3);
  *puVar8 = uVar6;
  *(undefined4 *)((int)auStack_38 + iVar2 + 4) = uVar7;
  *(undefined1 *)((int)&uStack_2c + iVar2) = uVar1;
  *(undefined1 *)((int)&uStack_2c + iVar2 + 1) = uVar5;
  if (uVar4 != 0) {
    FUN_2c674668((int)&uStack_2c + iVar2 + 2,param_2,param_3);
  }
  FUN_2c4f63bc(3,puVar8,uVar9);
  if (*_LAB_2c4f6df8 != uStack_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

