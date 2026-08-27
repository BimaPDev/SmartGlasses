/* FUN_1404f580 @ 0x1404f580 */

void FUN_1404f580(undefined4 param_1,uint param_2)

{
  int iVar1;
  int local_18;
  int local_14;
  
  local_14 = *DAT_1404f5f4;
  local_18 = 0;
  iVar1 = FUN_1404a1b4(param_1,param_2,0);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 6) != '\0')) {
    FUN_1402a6e8(4,0x2b5,DAT_1404f604,DAT_1404f600,DAT_1404f5fc,param_1,DAT_1404f5f8,param_2);
    iVar1 = FUN_140a1718(iVar1,&local_18);
    if (iVar1 == 0) {
      if (*(byte *)(local_18 + 0x113) != param_2) {
        FUN_140a17d8(local_18,(int)(char)param_2);
        FUN_140a0ecc();
      }
    }
  }
  if (*DAT_1404f5f4 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

