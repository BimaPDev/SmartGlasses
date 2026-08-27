/* FUN_2c49b2c0 @ 0x2c49b2c0 */

int FUN_2c49b2c0(undefined1 param_1,undefined1 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 local_18;
  undefined1 local_17;
  int local_14;
  
  piVar1 = DAT_2c49b314;
  iVar3 = 3;
  local_14 = *DAT_2c49b310;
  local_18 = param_1;
  local_17 = param_2;
  do {
    iVar2 = FUN_2c4bd438(*(undefined1 *)(*piVar1 + 4),*(undefined2 *)(*piVar1 + 6),&local_18,2);
    if (iVar2 == 0) break;
    FUN_2c6444fc(1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*DAT_2c49b310 == local_14) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

