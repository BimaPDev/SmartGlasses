/* FUN_1404e334 @ 0x1404e334 */

void FUN_1404e334(undefined4 param_1,uint param_2)

{
  int iVar1;
  int local_10;
  int local_c;
  
  local_c = *DAT_1404e388;
  local_10 = 0;
  iVar1 = FUN_1404a1b4(param_1,param_2,0);
  if (((iVar1 != 0) && (*(char *)(iVar1 + 6) != '\0')) &&
     (iVar1 = FUN_140a1718(iVar1,&local_10), iVar1 == 0)) {
    if (*(byte *)(local_10 + 0x115) != param_2) {
      FUN_140a17ac(local_10,(int)(char)param_2);
      FUN_140a0ecc();
    }
  }
  if (*DAT_1404e388 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

