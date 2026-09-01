/* FUN_1002d000 @ 0x1002d000 */

void FUN_1002d000(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint extraout_r3;
  uint uVar4;
  uint uVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  int local_1c;
  
  uVar4 = 0;
  local_1c = *DAT_1002d100;
  uVar5 = (DAT_1002d104 - DAT_1002d108) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_1002d10c | uVar5,DAT_1002d114,DAT_1002d110,param_2);
  local_28 = 0;
  uStack_24 = 0;
  local_20 = 0;
  if (param_1 != 0) {
    FUN_1011ea48(param_1,0,0x114);
    iVar2 = FUN_1006ba84(&local_28,DAT_1002d120,3);
    if (-1 < iVar2) goto LAB_1002d08a;
    FUN_100a5b78(DAT_1002d124 | uVar5,DAT_1002d114,DAT_1002d128,DAT_1002d120);
    goto LAB_1002d076;
  }
  FUN_100a5b78(DAT_1002d118 | uVar5,DAT_1002d114,DAT_1002d11c);
LAB_1002d044:
  uVar1 = 0xffffffff;
  do {
    if (*DAT_1002d100 == local_1c) {
      return;
    }
    FUN_1013cdc0(uVar1);
    param_2 = extraout_r3;
LAB_1002d08a:
    FUN_1006bd24(&local_28,uVar4 * 0x114,0);
    iVar2 = FUN_1006bc84(&local_28,param_1,0x114);
    if (iVar2 != 0x114) {
      FUN_1011ea48(param_1,0,0x114);
      uVar3 = DAT_1002d130;
      uVar1 = DAT_1002d12c;
      param_2 = uVar4;
      goto LAB_1002d0c0;
    }
    if (*(byte *)(param_1 + 1) != param_2) break;
    FUN_100a5b78(uVar5 | 0x4380032,DAT_1002d114,DAT_1002d134,param_2,uVar4);
    FUN_1006bc30(&local_28);
LAB_1002d076:
    uVar1 = 0;
  } while( true );
  uVar4 = uVar4 + 1;
  uVar3 = DAT_1002d13c;
  uVar1 = DAT_1002d138;
  if (uVar4 == 0x14) {
LAB_1002d0c0:
    FUN_100a5b78(uVar3 | uVar5,DAT_1002d114,uVar1,param_2);
    FUN_1006bc30(&local_28);
    goto LAB_1002d044;
  }
  goto LAB_1002d08a;
}

