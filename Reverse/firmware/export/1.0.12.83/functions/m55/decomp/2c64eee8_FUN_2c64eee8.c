/* FUN_2c64eee8 @ 0x2c64eee8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_2c64eee8(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int *param_5,
            uint *param_6,uint *param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  uVar1 = _LAB_2c64ef30;
  iStack_18 = param_3;
  iStack_14 = param_4;
  iStack_10 = param_3;
  do {
    if (iStack_14 == iStack_18) {
      uVar1 = 0;
LAB_2c64ef02:
      *param_5 = iStack_18;
      *param_8 = param_6;
      return uVar1;
    }
    if ((param_7 == param_6) ||
       (uVar3 = FUN_2c64e81e(&iStack_18,uVar1), uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20),
       uVar2 = (uint)uVar3, uVar2 == 0xfffffffe)) {
      uVar1 = 1;
      goto LAB_2c64ef02;
    }
    if (0x10ffff < uVar2) {
      uVar1 = 2;
      goto LAB_2c64ef02;
    }
    *param_6 = uVar2;
    param_6 = param_6 + 1;
  } while( true );
}

