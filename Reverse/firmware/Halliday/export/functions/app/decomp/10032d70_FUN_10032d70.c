/* FUN_10032d70 @ 0x10032d70 */

void FUN_10032d70(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  
  iVar5 = *DAT_10032de0;
  uVar6 = (DAT_10032de4 - DAT_10032de8) * 0x20 & 0xff00;
  puVar4 = param_1;
  puVar7 = param_1;
  if (param_1 != (undefined1 *)0x0) goto LAB_10032dae;
  FUN_100a5b78(uVar6 | 0x1f0011,DAT_10032df0,DAT_10032dec,DAT_10032de8,0);
  uVar3 = 0xffffffff;
  while( true ) {
    if (*DAT_10032de0 == iVar5) break;
    puVar4 = (undefined1 *)FUN_1013cdc0(uVar3);
LAB_10032dae:
    FUN_1011ea48(puVar4,0,0x18);
    *(undefined4 *)(param_1 + 4) = 0x1e;
    uVar3 = 0;
    *(undefined2 *)(param_1 + 8) = 100;
    uVar2 = DAT_10032df4;
    uVar1 = DAT_10032df0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = 0;
    FUN_100a5b78(uVar6 | 0x2c0031,uVar1,uVar2,3,puVar7);
  }
  return;
}

