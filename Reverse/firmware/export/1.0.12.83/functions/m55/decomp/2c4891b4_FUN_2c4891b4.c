/* FUN_2c4891b4 @ 0x2c4891b4 */

void FUN_2c4891b4(undefined1 param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 local_21;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  int local_14;
  
  piVar1 = DAT_2c489244;
  local_14 = *DAT_2c489248;
  if (*DAT_2c489244 == 0) {
    iVar2 = FUN_2c647174(1,0,0,0);
    *piVar1 = iVar2;
  }
  local_1c = &local_21;
  local_20 = 0x2b;
  local_18 = 1;
  local_21 = param_1;
  FUN_2c49737c(0x2b,local_1c,1);
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    FUN_2c6471b4(iVar2,300);
  }
  if (*DAT_2c48924c == 0) {
    if (*DAT_2c489248 == local_14) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x24c,DAT_2c489258,DAT_2c489254,DAT_2c489250,(int)*DAT_2c48924c);
}

