/* FUN_100c9bb8 @ 0x100c9bb8 */

void FUN_100c9bb8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  code *pcVar1;
  int iVar2;
  
  for (iVar2 = *DAT_100c9bd4; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x2c)) {
    pcVar1 = *(code **)(iVar2 + 8);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1,*(undefined1 *)(param_1 + 0xc),param_3,pcVar1,param_4);
      param_3 = extraout_r2;
    }
  }
  return;
}

