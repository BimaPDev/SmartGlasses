/* FUN_1409e930 @ 0x1409e930 */

void FUN_1409e930(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  
  local_1c = *DAT_1409e9a4;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  FUN_140e5208(param_2,0,&local_28,&local_24,&local_20);
  iVar1 = FUN_140e5978(param_1,param_2,param_3,param_4,local_28,local_24,local_20,0x2000,param_5);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_1409e9a8,iVar1);
  }
  if (*DAT_1409e9a4 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

