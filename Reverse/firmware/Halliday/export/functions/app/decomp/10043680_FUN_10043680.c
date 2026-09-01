/* FUN_10043680 @ 0x10043680 */

void FUN_10043680(uint param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *DAT_100436c4;
  if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
    *(bool *)param_3 = 0xb < param_1;
    if (param_1 % 0xc == 0) {
      *param_2 = 0xc;
    }
    else {
      *param_2 = (char)(param_1 % 0xc);
    }
  }
  if (*DAT_100436c4 != iVar1) {
    FUN_1013cdc0();
  }
  return;
}

