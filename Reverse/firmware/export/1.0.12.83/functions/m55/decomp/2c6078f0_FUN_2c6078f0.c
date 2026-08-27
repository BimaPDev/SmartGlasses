/* FUN_2c6078f0 @ 0x2c6078f0 */

void FUN_2c6078f0(undefined4 param_1,undefined2 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  int local_14;
  
  local_14 = *DAT_2c607960;
  FUN_2c604188();
  iVar1 = FUN_2c5fef48();
  if (iVar1 != 0) {
    local_1c = *param_2;
    local_1a = param_2[1];
    local_18 = param_2[2];
    local_16 = param_2[3];
    iVar1 = FUN_2c606b94(param_1,1);
    if ((iVar1 == 0) && (iVar1 = FUN_2c6077d0(param_1,&local_1c), iVar1 != 0)) {
      uVar2 = FUN_2c604188(param_1);
      FUN_2c6019b8(uVar2,&local_1c);
    }
  }
  if (*DAT_2c607960 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

