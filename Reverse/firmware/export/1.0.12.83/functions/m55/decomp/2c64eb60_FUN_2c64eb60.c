/* FUN_2c64eb60 @ 0x2c64eb60 */

undefined4 FUN_2c64eb60(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort *puVar5;
  
  iVar1 = FUN_2c64eb34(param_2,param_4);
  if (iVar1 == 0) {
LAB_2c64ebd6:
    uVar3 = 1;
  }
  else {
    while( true ) {
      puVar5 = (ushort *)*param_1;
      if ((ushort *)param_1[1] == puVar5) break;
      uVar4 = (uint)*puVar5;
      if (uVar4 - 0xd800 < 0x400) {
        if (param_5 == 1) {
          return 2;
        }
        if ((uint)(param_1[1] - (int)puVar5) < 3) break;
        if (0x3ff < puVar5[1] - 0xdc00) {
          return 2;
        }
        iVar1 = 2;
        uVar4 = puVar5[1] + 0xfca02400 + uVar4 * 0x400;
      }
      else {
        if (uVar4 - 0xdc00 < 0x400) {
          return 2;
        }
        iVar1 = 1;
      }
      if (param_3 < uVar4) {
        return 2;
      }
      iVar2 = FUN_2c64e8fc(param_2);
      if (iVar2 == 0) goto LAB_2c64ebd6;
      *param_1 = *param_1 + iVar1 * 2;
    }
    uVar3 = 0;
  }
  return uVar3;
}

