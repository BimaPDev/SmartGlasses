/* FUN_1001db58 @ 0x1001db58 */

void FUN_1001db58(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *DAT_1001dba8;
  if (param_1 == 0x4c) goto LAB_1001db8e;
  if (param_1 == 0x17) {
    uVar1 = 1;
  }
  else if (param_1 == 0x5f) {
    uVar1 = 2;
  }
  else if (param_1 == 0x54) {
    uVar1 = 3;
  }
  else if (param_1 == 0x6d) {
    uVar1 = 4;
  }
  else if (param_1 == 0x60) {
    uVar1 = 5;
  }
  else {
    uVar1 = 0;
  }
  while (*DAT_1001dba8 != iVar2) {
    FUN_1013cdc0(uVar1);
LAB_1001db8e:
    uVar1 = 0;
  }
  return;
}

