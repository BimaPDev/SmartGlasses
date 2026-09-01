/* FUN_1007a518 @ 0x1007a518 */

void FUN_1007a518(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  int iVar2;
  uint local_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pbVar1 = DAT_1007a560;
  if (*DAT_1007a560 != param_2) {
    local_20 = param_1;
    uStack_1c = param_2;
    uStack_18 = param_3;
    uStack_14 = param_4;
    FUN_1007d5e8();
    if ((param_2 & 1) == 0) {
      *pbVar1 = (byte)param_2;
      FUN_100a3200(0);
      local_20 = param_2 & 1;
      FUN_100433f8(&uStack_1c);
      iVar2 = FUN_101221f0(&uStack_1c,&local_20);
      if (iVar2 == 0) {
        FUN_1009eeac(DAT_1007a564,local_20 & 0xfffffff);
        FUN_1012d1ae(DAT_1007a564);
      }
    }
  }
  return;
}

