/* FUN_2c4ddc28 @ 0x2c4ddc28 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4ddc28(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  *(undefined1 *)(param_1 + 0xa5) = 0;
  if (*(int *)(param_1 + 0x5c) == 0) {
    uVar5 = 0;
  }
  else {
    uVar4 = (uint)*(ushort *)(param_1 + 0x5a);
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar7 = (param_2[1] - param_2[2]) - param_2[3];
      if ((int)uVar4 <= (int)uVar7) {
        uVar7 = uVar4;
      }
      FUN_2c674668(*param_2 + param_2[2] + param_2[3],*(int *)(param_1 + 0x5c),uVar7);
      uVar5 = _LAB_2c4ddc9c;
      iVar6 = param_2[3];
      param_2[4] = param_2[4] | 0x10;
      uVar1 = _LAB_2c4ddca0;
      param_2[3] = uVar7 + iVar6;
      uVar3 = _LAB_2c4ddca8;
      uVar2 = _LAB_2c4ddca4;
      param_2[6] = 0;
      param_2[7] = 0;
      FUN_2c4e0504(uVar5,7,0,0,uVar3,0xfa,uVar2,0x1300,uVar1,uVar7 + iVar6);
      uVar5 = 1;
    }
  }
  return uVar5;
}

