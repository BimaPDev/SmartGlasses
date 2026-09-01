/* FUN_100ca700 @ 0x100ca700 */

uint FUN_100ca700(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 2) == '\x04') {
    param_1 = param_1 - DAT_100ca788;
    uVar2 = param_1 >> 4;
    uVar3 = DAT_100ca784 * uVar2;
    if ((-1 < param_1) && (uVar2 = (*DAT_100ca78c & 0x7f) >> 4, (int)uVar3 < (int)uVar2))
    goto LAB_100ca746;
    FUN_10119dc2(DAT_100ca798,DAT_100ca794,DAT_100ca790,0xb85,param_1,param_2);
    FUN_10119dc2(DAT_100ca79c);
    uVar1 = 0xb85;
  }
  else {
    param_1 = param_1 - DAT_100ca7a0;
    uVar2 = param_1 >> 4;
    uVar3 = DAT_100ca784 * uVar2;
    if ((-1 < param_1) && (uVar2 = *DAT_100ca78c & 0xf, (int)uVar3 < (int)uVar2)) goto LAB_100ca746;
    FUN_10119dc2(DAT_100ca798,DAT_100ca7a4,DAT_100ca790,0xb8b,param_1,param_2);
    FUN_10119dc2(DAT_100ca79c);
    uVar1 = 0xb8b;
  }
  FUN_1011a1f0(DAT_100ca790,uVar1,param_3,uVar2);
LAB_100ca746:
  return uVar3 & 0xff;
}

