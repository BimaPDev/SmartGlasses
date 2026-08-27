/* FUN_14060cdc @ 0x14060cdc */

int FUN_14060cdc(undefined4 param_1,undefined4 param_2,int param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_20;
  int local_1c;
  
  local_1c = *DAT_14060d80;
  if (((*(byte *)(DAT_14060d7c + 0x5f) & 1) == 0) && ((*(byte *)(DAT_14060d7c + 0x5f) & 5) != 5)) {
    iVar3 = 0x43;
  }
  else {
    iVar3 = FUN_14060338(param_2);
    if (iVar3 == 0) {
      iVar3 = 0x40;
    }
    else if ((param_3 == 0) || (*(int *)(param_3 + 0xc) == 0)) {
      iVar3 = 0x4d;
    }
    else {
      iVar3 = FUN_1405d6d0(1,0,param_1,0x30,DAT_14060d84,param_3,&local_20);
      iVar1 = local_20;
      if (iVar3 == 0) {
        uVar2 = FUN_140e52f8(DAT_14060d88,0,0);
        *(undefined4 *)(iVar1 + 0x10) = uVar2;
        *(undefined1 *)(local_20 + 0x14) = 0;
        FUN_1405d88c();
        *param_4 = *(undefined1 *)(local_20 + 0xc);
        FUN_14060388(param_2);
      }
    }
  }
  if (*DAT_14060d80 == local_1c) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

