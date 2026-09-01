/* FUN_10095d34 @ 0x10095d34 */

void FUN_10095d34(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4,char param_5
                 )

{
  undefined4 uVar1;
  int local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  
  if (param_5 == '\0') {
    FUN_100932b0(param_4);
    *(undefined4 *)(param_4 + 0xc) = 0xffffffff;
    *param_3 = param_2;
    FUN_10125af4(param_1);
  }
  else {
    if (*(int *)(param_4 + 0xc) == -1) {
      uVar1 = *param_3;
    }
    else {
      uVar1 = *(undefined4 *)(param_4 + 8);
    }
    *(undefined4 *)(param_4 + 4) = uVar1;
    *(undefined4 *)(param_4 + 8) = param_2;
    *param_3 = param_2;
    FUN_100932b0(param_4,0);
    FUN_10093284(&local_5c);
    local_58 = DAT_10095da4;
    local_34 = 0x100;
    local_3c = 0;
    uStack_38 = 0;
    local_50 = DAT_10095da8;
    local_5c = param_4;
    local_30 = FUN_1012691c(param_1,0,0x65);
    FUN_1009331c(&local_5c);
  }
  return;
}

