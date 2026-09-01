/* FUN_10043608 @ 0x10043608 */

void FUN_10043608(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_10043670;
  FUN_100a5b78(((int)PTR_DAT_10043668 - (int)PTR_DAT_1004366c) * 0x20 & 0xff00U | 0x4e0031,
               PTR_s_time_format_set_10043678,PTR_s_time_format_set_format__d_10043674,param_1,
               param_1,iVar1,param_3);
  if (param_1 < 2) {
    *DAT_1004367c = (char)param_1;
    FUN_100435d0(param_1);
    if (*(int *)PTR_DAT_10043670 == iVar1) goto LAB_10043650;
  }
  else if (*(int *)PTR_DAT_10043670 == iVar1) {
    return;
  }
  FUN_1013cdc0();
LAB_10043650:
  FUN_10048cd8();
  return;
}

