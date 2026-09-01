/* FUN_10007ca8 @ 0x10007ca8 */

undefined4 FUN_10007ca8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_38;
  undefined4 uStack_34;
  
  if ((((uint)((ulonglong)in_d0 >> 0x20) & 0x7fffffff) < 0x3e400000) &&
     (iVar1 = FUN_10004068(), iVar1 == 0)) {
    return (int)in_d0;
  }
  uVar7 = FUN_10003b08();
  uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uVar3 = (undefined4)uVar7;
  uVar7 = FUN_10003b08();
  uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uVar2 = (undefined4)uVar7;
  uVar7 = FUN_10003b08(uVar3,uVar4,DAT_10007e0c,DAT_10007e10);
  uVar7 = FUN_10003798((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_10007e14,DAT_10007e18);
  uVar7 = FUN_10003b08((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar3,uVar4);
  uVar7 = FUN_1000379c((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_10007e1c,DAT_10007e20);
  uVar7 = FUN_10003b08((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar3,uVar4);
  uVar7 = FUN_10003798((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_10007e24,DAT_10007e28);
  uVar7 = FUN_10003b08((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar3,uVar4);
  uVar7 = FUN_1000379c((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_10007e2c,DAT_10007e30);
  uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (param_1 != 0) {
    local_38 = (undefined4)in_d1;
    uStack_34 = (undefined4)((ulonglong)in_d1 >> 0x20);
    uVar8 = FUN_10003b08(local_38,uStack_34,0,DAT_10007e08);
    uVar7 = FUN_10003b08(uVar2,uVar5,(int)uVar7,uVar6);
    uVar7 = FUN_10003798((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar7,
                         (int)((ulonglong)uVar7 >> 0x20));
    uVar7 = FUN_10003b08((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar3,uVar4);
    uVar7 = FUN_10003798((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),local_38,uStack_34);
    uVar8 = FUN_10003b08(uVar2,uVar5,DAT_10007e00,DAT_10007e04);
    FUN_1000379c((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar8,
                 (int)((ulonglong)uVar8 >> 0x20));
    uVar3 = FUN_10003798();
    return uVar3;
  }
  uVar7 = FUN_10003b08(uVar3,uVar4,(int)uVar7,uVar6);
  uVar7 = FUN_10003798((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_10007e00,DAT_10007e04);
  FUN_10003b08((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar2,uVar5);
  uVar3 = FUN_1000379c();
  return uVar3;
}

