/* FUN_1011d87e @ 0x1011d87e */

undefined4 FUN_1011d87e(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_148 [64];
  undefined1 auStack_108 [144];
  undefined1 auStack_78 [100];
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      if (param_3 < 0x41) {
        FUN_100639d8(auStack_108);
        FUN_1011d73e(auStack_108,auStack_148,param_3);
        FUN_1011d78a(auStack_78,auStack_108);
        iVar2 = param_2;
      }
      else {
        FUN_100639d8();
        iVar2 = param_1 + 0x90;
        FUN_1011d73e(param_1,param_2,param_3);
        FUN_1011d78a(iVar2,param_1);
        param_3 = 0x20;
      }
      FUN_1011d844(param_1 + 0x70,iVar2,param_3);
      uVar1 = 1;
    }
  }
  return uVar1;
}

