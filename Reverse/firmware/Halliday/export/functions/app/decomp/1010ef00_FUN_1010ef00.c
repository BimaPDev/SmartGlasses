/* FUN_1010ef00 @ 0x1010ef00 */

undefined4
FUN_1010ef00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,uint param_6,undefined1 param_7,uint param_8,int param_9)

{
  char cVar1;
  undefined4 *puVar2;
  uint extraout_r2;
  uint uVar3;
  int extraout_r3;
  int iVar4;
  
  if (param_5 == (undefined4 *)0x0) {
    return 1;
  }
  FUN_1011ea48(param_5 + 4,0,0x38);
  iVar4 = DAT_1010efd4;
  uVar3 = extraout_r2;
  if (2 < param_6) {
    uVar3 = 4;
    iVar4 = extraout_r3;
  }
  *param_5 = param_1;
  if (param_6 < 3) {
    uVar3 = (uint)*(char *)(iVar4 + param_6);
  }
  param_5[1] = param_2;
  param_5[2] = param_3;
  param_5[3] = param_4;
  uVar3 = param_8 / uVar3;
  *(char *)((int)param_5 + 0x11) = (char)param_6;
  *(undefined1 *)(param_5 + 4) = param_7;
  switch(param_6) {
  case 0:
    if (param_9 == 0) goto switchD_1010ef5a_default;
    cVar1 = *(char *)(param_9 + uVar3 + -1);
    break;
  case 1:
    if ((param_9 != 0) && (*(char *)(param_9 + (uVar3 + 0x7fffffff) * 2) == '\x01')) {
      *(undefined1 *)(param_9 + (uVar3 + 0x7fffffff) * 2) = 0;
    }
    goto switchD_1010ef5a_default;
  case 2:
  case 3:
    if (param_9 == 0) goto switchD_1010ef5a_default;
    cVar1 = *(char *)(param_9 + (uVar3 + 0x3fffffff) * 4);
    break;
  default:
    goto switchD_1010ef5a_default;
  }
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_9 + (uVar3 + 0x3fffffff) * 4) = 0;
  }
switchD_1010ef5a_default:
  *(undefined2 *)(param_5 + 0xc) = 1;
  puVar2 = DAT_1010efd8;
  param_5[10] = param_8;
  param_5[0xb] = param_9;
  param_5[7] = 0;
  param_5[8] = 0;
  param_5[5] = 0;
  param_5[6] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)((int)param_5 + 0x32) = 2;
  return 0;
}

