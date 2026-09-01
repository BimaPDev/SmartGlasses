/* FUN_100dd8ec @ 0x100dd8ec */

int * FUN_100dd8ec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  
  piVar5 = DAT_100dd9d4;
  if (param_1 == 0) {
    uVar3 = (DAT_100dd9c8 - DAT_100dd9c4) * 0x20 & 0xff00;
    FUN_100a5b78(uVar3 | 0x300011,DAT_100dd9cc,0xffffffea,uVar3,param_4);
  }
  else {
    uVar4 = (*DAT_100dd9d0 & 0x7f) >> 4;
    piVar2 = DAT_100dd9d4;
    uVar3 = uVar4;
    for (uVar1 = 0; (uVar1 & 0xff) < uVar4; uVar1 = uVar1 + 1) {
      if (*piVar2 == param_1) {
        if (param_1 == DAT_100dd9d4[uVar1 * 0x52 + 0x1a]) {
          FUN_100a5b78((DAT_100dd9c8 - DAT_100dd9c4) * 0x20 & 0xff00U | 0x610011,DAT_100dd9d8,
                       DAT_100dd9d4[uVar1 * 0x52 + 0x1a],DAT_100dd9c4,param_4);
          return (int *)0x0;
        }
        *(byte *)(DAT_100dd9d4 + uVar1 * 0x52 + 0x32) =
             *(byte *)(DAT_100dd9d4 + uVar1 * 0x52 + 0x32) & 0xf8 | 1;
        return piVar5 + uVar1 * 0x52 + 0x1a;
      }
      if ((*piVar2 == 0) && (uVar3 = uVar1 & 0xff, param_1 == piVar2[0x1a])) {
        FUN_100a5b78((DAT_100dd9c8 - DAT_100dd9c4) * 0x20 & 0xff00U | 0x420011,DAT_100dd9dc,
                     0xffffffef,DAT_100dd9c4,param_4);
        return (int *)0x0;
      }
      piVar2 = piVar2 + 0x52;
    }
    if (uVar4 != uVar3) {
      piVar5 = DAT_100dd9d4 + uVar3 * 0x52;
      FUN_1011ea48(piVar5,0);
      *(byte *)(piVar5 + 0x18) = *(byte *)(piVar5 + 0x18) & 0xf8;
      return piVar5;
    }
  }
  return (int *)0x0;
}

