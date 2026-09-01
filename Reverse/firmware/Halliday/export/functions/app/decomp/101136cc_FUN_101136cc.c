/* FUN_101136cc @ 0x101136cc */

int FUN_101136cc(int param_1,undefined4 *param_2,int param_3,uint param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,int param_8,undefined1 param_9,int param_10)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  if (param_8 == 0xf) {
    uVar6 = DAT_101137f4;
    if (param_4 == DAT_101137f4) goto LAB_101136f2;
  }
  else {
    uVar6 = param_8 + 0x10;
    if (uVar6 < 0x1f) goto LAB_101136f2;
  }
  FUN_10119dc2(DAT_10113804,DAT_10113800,DAT_101137fc,0x243,param_1,param_2);
  FUN_10119dc2(DAT_10113808,param_8,0xe,0xfffffff0);
  FUN_1011a1f0(DAT_101137fc,0x243,param_3,uVar6);
LAB_101136f2:
  *(int *)(param_1 + 0x58) = param_1 + 0x58;
  *(int *)(param_1 + 0x5c) = param_1 + 0x58;
  *(undefined1 *)(param_1 + 0xc) = param_9;
  uVar6 = param_3 + 7U & 0xfffffff8;
  *(undefined1 *)(param_1 + 0xd) = 4;
  *(char *)(param_1 + 0xe) = (char)param_8;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_1011ea48(param_2,0xaa,uVar6);
  *param_2 = 0xf0f0f0f0;
  *(undefined4 **)(param_1 + 0x9c) = param_2;
  *(uint *)(param_1 + 0xa0) = uVar6;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  FUN_10068334(param_1,param_2,(int)param_2 + uVar6,param_4,param_5,param_6,param_7);
  *(uint *)(param_1 + 100) = param_4;
  *(undefined4 *)(param_1 + 0x68) = param_5;
  *(undefined4 *)(param_1 + 0x6c) = param_6;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x70) = param_7;
  iVar3 = DAT_101137f8;
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  uVar4 = *(undefined4 *)(DAT_101137f8 + 0x2c);
  *(int *)(DAT_101137f8 + 0x2c) = param_1;
  *(undefined4 *)(param_1 + 0x74) = uVar4;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  if (param_10 == 0) {
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  else {
    FUN_1011e9f8(param_1 + 0x78,param_10,0x1f);
    *(undefined1 *)(param_1 + 0x97) = 0;
  }
  if (*(int *)(iVar3 + 8) == 0) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  else {
    uVar5 = *(undefined4 *)(*(int *)(iVar3 + 8) + 0xb0);
    *(int *)(param_1 + 0xa8) = param_1 + 0xa8;
    *(int *)(param_1 + 0xac) = param_1 + 0xa8;
    *(undefined4 *)(param_1 + 0xb0) = uVar5;
    FUN_1011ea48(param_1 + 0xb8,0,0x10);
  }
  return (int)param_2 + uVar6;
}

