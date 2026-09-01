/* FUN_100f04fc @ 0x100f04fc */

undefined4 FUN_100f04fc(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  int iStack_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined1 auStack_2c [24];
  undefined4 local_14;
  
  iStack_38 = FUN_100e7e2c();
  uVar2 = DAT_100f0520;
  if (iStack_38 == 0) {
    local_3d = 0;
    local_3e = 9;
    local_3c = 0;
    local_40 = 0;
    local_34 = DAT_100e7dc0;
    local_30 = auStack_2c;
    FUN_1013ca1a(auStack_2c,0,1);
    local_14 = uVar2;
    iVar1 = FUN_1009ece8(DAT_100e7dc4,&local_40);
    if (iVar1 == 0) {
      uVar2 = 0xffffff97;
    }
    else {
      iVar1 = FUN_1011dbde(auStack_2c,0xffffffff);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = 0xffffffc2;
      }
    }
    return uVar2;
  }
  FUN_100f048c(0,0);
  return 0;
}

