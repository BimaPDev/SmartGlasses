/* FUN_14051b04 @ 0x14051b04 */

void FUN_14051b04(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined4 local_28;
  undefined1 local_20;
  int local_14;
  
  local_14 = *DAT_14051b88;
  iVar1 = FUN_1409e5b8(1,*(undefined1 *)((int)param_1 + 10),param_3,0);
  if (iVar1 == 4) {
    local_2c = *(undefined2 *)(param_1 + 1);
    local_30 = *param_1;
    local_2a = *(undefined1 *)((int)param_1 + 10);
    local_20 = 4;
    local_28 = 1;
    FUN_1409e1ec(&local_30);
    *(undefined1 *)((int)param_1 + 0xfe) = 0;
    FUN_14051a80(param_1);
  }
  iVar1 = FUN_14050e38(param_1,2,3,1);
  if (iVar1 == 1) {
    FUN_14051058(*(undefined1 *)((int)param_1 + 10));
    *(undefined1 *)((int)param_1 + 0xfd) = 1;
  }
  else {
    *(undefined1 *)((int)param_1 + 0xfd) = 0xfe;
  }
  if (*DAT_14051b88 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

