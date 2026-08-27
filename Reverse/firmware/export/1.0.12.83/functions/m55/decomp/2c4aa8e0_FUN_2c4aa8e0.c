/* FUN_2c4aa8e0 @ 0x2c4aa8e0 */

int FUN_2c4aa8e0(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_3 < 3) {
    iVar7 = *(int *)(*(int *)(param_1 + 0xbc) + 4);
    if (iVar7 != 0) {
      iVar5 = *(int *)(*(int *)(param_1 + 0xbc) + 8);
      iVar6 = 0;
      do {
        iVar6 = iVar6 + 1;
        iVar2 = FUN_2c66c540(param_2,iVar5,0x32);
        if (iVar2 == 0) {
          return iVar5 + param_3 * 8 + 0x34;
        }
        iVar5 = iVar5 + 0x4c;
      } while (iVar6 != iVar7);
    }
    uVar4 = 0x81;
    uVar1 = *(undefined1 *)(param_1 + 0xa0);
    uVar3 = DAT_2c4aa960;
    param_3 = param_2;
  }
  else {
    uVar4 = 0x73;
    uVar1 = *(undefined1 *)(param_1 + 0xa0);
    uVar3 = DAT_2c4aa96c;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,uVar4,DAT_2c4aa968,DAT_2c4aa964,uVar3,uVar1,DAT_2c4aa95c,param_3);
}

