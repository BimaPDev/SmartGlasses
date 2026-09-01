/* FUN_100833d0 @ 0x100833d0 */

undefined4 FUN_100833d0(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    FUN_100a5b78(((int)PTR_DAT_10083418 - (int)PTR_DAT_10083414) * 0x20 & 0xff00U | 0x3e0011,
                 PTR_s_alarm8hz_acts_get_alarm_10083420,PTR_s_Invalid_parameter_1008341c);
    uVar1 = 0xffffffea;
  }
  else {
    *(bool *)(param_2 + 1) = **(int **)(param_1 + 0x10) != 0;
    iVar2 = FUN_1011a97e();
    *param_2 = iVar2 * 0x7d;
    uVar1 = 0;
  }
  return uVar1;
}

