/* FUN_10063194 @ 0x10063194 */

void FUN_10063194(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *DAT_100631c8;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(DAT_100631d4,0x164,DAT_100631d0,DAT_100631cc);
  }
  bVar1 = *(byte *)(iVar2 + 0x2c);
  if (bVar1 != param_1) {
    *(char *)(iVar2 + 0x2c) = (char)param_1;
    FUN_100630e4(param_1 == 1,param_2,(uint)bVar1,param_4);
    return;
  }
  return;
}

