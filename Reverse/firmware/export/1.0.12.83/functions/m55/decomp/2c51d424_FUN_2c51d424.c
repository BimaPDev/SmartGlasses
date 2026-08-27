/* FUN_2c51d424 @ 0x2c51d424 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c51d424(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 1;
  FUN_2c606abc(*(undefined4 *)(param_1 + 0xc),1);
  FUN_2c606abc(*(undefined4 *)(param_1 + 0x10),1);
  FUN_2c606abc(*(undefined4 *)(param_1 + 0x14),1);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x1c),1);
  FUN_2c606abc(*(undefined4 *)(param_1 + 0x24),1);
  (**(code **)(**(int **)(param_1 + 8) + 0x18))();
  uVar3 = FUN_2c5ef8d0();
  iVar4 = FUN_2c5dc51c(uVar3,1);
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = registry_lookup(_LAB_2c51d4a4);
  uVar5 = registry_lookup(_LAB_2c51d4a8);
  FUN_2c638814(uVar6,_LAB_2c51d4ac,uVar3,iVar4,uVar5);
  puVar2 = DAT_2c4726d4;
  piVar1 = DAT_2c4726d0;
  if (iVar4 == 0) {
    return;
  }
  if (*DAT_2c4726d0 != 0) {
    FUN_2c644044(*DAT_2c4726d4,0xffffffff);
    FUN_2c47231c(*piVar1,DAT_2c4726d8,4,iVar4);
    FUN_2c644080(*puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x189,DAT_2c4726e8,DAT_2c4726e4,DAT_2c4726e0,DAT_2c4726dc);
}

