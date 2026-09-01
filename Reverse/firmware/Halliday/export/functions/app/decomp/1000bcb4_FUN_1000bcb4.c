/* FUN_1000bcb4 @ 0x1000bcb4 */

void FUN_1000bcb4(uint param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uStack_20;
  int local_1c;
  int iStack_18;
  
  local_1c = *DAT_1000bd18;
  uStack_20 = param_1 & 0xffff;
  iStack_18 = param_3;
  if (param_2 == 0) {
    uVar1 = 10;
    goto LAB_1000bcd2;
  }
  uVar2 = param_1;
  if (param_3 != 0) goto LAB_1000bce0;
  do {
    uVar1 = 0;
LAB_1000bcd2:
    while( true ) {
      if (*DAT_1000bd18 == local_1c) {
        return;
      }
      uVar2 = FUN_1013cdc0(uVar1);
LAB_1000bce0:
      (**(code **)(uVar2 + 0x10))((int)&uStack_20 + 2,2,*(undefined2 *)(uVar2 + 8));
      iVar3 = (**(code **)(param_1 + 0x10))(param_2,param_3,*(undefined2 *)(param_1 + 8));
      if ((param_3 == iVar3) &&
         (uVar2 = FUN_10054558(0,param_2,param_3), uStack_20 >> 0x10 == uVar2)) break;
      uVar1 = 0xd;
    }
  } while( true );
}

