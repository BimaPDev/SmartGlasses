/* FUN_100c9da0 @ 0x100c9da0 */

int FUN_100c9da0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 2) == '\x02') {
    uVar1 = FUN_10133554(param_1 + 4,3);
    uVar1 = FUN_10133554(uVar1,5);
    FUN_10133554(uVar1,1);
  }
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_1 + 9);
  iVar2 = FUN_101341d4(param_1,param_2);
  for (iVar3 = *DAT_100c9e10; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x2c)) {
    if (*(code **)(iVar3 + 0x18) != (code *)0x0) {
      iVar2 = (**(code **)(iVar3 + 0x18))(param_1,*(undefined1 *)(param_1 + 9),param_3);
    }
  }
  if ((param_3 == 0) && (1 < *(byte *)(param_1 + 9))) {
    if (*(char *)(param_1 + 2) == '\x01') {
      iVar2 = FUN_100e0cd8(*(undefined1 *)(param_1 + 8),param_1 + 0x90);
    }
    if (*(char *)(param_1 + 2) == '\x02') {
      return param_1 + 0x90;
    }
  }
  return iVar2;
}

