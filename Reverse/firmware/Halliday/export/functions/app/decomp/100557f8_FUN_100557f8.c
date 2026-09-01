/* FUN_100557f8 @ 0x100557f8 */

void FUN_100557f8(void)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint extraout_r2;
  uint uVar5;
  undefined8 extraout_d4;
  undefined8 extraout_d5;
  undefined8 extraout_d6;
  undefined8 in_d17;
  undefined8 uVar6;
  undefined8 uVar7;
  
  thunk_FUN_1011598c(10000);
  FUN_1005d20c(0);
  FUN_100555cc();
  FUN_10119dc2(uRam10055868,*puRam10055864);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x20 < uVar5)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  FUN_10055618();
  FUN_10119dc2(uRam1005586c);
  FUN_1011b6be();
  FUN_10119dc2(uRam10055870);
  FUN_10056ae4(6,0);
  thunk_FUN_1011598c(10);
  *puRam10055874 = 0;
  thunk_FUN_1011598c(10000);
  FUN_10119dc2(uRam10055878);
  uVar7 = FUN_1005576c(0);
  uVar6 = vcx3(5,5,in_d17,extraout_d4,extraout_d5,0,0x40,0);
  uVar6 = vcx3(5,1,uVar6,extraout_d6,extraout_d5,0,0x40,0);
  vcx3(5,3,uVar6,extraout_d5,extraout_d5,0,0x40,0);
  uVar4 = cx1(0,0x295,(int)((ulonglong)uVar7 >> 0x20),0,0x20);
  thunk_FUN_1011598c(10000,uVar4);
  FUN_1005d20c(0);
  puVar2 = DAT_10055914;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x20 < uVar5)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  uVar5 = *DAT_10055914 & 0xffffe000;
  iVar3 = FUN_1011a86a();
  if (iVar3 == 0) goto LAB_1005590e;
  uVar5 = uVar5 | 0x100;
  do {
    *puVar2 = uVar5 | 1;
    thunk_FUN_1011598c(500);
    FUN_1011a886(6);
    FUN_10119dc2(DAT_10055918,*puVar2);
    if ((int)uVar7 >> (extraout_r2 & 0xff) != 0) {
      FUN_10055618();
    }
    uVar5 = 0;
    FUN_10119dc2(DAT_1005591c);
    FUN_1011b6be();
    FUN_10119dc2(DAT_10055920);
    FUN_10056ae4(6,0);
    thunk_FUN_1011598c(10);
    *DAT_10055924 = 0;
    thunk_FUN_1011598c(10000);
    FUN_10119dc2(DAT_10055928);
    FUN_1005576c(0);
LAB_1005590e:
    uVar5 = uVar5 | 0x104;
  } while( true );
}

