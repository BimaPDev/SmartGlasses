/* FUN_100071e0 @ 0x100071e0 */

undefined4 FUN_100071e0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 in_d0;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar4 = (uint)((ulonglong)in_d0 >> 0x20) & 0x7fffffff;
  if (uVar4 < 0x3e400000) {
    iVar1 = FUN_10004068();
    if (iVar1 == 0) {
      return (int)DAT_10007440;
    }
    uVar5 = FUN_10003b08();
    uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar2 = (undefined4)uVar5;
    uVar6 = FUN_10003b08(uVar2,uVar3,DAT_10007408,DAT_1000740c);
    uVar6 = FUN_1000379c((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_10007410,DAT_10007414);
    uVar6 = FUN_10003b08((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = FUN_10003798((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_10007418,DAT_1000741c);
    uVar6 = FUN_10003b08((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = FUN_1000379c((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_10007420,DAT_10007424);
    uVar6 = FUN_10003b08((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = FUN_10003798((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_10007428,DAT_1000742c);
    uVar6 = FUN_10003b08((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = FUN_1000379c((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_10007430,DAT_10007434);
    uVar6 = FUN_10003b08((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
  }
  else {
    uVar5 = FUN_10003b08();
    uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar2 = (undefined4)uVar5;
    uVar6 = FUN_10003b08(uVar2,uVar3,DAT_10007408,DAT_1000740c);
    uVar6 = FUN_1000379c((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_10007410,DAT_10007414);
    uVar6 = FUN_10003b08((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = FUN_10003798((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_10007418,DAT_1000741c);
    uVar6 = FUN_10003b08((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = FUN_1000379c((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_10007420,DAT_10007424);
    uVar6 = FUN_10003b08((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = FUN_10003798((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_10007428,DAT_1000742c);
    uVar6 = FUN_10003b08((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = FUN_1000379c((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_10007430,DAT_10007434);
    uVar6 = FUN_10003b08((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    if (DAT_10007450 < (int)uVar4) {
      iVar1 = DAT_10007458;
      uVar5 = DAT_10007438;
      if ((int)uVar4 <= DAT_10007454) {
        uVar5 = FUN_10003798(0,DAT_1000744c,0,uVar4 - 0x200000);
        iVar1 = uVar4 - 0x200000;
      }
      uVar7 = FUN_10003b08(uVar2,uVar3,0,DAT_10007448);
      uVar7 = FUN_10003798((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0,iVar1);
      uVar6 = FUN_10003b08(uVar2,uVar3,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
      uVar8 = FUN_10003b08();
      uVar6 = FUN_10003798((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar8,
                           (int)((ulonglong)uVar8 >> 0x20));
      uVar6 = FUN_10003798((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                           (int)((ulonglong)uVar6 >> 0x20));
      uVar2 = FUN_10003798((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar6,
                           (int)((ulonglong)uVar6 >> 0x20));
      return uVar2;
    }
  }
  uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uVar7 = FUN_10003b08((int)uVar5,uVar2,0,DAT_10007448);
  uVar5 = FUN_10003b08((int)uVar5,uVar2,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  uVar6 = FUN_10003b08();
  uVar5 = FUN_10003798((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  uVar5 = FUN_10003798((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar5,
                       (int)((ulonglong)uVar5 >> 0x20));
  uVar2 = FUN_10003798(0,DAT_1000744c,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
  return uVar2;
}

