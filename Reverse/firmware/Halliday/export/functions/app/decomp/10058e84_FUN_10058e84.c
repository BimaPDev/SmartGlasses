/* FUN_10058e84 @ 0x10058e84 */

int FUN_10058e84(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar8 = CONCAT44(param_2,param_1);
  uVar4 = param_3;
  if (param_1 == (int *)0x0) {
    FUN_10119dc2(DAT_10058ff8,DAT_10058ff4,DAT_10058ff0,0x540,0,param_2);
    uVar8 = FUN_1011a1f0(DAT_10058ff0,0x540,param_3,param_4);
    uVar4 = extraout_r2;
  }
  if (((param_1[2] == 0) || (param_1[1] == 0)) || (*param_1 == 0)) {
    FUN_10119dc2(DAT_10058ff8,DAT_10058ffc,DAT_10058ff0,0x541,uVar8);
    uVar8 = FUN_1011a1f0(DAT_10058ff0,0x541,uVar4,0);
    uVar4 = extraout_r2_00;
  }
  if (*(int *)(param_1[2] + 0x308) == 0) {
    bVar1 = *(byte *)(param_1 + 4);
    if (1 < bVar1 - 1) {
      FUN_10119dc2(DAT_10058ff8,DAT_10059000,DAT_10058ff0,0x49e,uVar8);
      FUN_1011a1f0(DAT_10058ff0,0x49e,uVar4,bVar1 - 1);
    }
    FUN_1011ea48(param_1[2],0,0x30c);
    iVar3 = param_1[3];
    *(int *)param_1[2] = *param_1;
    FUN_1011b2bc(iVar3);
    FUN_1013c856(param_1[2] + 0x2f4);
    iVar7 = 0x2a4;
    iVar3 = 0x264;
    do {
      FUN_1013cfba(param_1[2] + iVar3);
      iVar5 = param_1[2] + iVar3;
      iVar3 = iVar3 + 0x10;
      FUN_10115fc4(param_1[2] + iVar7,1,0,iVar5);
      iVar7 = iVar7 + 0x14;
    } while (iVar3 != 0x2a4);
    iVar3 = param_1[2];
    *(undefined4 *)param_1[6] = 0;
    FUN_1011aafc(iVar3 + 0x260,0x20);
    FUN_1011ab80(param_1[2],1);
    FUN_1011aba0(param_1[2],0);
    FUN_1011abc0(param_1[2],1);
    puVar6 = (undefined4 *)param_1[2];
    puVar6[10] = DAT_10059004;
    uVar2 = FUN_1011ab5a(*puVar6);
    *(undefined1 *)(param_1[2] + 0x2c) = uVar2;
    FUN_1011abe0(param_1[2],param_3);
    iVar3 = (*(code *)**(undefined4 **)param_1[1])
                      ((undefined4 *)param_1[1],param_2,DAT_10059008,param_1);
    if (iVar3 == 0) {
      *(undefined1 *)(param_1[2] + 4) = 1;
      uVar4 = FUN_1011380c(param_1[10],param_1[0xb],0x800,DAT_1005900c,param_1,param_4,param_5,0xe,0
                          );
      iVar7 = param_1[9];
      *(undefined4 *)(param_1[2] + 0x308) = uVar4;
      FUN_10113564(uVar4,iVar7);
    }
  }
  else {
    iVar3 = -0x78;
  }
  return iVar3;
}

