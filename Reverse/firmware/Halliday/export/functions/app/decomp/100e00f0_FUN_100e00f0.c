/* FUN_100e00f0 @ 0x100e00f0 */

void FUN_100e00f0(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  code *pcVar3;
  uint uVar4;
  
  uVar4 = ((int)PTR_DAT_100e01ac - (int)PTR_DAT_100e01a8) * 0x20 & 0xff00;
  if ((*(char *)(param_1 + -0xe) == '\0') || (*(char *)(param_1 + -0x13) == '\0')) {
    uVar1 = uVar4 | 0xf50022;
    puVar2 = PTR_s_Unexpect_result__d___d_100e01b0;
  }
  else {
    uVar1 = uVar4 | 0xf70032;
    puVar2 = PTR_s_GOEP_Timeout__d___d_100e01bc;
  }
  FUN_100a5b78(uVar1,puVar2);
  if (-1 < (int)((uint)(byte)PTR_DAT_100e01b4[3] << 0x1c)) {
    switch(*(undefined1 *)(param_1 + -0x13)) {
    case 1:
    case 9:
      goto switchD_100e014e_caseD_1;
    case 2:
    case 4:
    case 8:
    case 10:
      FUN_100a5b78(uVar4 | 0x1040021,PTR_s_Unexpect_state__d_timeout_100e01c0);
      return;
    case 3:
    case 5:
    case 6:
    case 7:
    case 0xb:
      FUN_100e0080(param_1 + -0x70,0,9);
      FUN_10137d14(param_1 + -0x60);
      return;
    default:
      return;
    }
  }
  FUN_100a5b78(uVar4 | 0xfb0031,PTR_s_PTS_return_100e01b8);
  return;
switchD_100e014e_caseD_1:
  if ((*(int *)(param_1 + -8) != 0) &&
     (pcVar3 = *(code **)(*(int *)(param_1 + -8) + 8), pcVar3 != (code *)0x0)) {
    (*pcVar3)(*(undefined4 *)(param_1 + -0x70),*(undefined1 *)(param_1 + -0xe));
  }
  FUN_10137e30(param_1 + -0x70);
  return;
}

