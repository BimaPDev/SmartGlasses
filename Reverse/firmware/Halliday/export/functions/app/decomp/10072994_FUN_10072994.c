/* FUN_10072994 @ 0x10072994 */

undefined4 FUN_10072994(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_1;
  if ((iVar1 == 0) || ((uint)param_1[7] < (uint)(param_4 + param_2))) {
    FUN_100a5b78((DAT_100729e4 - DAT_100729e0) * 0x20 & 0xff00U | 0xda0013,DAT_100729ec,DAT_100729e8
                 ,iVar1,param_2,param_4);
    uVar2 = 0xffffffea;
  }
  else {
    uVar2 = FUN_10073a50(iVar1,param_2,param_2 + param_1[6],0,param_3,param_4);
  }
  return uVar2;
}

