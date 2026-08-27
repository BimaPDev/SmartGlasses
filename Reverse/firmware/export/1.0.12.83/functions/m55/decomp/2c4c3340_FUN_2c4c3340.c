/* FUN_2c4c3340 @ 0x2c4c3340 */

void FUN_2c4c3340(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_3c [28];
  uint local_20;
  int local_1c;
  
  piVar1 = DAT_2c4c33ec;
  local_1c = *DAT_2c4c33e4;
  if (param_1 == 0) {
    if (*DAT_2c4c33e4 == local_1c) {
      return;
    }
  }
  else {
    if (*DAT_2c4c33e8 == 0) {
      if (0 < *DAT_2c4c33ec) {
        iVar3 = 0;
        piVar4 = DAT_2c4c33f0;
        do {
          FUN_2c4c310c(*piVar4,auStack_3c);
          uVar2 = param_1 - *piVar4;
          if ((0 < (int)uVar2) && (uVar2 < local_20)) {
            if (iVar3 < *piVar1) {
              if (*DAT_2c4c33e4 == local_1c) {
                FUN_2c4c2df4(*piVar4,param_1);
                return;
              }
              goto LAB_2c4c33de;
            }
            break;
          }
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar3 < *piVar1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c4c33f8,DAT_2c4c33f4,param_1);
    }
    if (*DAT_2c4c33e4 == local_1c) {
      FUN_2c4c2df4(*DAT_2c4c33fc,param_1);
      return;
    }
  }
LAB_2c4c33de:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

