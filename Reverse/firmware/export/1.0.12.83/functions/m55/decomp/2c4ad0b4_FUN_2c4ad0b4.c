/* FUN_2c4ad0b4 @ 0x2c4ad0b4 */

int FUN_2c4ad0b4(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x305) != '\0') {
    (**(code **)(param_1 + 0x340))
              (param_1,*(undefined1 *)(param_1 + 0xf0),*(undefined2 *)(param_1 + 0xf4),
               *(undefined2 *)(param_1 + 0xfc));
  }
  iVar1 = FUN_2c4ac850(param_1,0,param_2,1);
  if (-1 < iVar1) {
    FUN_2c6444fc(*DAT_2c4ad128);
    iVar1 = FUN_2c4acef0(param_1);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x397,DAT_2c4ad138,DAT_2c4ad134,DAT_2c4ad130,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4ad12c);
    }
    FUN_2c4ac850(param_1,0,param_2);
  }
  return iVar1;
}

