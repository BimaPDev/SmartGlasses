/* FUN_14075d70 @ 0x14075d70 */

void FUN_14075d70(int param_1)

{
  byte bVar1;
  
  if (param_1 == 0) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 4) & 7;
  if (((bVar1 == 2) || (bVar1 == 4)) && (*(code **)(DAT_14075d9c + 8) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x14075d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14075d9c + 8))(bVar1,param_1 - (uint)*(ushort *)(param_1 + 0xc));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x41,DAT_14075da0,bVar1);
}

