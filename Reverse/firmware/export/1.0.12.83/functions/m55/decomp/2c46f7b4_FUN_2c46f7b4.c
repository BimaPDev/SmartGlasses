/* FUN_2c46f7b4 @ 0x2c46f7b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c46f7b4(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uStack_68;
  undefined4 auStack_64 [20];
  int iStack_14;
  
  puVar3 = &uStack_68;
  puVar2 = &uStack_68;
  iStack_14 = *_LAB_2c46f7fc;
  do {
    uVar1 = func_0x2c472518(0,9);
    puVar3 = puVar3 + 1;
    *puVar3 = uVar1;
  } while (puVar3 != auStack_64 + 0x13);
  do {
    puVar2 = puVar2 + 1;
    func_0x2c4726ec(0,*puVar2);
  } while (puVar2 != auStack_64 + 0x13);
  if (*_LAB_2c46f7fc == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

