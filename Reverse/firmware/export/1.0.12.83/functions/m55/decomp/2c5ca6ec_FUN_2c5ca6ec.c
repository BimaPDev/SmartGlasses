/* FUN_2c5ca6ec @ 0x2c5ca6ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5ca6ec(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 extraout_r1;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  undefined1 auStack_44 [32];
  undefined4 uStack_24;
  
  uStack_24 = *_LAB_2c5ca820;
  FUN_2c5c55d8();
  uVar6 = FUN_2c5c561c();
  FUN_2c62c3b0(auStack_44,0x20);
  FUN_2c62dbd4(auStack_44,0x1f,_LAB_2c5ca824);
  uStack_48 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x2c5d6324(&uStack_58);
  uVar1 = FUN_2c48e738();
  FUN_2c48e5b4(uVar1,_LAB_2c5ca82c,_LAB_2c5ca828);
  FUN_2c48e5b4(uVar1,_LAB_2c5ca830,_LAB_2c5ca834);
  uVar2 = func_0x2c5d630c();
  FUN_2c48e5b4(uVar1,_LAB_2c5ca838,uVar2);
  FUN_2c48e5b4(uVar1,_LAB_2c5ca83c,_LAB_2c5ca834);
  uVar2 = func_0x2c5d68e4();
  FUN_2c48e5b4(uVar1,_LAB_2c5ca840,uVar2);
  FUN_2c48e5b4(uVar1,_LAB_2c5ca844,&uStack_58);
  FUN_2c48e5b4(uVar1,_LAB_2c5ca848,auStack_44);
  uVar2 = FUN_2c48e3e8(uVar1);
  uVar3 = FUN_2c48e738();
  FUN_2c48e5b4(uVar3,_LAB_2c5ca84c,_LAB_2c5ca850);
  FUN_2c48e5b4(uVar3,_LAB_2c5ca854,uVar2);
  uVar4 = FUN_2c48e3e8(uVar3);
  uVar5 = FUN_2c5d78f0();
  FUN_2c5d7cfc(uVar5,uVar4);
  FUN_2c48e87c(uVar2);
  FUN_2c48e87c(uVar4);
  FUN_2c48dea0(uVar1);
  FUN_2c48dea0(uVar3);
  uVar7 = FUN_2c5e319c(0x36,extraout_r1,1,0,1);
  uVar1 = _LAB_2c5ca858;
  uVar2 = FUN_2c5e319c(0x3d,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20),1);
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5ca860,0x4ff,_LAB_2c5ca85c,uVar1,(int)uVar7,uVar2);
}

