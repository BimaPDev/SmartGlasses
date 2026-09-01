/* FUN_100f2354 @ 0x100f2354 */

void FUN_100f2354(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  
  iVar1 = DAT_100f23d8;
  if ((*(int *)(DAT_100f23d8 + 0x44) == 0) ||
     (iVar2 = FUN_1011e5fe(*(int *)(DAT_100f23d8 + 0x44) + 8,DAT_100f23d8 + 8,param_3,param_4,
                           param_4), iVar2 == 0)) {
    FUN_100f161c(0);
  }
  iVar2 = *(int *)(iVar1 + 0x44);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = *(undefined2 *)(*(int *)(iVar2 + 4) + 0xc);
    FUN_100f4948((int)*(short *)(iVar2 + 8),(int)*(short *)(iVar2 + 10));
  }
  FUN_100f0900(uVar3,0x14,0);
  if (*(code **)(iVar1 + 0x4c) != (code *)0x0) {
    (**(code **)(iVar1 + 0x4c))(uVar3,0x14);
  }
  FUN_100f08bc(3);
  FUN_100f0900(uVar3,0x25,0);
  FUN_1011dbf4(DAT_100f23dc,0xffffffff);
  *(byte *)(iVar1 + 0x62) = *(byte *)(iVar1 + 0x62) & 0xc3;
  FUN_10113e2c(DAT_100f23dc);
  if (2 < *(byte *)(iVar1 + 99)) {
    *(undefined1 *)(iVar1 + 99) = 2;
  }
  return;
}

