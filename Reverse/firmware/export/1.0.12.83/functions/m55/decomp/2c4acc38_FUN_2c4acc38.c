/* FUN_2c4acc38 @ 0x2c4acc38 */

int FUN_2c4acc38(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x305) != '\0') {
    (**(code **)(param_1 + 0x340))
              (param_1,*(undefined1 *)(param_1 + 0xf0),*(undefined2 *)(param_1 + 0xf4),
               *(undefined2 *)(param_1 + 0xfc));
  }
  iVar1 = FUN_2c4ac850(param_1,1,param_2);
  if (-1 < iVar1) {
    FUN_2c6444fc(5000);
    iVar1 = FUN_2c4ac670(param_1);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,999,DAT_2c4accc0,DAT_2c4accbc,DAT_2c4accb8,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4accb4);
    }
    FUN_2c4ac850(param_1,1,param_2,0);
    FUN_2c4ac780(param_1,(int)*(char *)(param_1 + 0x304));
  }
  return iVar1;
}

