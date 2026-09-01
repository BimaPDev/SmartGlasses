/* FUN_10073004 @ 0x10073004 */

uint FUN_10073004(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_30 [2];
  byte local_2e;
  undefined1 auStack_2d [2];
  byte local_2b;
  ushort local_2a;
  
  if (((param_2 == 0) || (param_3 == 0)) || (param_4 == 0)) {
    param_4 = 0xffffffea;
  }
  else {
    iVar1 = FUN_10072de4(param_1,param_2,auStack_30);
    if (iVar1 < 0) {
      param_4 = 0xfffffffe;
    }
    else {
      uVar2 = FUN_1007296c(auStack_2d,5,0);
      uVar5 = (uint)local_2b;
      uVar3 = FUN_1007296c(DAT_100730dc,uVar5,uVar2);
      uVar2 = DAT_100730dc;
      uVar4 = 0x80;
      iVar6 = uVar5 + 8 + iVar1;
      for (uVar5 = (uint)local_2a; 0 < (int)uVar5; uVar5 = uVar5 - uVar4) {
        if ((int)uVar5 <= (int)uVar4) {
          uVar4 = uVar5;
        }
        FUN_10072994(param_1,iVar6,uVar2,uVar4);
        uVar3 = FUN_1007296c(uVar2,uVar4,uVar3);
        iVar6 = iVar6 + uVar4;
      }
      if (local_2e == uVar3) {
        if ((int)(uint)local_2a <= (int)param_4) {
          param_4 = (uint)local_2a;
        }
        FUN_10072994(param_1,local_2b + 8 + iVar1,param_3,param_4);
      }
      else {
        FUN_100a5b78(DAT_100730e8 | (DAT_100730e4 - DAT_100730e0) * 0x20 & 0xff00U,DAT_100730f0,
                     DAT_100730ec,iVar1,uVar3,(uint)local_2e);
        param_4 = 0xfffffff3;
      }
    }
  }
  return param_4;
}

