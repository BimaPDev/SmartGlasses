/* FUN_10094280 @ 0x10094280 */

int FUN_10094280(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = DAT_100942c8;
  if (param_2 == 0) {
    FUN_10094268(param_1,DAT_100942cc);
  }
  else {
    if (param_1 == DAT_100942c8) {
      iVar1 = FUN_10094254(param_2,param_3);
      return iVar1;
    }
    iVar1 = FUN_100ed7c8(1,param_1,param_2,param_3,param_1,param_2,param_3);
    if (iVar1 == 0) {
      FUN_10094174(3,DAT_100942d4,0xd3,DAT_100942cc,DAT_100942d0);
    }
  }
  return iVar1;
}

