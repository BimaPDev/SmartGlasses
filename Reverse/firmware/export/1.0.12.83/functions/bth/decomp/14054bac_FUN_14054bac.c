/* FUN_14054bac @ 0x14054bac */

void FUN_14054bac(uint param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_3c;
  undefined2 local_38;
  undefined1 local_36;
  undefined4 local_34;
  undefined2 local_30;
  undefined1 local_2e;
  int local_2c;
  
  local_2c = *DAT_14054c5c;
  if (param_1 < 2) {
    iVar1 = *(int *)(DAT_14054c60 + param_1 * 4);
    if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x43) & 0x10) == 0)) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0;
  }
  local_2e = *(undefined1 *)(param_4 * 7 + iVar1 + 0x62);
  iVar3 = (short)param_3 * 7 + 0x5c;
  iVar2 = (short)param_4 * 7 + 0x5c;
  local_3c = *(undefined4 *)(iVar1 + iVar3);
  local_38 = *(undefined2 *)(iVar3 + iVar1 + 4);
  local_34 = *(undefined4 *)(iVar1 + iVar2);
  local_30 = *(undefined2 *)(iVar1 + iVar2 + 4);
  local_36 = *(undefined1 *)(param_3 * 7 + iVar1 + 0x62);
  FUN_14071f60(param_2,param_5,param_6,&local_3c,&local_34,DAT_14054c64,param_1);
  if (*DAT_14054c5c == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

