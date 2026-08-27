/* FUN_2c62ccc0 @ 0x2c62ccc0 */

void FUN_2c62ccc0(void)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  char cVar5;
  uint in_stack_00000000;
  uint in_stack_00000008;
  uint in_stack_00000014;
  char acStack_4c [32];
  int local_2c;
  
  local_2c = *DAT_2c62cd6c;
  uVar1 = in_stack_00000014;
  if ((in_stack_00000000 != 0) ||
     (uVar1 = in_stack_00000014 & 0xffffffef, (in_stack_00000014 & 0x400) == 0)) {
    uVar2 = 0;
    if ((uVar1 & 0x20) == 0) {
      cVar4 = 'a';
    }
    else {
      cVar4 = 'A';
    }
    pcVar3 = acStack_4c;
    do {
      uVar2 = uVar2 + 1;
      uVar1 = in_stack_00000000 - in_stack_00000008 * (in_stack_00000000 / in_stack_00000008);
      cVar5 = (char)uVar1;
      if (uVar1 < 10) {
        cVar5 = cVar5 + '0';
      }
      else {
        cVar5 = cVar5 + cVar4 + -10;
      }
      *pcVar3 = cVar5;
    } while ((in_stack_00000008 <= in_stack_00000000) &&
            (in_stack_00000000 = in_stack_00000000 / in_stack_00000008, pcVar3 = pcVar3 + 1,
            uVar2 < 0x20));
  }
  FUN_2c62caf8();
  if (*DAT_2c62cd6c == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

