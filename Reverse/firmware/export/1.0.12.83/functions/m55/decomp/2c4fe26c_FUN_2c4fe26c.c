/* FUN_2c4fe26c @ 0x2c4fe26c */

void FUN_2c4fe26c(int param_1,undefined4 *param_2,uint *param_3,uint param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int local_28;
  int local_24;
  
  puVar2 = DAT_2c4fe2d4;
  uVar5 = 0;
  local_24 = *DAT_2c4fe2d0;
  local_28 = 0;
  do {
    if (*(char *)(param_1 + local_28) == '\0') break;
    uVar3 = (*(code *)*puVar2)(param_1,&local_28);
    puVar4 = param_2;
    if (param_2 != (undefined4 *)0x0) {
      puVar4 = param_2 + 1;
      *param_2 = uVar3;
    }
    uVar5 = uVar5 + 1;
    param_2 = puVar4;
  } while (uVar5 < param_4);
  piVar1 = DAT_2c4fe2d0;
  *param_3 = uVar5;
  if (*piVar1 != local_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

