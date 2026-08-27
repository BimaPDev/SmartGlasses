/* FUN_2c46f800 @ 0x2c46f800 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c46f800(void)

{
  int iVar1;
  int *piVar2;
  int iStack_68;
  int aiStack_64 [21];
  
  piVar2 = &iStack_68;
  aiStack_64[0x14] = *_LAB_2c46f84c;
  do {
    iVar1 = func_0x2c472518(0,9);
    piVar2 = piVar2 + 1;
    *piVar2 = iVar1;
  } while (piVar2 != aiStack_64 + 0x13);
  piVar2 = aiStack_64 + 0x14;
  do {
    piVar2 = piVar2 + -1;
    func_0x2c4726ec(0,*piVar2);
  } while (piVar2 != aiStack_64);
  if (*_LAB_2c46f84c == aiStack_64[0x14]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

