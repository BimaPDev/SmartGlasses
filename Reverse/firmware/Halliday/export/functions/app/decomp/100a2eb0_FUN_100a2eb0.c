/* FUN_100a2eb0 @ 0x100a2eb0 */

void FUN_100a2eb0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_2c [2];
  undefined1 local_2a;
  undefined1 local_29;
  
  piVar1 = DAT_100a2f48;
  FUN_1011ea48(auStack_2c,0,0x14);
  if (*piVar1 != 0) {
    uVar3 = (DAT_100a2f50 - DAT_100a2f4c) * 0x20 & 0xff00;
    FUN_100a5b78(uVar3 | 0x4a0031,DAT_100a2f58,DAT_100a2f54,param_1);
    if (param_1 == 7) {
      FUN_100a5b78(uVar3 | 0x570031,DAT_100a2f58,DAT_100a2f60,*param_2);
      *(undefined4 *)(*piVar1 + 0x18) = *param_2;
    }
    else if (param_1 == 8) {
      FUN_100a5b78(uVar3 | 0x5c0031,DAT_100a2f58,DAT_100a2f64,*param_2);
      iVar2 = *piVar1;
      *(undefined4 *)(iVar2 + 0x1c) = *param_2;
      *(undefined4 *)(iVar2 + 0x28) = 1;
    }
    else if (param_1 == 6) {
      *(undefined4 *)(*piVar1 + 0x2c) = 1;
    }
    local_2a = 0x15;
    local_29 = (undefined1)param_1;
    FUN_1009ece8(DAT_100a2f5c,auStack_2c);
  }
  return;
}

