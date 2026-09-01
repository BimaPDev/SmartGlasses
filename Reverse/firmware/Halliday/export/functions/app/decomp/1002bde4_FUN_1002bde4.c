/* FUN_1002bde4 @ 0x1002bde4 */

void FUN_1002bde4(int param_1)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  iVar4 = DAT_1002bebc;
  iVar7 = *DAT_1002beb4;
  iVar9 = *DAT_1002beb8;
  uVar10 = 0;
  iVar6 = param_1;
  bVar2 = FUN_10126fd2(*(undefined4 *)(iVar9 + 0x10));
  uVar8 = (iVar4 - DAT_1002bec0) * 0x20 & 0xff00;
  FUN_100a5b78(uVar8 | 0x190031,DAT_1002bec8,DAT_1002bec4,(uint)bVar2,iVar6);
  uVar1 = DAT_1002becc;
  do {
    if ((uint)bVar2 <= (uVar10 & 0xff)) {
      if (*DAT_1002beb4 == iVar7) {
        return;
      }
      FUN_1013cdc0();
    }
    iVar4 = FUN_10126fb4(*(undefined4 *)(iVar9 + 0x10),uVar10);
    uVar5 = FUN_10087308();
    FUN_1008740c(uVar5,iVar4);
    if ((iVar4 != 0) && ((uint)*(byte *)(param_1 + 1) == *(uint *)(iVar4 + 0x10))) {
      FUN_100a5b78(uVar8 | 0x250031,DAT_1002bec8,uVar1);
      bVar3 = FUN_10126fd2(iVar4);
      if (1 < bVar3) {
        iVar6 = FUN_10126fb4(iVar4,0);
        if (iVar6 != 0) {
          FUN_10096630(iVar6,param_1 + 0x14);
        }
        iVar6 = FUN_10126fb4(iVar4,1);
        if (iVar6 != 0) {
          FUN_1002bbd0(iVar6,param_1 + 8);
        }
        FUN_101245ce(iVar4);
      }
    }
    uVar10 = uVar10 + 1;
  } while( true );
}

