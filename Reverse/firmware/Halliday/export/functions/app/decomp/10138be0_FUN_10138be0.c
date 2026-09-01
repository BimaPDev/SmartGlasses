/* FUN_10138be0 @ 0x10138be0 */

uint FUN_10138be0(undefined2 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined2 uStack_40;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 auStack_2c [16];
  undefined2 uStack_1c;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int iStack_14;
  undefined4 uStack_10;
  
  if (param_2 != 0) {
    uStack_3d = 0x1b;
    uStack_3e = 9;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = DAT_100e7dc0;
    uStack_40 = param_1;
    puStack_30 = auStack_2c;
    FUN_1013ca1a(auStack_2c,0,1);
    iStack_14 = 0;
    iVar1 = FUN_1009ece8(DAT_100e7dc4,&uStack_40);
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
  uStack_1a = 9;
  uStack_19 = 0x1b;
  uStack_10 = 0;
  uStack_18 = 0;
  uStack_16 = 0;
  uStack_1c = param_1;
  iStack_14 = param_2;
  uVar2 = FUN_1009ece8(DAT_100e7d68,&uStack_1c);
  return (uVar2 ^ 1) & 0xff;
}

