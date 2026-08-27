/* FUN_2c63f2d0 @ 0x2c63f2d0 */

int FUN_2c63f2d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack000000f0;
  undefined4 uStack000000f4;
  undefined1 *puStack000000f8;
  undefined1 in_stack_0000024c;
  uint in_stack_00000578;
  
  puStack000000f8 = &stack0x00000128;
  iVar4 = *DAT_2c63f414;
  uStack000000f0 = param_3;
  uStack000000f4 = param_4;
  iVar2 = FUN_2c6411ac();
  iVar3 = 0;
  if (iVar2 != 0) {
    if (3 < in_stack_00000578) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c63f424,0x350,DAT_2c63f420);
    }
    iVar3 = FUN_2c63ed48(in_stack_00000578,&stack0x0000024c,1);
    if (iVar3 != 0) {
      if (param_1 == 0) {
        cVar1 = FUN_2c48f380();
      }
      else {
        cVar1 = FUN_2c48f2d4(in_stack_0000024c);
      }
      if (cVar1 < '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,DAT_2c63f424,0x35e,DAT_2c63f420);
      }
      FUN_2c64078c(DAT_2c63f418);
      iVar2 = FUN_2c640a50();
      if (iVar2 == 0) {
        FUN_2c6411e0();
        iVar2 = FUN_2c63e140();
        if (iVar2 != 0) {
          FUN_2c63dc4c(0,1);
        }
        iVar2 = FUN_2c640b70(&stack0x0000024c,0);
        if (iVar2 == 0) goto LAB_2c63f372;
      }
      FUN_2c640a6c(&stack0x0000024c,&stack0x00000260);
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c63f424,0xc5,DAT_2c63f42c);
    }
  }
LAB_2c63f372:
  if (*DAT_2c63f414 == iVar4) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

