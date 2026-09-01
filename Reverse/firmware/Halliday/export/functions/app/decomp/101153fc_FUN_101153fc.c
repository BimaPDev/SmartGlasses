/* FUN_101153fc @ 0x101153fc */

undefined4 FUN_101153fc(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getCurrentExceptionNumber();
    uVar3 = uVar3 & 0x1ff;
  }
  if (uVar3 != 0) {
    FUN_10119dc2(DAT_10115458,DAT_10115454,DAT_10115450,0x4ee,param_1,param_2);
    FUN_10119dc2(DAT_1011545c);
    FUN_1011a1f0(DAT_10115450,0x4ee,param_3,uVar3);
  }
  if (param_2 != -1 || param_1 != -1) {
    uVar2 = FUN_101152fc(param_1,param_2);
    return uVar2;
  }
  FUN_10115078(*(undefined4 *)(DAT_10115460 + 8));
  return 0xffffffff;
}

