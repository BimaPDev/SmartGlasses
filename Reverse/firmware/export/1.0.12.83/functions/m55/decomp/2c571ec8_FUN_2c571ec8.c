/* FUN_2c571ec8 @ 0x2c571ec8 */

void FUN_2c571ec8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *local_30;
  int local_2c;
  
  local_2c = *DAT_2c571fa8;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10);
  }
  uVar3 = FUN_2c48e3b8(param_2);
  iVar4 = FUN_2c48e3f0();
  piVar2 = DAT_2c571fc0;
  if (0 < iVar4) {
    iVar8 = 0;
    do {
      uVar5 = FUN_2c48e408(uVar3,iVar8);
      if (*piVar2 == 0) {
        FUN_2c4723c4();
        *piVar2 = 1;
      }
      puVar6 = (undefined4 *)FUN_2c47245c(0,0x34);
      FUN_2c674268(puVar6,0,0x34);
      *puVar6 = DAT_2c571fac;
      uVar1 = DAT_2c571fb0;
      puVar6[7] = puVar6 + 9;
      puVar6[1] = uVar1;
      puVar6[8] = 0;
      *(undefined1 *)(puVar6 + 9) = 0;
      local_30 = puVar6;
      iVar7 = FUN_2c571ce0(uVar5,puVar6);
      if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,DAT_2c571fbc,0x4f,DAT_2c571fb8,DAT_2c571fb4);
      }
      puVar6 = *(undefined4 **)(param_1 + 0x14);
      if (puVar6 == *(undefined4 **)(param_1 + 0x18)) {
        FUN_2c571dfc(param_1 + 0x10,puVar6,&local_30);
      }
      else {
        *puVar6 = local_30;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
      }
      iVar8 = iVar8 + 1;
    } while (iVar4 != iVar8);
  }
  if (*DAT_2c571fa8 == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

