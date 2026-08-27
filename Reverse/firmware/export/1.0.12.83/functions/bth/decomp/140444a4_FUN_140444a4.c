/* FUN_140444a4 @ 0x140444a4 */

void FUN_140444a4(int param_1,undefined4 *param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 local_128 [4];
  undefined1 local_124;
  undefined4 local_123;
  undefined2 local_11f;
  undefined1 local_11d;
  undefined1 local_11c;
  int local_1c;
  
  local_1c = *DAT_14044510;
  iVar1 = DAT_14044514 + param_1 * 0x38;
  *(undefined1 *)(iVar1 + 0x45e) = 0;
  *(undefined1 *)(iVar1 + 0x468) = 0;
  FUN_140e5718(*(undefined4 *)(iVar1 + 0x46c));
  local_123 = *param_2;
  local_11f = *(undefined2 *)(param_2 + 1);
  local_11d = *(undefined1 *)((int)param_2 + 6);
  local_128[0] = 0;
  local_124 = (undefined1)param_1;
  local_11c = param_3;
  FUN_14041ad8(local_128,0);
  if (*DAT_14044510 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

