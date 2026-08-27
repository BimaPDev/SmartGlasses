/* FUN_2c6218e4 @ 0x2c6218e4 */

undefined4
FUN_2c6218e4(int param_1,int param_2,int param_3,int param_4,byte param_5,undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  
  uVar5 = 0;
  do {
    while( true ) {
      uVar1 = uVar5 & 0xff;
      uVar2 = uVar5 & 0xff;
      uVar3 = uVar5 & 0xff;
      uVar4 = uVar5 & 0xff;
      uVar5 = uVar5 + 1;
      iVar7 = ((int)(uint)param_5 >> uVar4 & 1U) +
              ((param_4 >> uVar3 & 1U) + ((param_3 >> uVar2 & 1U) + (param_2 >> uVar1 & 1U) * 2) * 2
              ) * 2;
      piVar6 = (int *)(param_1 + iVar7 * 4);
      param_1 = *(int *)(param_1 + iVar7 * 4);
      if (param_1 != 0) break;
      iVar7 = FUN_2c62be98(0x40,0x44);
      *piVar6 = iVar7;
      if (iVar7 == 0) {
        return 0x53;
      }
      FUN_2c62c314(iVar7,0,0x40);
      *(undefined4 *)(iVar7 + 0x40) = 0xffffffff;
      param_1 = *piVar6;
      if (uVar5 == 8) goto LAB_2c621960;
    }
  } while (uVar5 != 8);
LAB_2c621960:
  *(undefined4 *)(param_1 + 0x40) = param_6;
  return 0;
}

