/* FUN_10082e58 @ 0x10082e58 */

int FUN_10082e58(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (param_2 == 0) {
    iVar1 = -0x16;
  }
  else {
    iVar1 = FUN_101221a8(param_2);
    if (iVar1 == 0) {
      iVar1 = FUN_10082d2c(iVar2,param_2);
      if (iVar1 == 0) {
        if ((*(int *)(iVar2 + 0x10) != 0) && (iVar1 = FUN_10082a88(param_1,0,0), iVar1 == 0)) {
          FUN_10122164(param_1);
        }
      }
      else {
        FUN_100a5b78(DAT_10082ef8 | ((int)PTR_DAT_10082ee8 - (int)PTR_DAT_10082ee4) * 0x20 & 0xff00U
                     ,PTR_s_rtc_acts_set_time_10082ef0,PTR_s_rtc_set_time_error__d_10082ef4,iVar1);
      }
    }
    else {
      FUN_100a5b78(((int)PTR_DAT_10082ee8 - (int)PTR_DAT_10082ee4) * 0x20 & 0xff00U | 0x1b40011,
                   PTR_s_rtc_acts_set_time_10082ef0,PTR_s_Bad_time_structure_10082eec);
      FUN_10083358(param_2);
      iVar1 = -8;
    }
  }
  return iVar1;
}

