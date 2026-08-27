/* FUN_1408ef74 @ 0x1408ef74 */

/* WARNING: Type propagation algorithm not settling */

void FUN_1408ef74(int param_1,uint param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte local_1d;
  int local_1c [4];
  
  local_1c[2] = *DAT_1408f004;
  local_1c[1] = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_1408f010,DAT_1408f00c);
  }
  if (param_3 <= param_2) {
    FUN_1408e93c(param_1,param_2,&local_1d,local_1c,local_1c + 1);
    if ((local_1d == 4) || (local_1d - 6 < 3)) {
      uVar1 = (undefined1)param_3;
      if (local_1c[0] == 2) {
        *(undefined1 *)(param_1 + 1) = uVar1;
      }
      else {
        uVar2 = (undefined1)(param_3 >> 8);
        if (local_1c[0] == 3) {
          *(undefined1 *)(param_1 + 1) = uVar2;
          *(undefined1 *)(param_1 + 2) = uVar1;
        }
        else if (local_1c[0] == 5) {
          *(char *)(param_1 + 1) = (char)(param_3 >> 0x18);
          *(char *)(param_1 + 2) = (char)(param_3 >> 0x10);
          *(undefined1 *)(param_1 + 3) = uVar2;
          *(undefined1 *)(param_1 + 4) = uVar1;
        }
      }
    }
    if (*DAT_1408f004 == local_1c[2]) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_1408f008,DAT_1408f00c,param_2,param_3);
}

