/* FUN_10010848 @ 0x10010848 */

void FUN_10010848(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar4 = *DAT_10010944;
  uVar7 = (DAT_10010948 - DAT_1001094c) * 0x20 & 0xff00;
  FUN_100a5b78(uVar7 | 0x520031,DAT_10010950,DAT_10010954);
  iVar2 = thunk_FUN_1009f30c(0x34,DAT_10010958);
  piVar1 = DAT_1001095c;
  *DAT_1001095c = iVar2;
  if (iVar2 == 0) {
    if (*DAT_10010944 == iVar4) {
      return;
    }
  }
  else {
    FUN_1011ea48(iVar2,0,0x34);
    puVar5 = (undefined4 *)*piVar1;
    *puVar5 = param_1;
    puVar5[1] = param_2;
    puVar5[3] = param_3;
    iVar2 = FUN_100a8874(5,param_3 / 1000,1,1,0,0,0);
    if (iVar2 == 0) {
      if (*DAT_10010944 == iVar4) goto LAB_100108c6;
    }
    else {
      iVar8 = *piVar1;
      *(int *)(iVar8 + 0x2c) = iVar2;
      uVar3 = FUN_100a8cf8();
      iVar6 = *piVar1;
      *(undefined4 *)(iVar8 + 0x30) = uVar3;
      uVar3 = FUN_1012d654(*(undefined4 *)(iVar6 + 0x30));
      FUN_100a5b78(uVar7 | 0x670031,DAT_10010950,DAT_10010964,uVar3);
      FUN_100a873c(iVar2);
      FUN_101164a0(*piVar1 + 0x10,DAT_10010968,0);
      if (*DAT_10010944 == iVar4) {
        FUN_10116500(*piVar1 + 0x10,2);
        return;
      }
    }
  }
  FUN_1013cdc0();
LAB_100108c6:
  FUN_100a5b78(uVar7 | 0x610011,DAT_10010950,DAT_10010960);
  return;
}

