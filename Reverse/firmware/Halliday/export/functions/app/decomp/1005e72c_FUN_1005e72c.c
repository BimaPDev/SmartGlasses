/* FUN_1005e72c @ 0x1005e72c */

undefined4 FUN_1005e72c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = *(int *)(param_1 + 0x10);
  if (*(uint *)(iVar4 + 0x318) < 2) {
    uVar3 = (DAT_1005e7c0 - DAT_1005e7bc) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_1005e7c4 | uVar3,DAT_1005e7cc,DAT_1005e7c8,uVar3,param_4);
    *(byte *)(iVar4 + 0x90) = *(byte *)(iVar4 + 0x90) & 0xfc;
    FUN_1013cb84(iVar4 + 0x60);
    FUN_1011bc56(*(undefined4 *)(iVar4 + 8),5);
    piVar5 = *(int **)(param_1 + 0x10);
    iVar7 = *piVar5;
    iVar6 = *(int *)(param_1 + 4);
    FUN_1005e6a0(param_1);
    bVar1 = *(byte *)(iVar7 + 0x52);
    if (bVar1 != 0) {
      if (param_2 == 0) {
        FUN_101153fc(bVar1,0);
      }
      else {
        FUN_1011598c((uint)bVar1 * 1000);
      }
    }
    FUN_1005e230(piVar5[8],*(undefined1 *)(iVar6 + 4),0);
    uVar2 = 0;
    *(undefined4 *)(iVar4 + 0x318) = 2;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

