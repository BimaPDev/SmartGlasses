/* FUN_14073a6c @ 0x14073a6c */

undefined4 FUN_14073a6c(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_14073b10,0xc3,DAT_14073b0c);
  }
  piVar4 = (int *)*param_1;
  if (piVar4 == (int *)0x0) {
LAB_14073ada:
    uVar2 = 0;
  }
  else {
    if (piVar4 != param_2) {
      piVar1 = (int *)*piVar4;
      piVar3 = piVar4;
      if ((int *)*piVar4 != piVar4) {
        do {
          piVar4 = piVar1;
          if (piVar3 == piVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x44,DAT_14073b14,0xd5,DAT_14073b0c,(uint)piVar3 >> 0x10,
                         (uint)piVar3 & 0xffff);
          }
          if (piVar4 == (int *)0x0) goto LAB_14073ada;
          if (param_2 == piVar4) {
            *piVar3 = *param_2;
            goto LAB_14073ae6;
          }
          piVar1 = (int *)*piVar4;
          piVar3 = piVar4;
        } while ((int *)*piVar4 != (int *)*param_1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x44,DAT_14073b14,0xd4,DAT_14073b0c,(uint)piVar4 >> 0x10,(uint)piVar4 & 0xffff);
    }
    piVar3 = (int *)0x0;
    *param_1 = *param_2;
LAB_14073ae6:
    uVar2 = 1;
    if ((int *)param_1[1] == param_2) {
      param_1[1] = (int)piVar3;
      return 1;
    }
  }
  return uVar2;
}

