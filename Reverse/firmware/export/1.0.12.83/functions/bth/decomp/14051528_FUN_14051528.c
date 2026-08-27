/* FUN_14051528 @ 0x14051528 */

void FUN_14051528(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  undefined4 local_20;
  undefined1 local_18;
  int local_c;
  
  local_c = *DAT_140515a8;
  iVar1 = FUN_1409e5b8(1,*(undefined1 *)((int)param_1 + 10),param_3,0);
  if (iVar1 == 4) {
    local_24 = *(undefined2 *)(param_1 + 1);
    local_28 = *param_1;
    local_22 = *(undefined1 *)((int)param_1 + 10);
    local_18 = 4;
    local_20 = 1;
    FUN_1409e1ec(&local_28);
    *(undefined1 *)((int)param_1 + 0xfe) = 0;
  }
  else {
    local_24 = *(undefined2 *)(param_1 + 1);
    local_28 = *param_1;
    local_22 = *(undefined1 *)((int)param_1 + 10);
    local_18 = 3;
    local_20 = 1;
    FUN_1409e1ec(&local_28);
    *(undefined1 *)((int)param_1 + 0xfd) = 0;
  }
  if (*DAT_140515a8 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

