/* FUN_100f625c @ 0x100f625c */

uint FUN_100f625c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;
  
  if (param_1 == 0) {
    FUN_100a5b78((DAT_100f62d8 - DAT_100f62d4) * 0x20 & 0xff00U | 0x2400011,DAT_100f62e0,
                 DAT_100f62dc,DAT_100f62d4,param_4);
    return 0xffffffff;
  }
  if (*(uint *)(param_1 + 8) != 0) {
    uVar2 = *(uint *)(param_1 + 0x48);
    piVar4 = (int *)(*(int *)(param_1 + 0xc) + uVar2 * 4);
    uVar3 = uVar2;
    piVar1 = piVar4;
    if (*(int *)(*(int *)(param_1 + 0xc) + uVar2 * 4) != param_2) {
      do {
        uVar3 = uVar3 + 1;
        if (*(uint *)(param_1 + 8) <= uVar3) {
          uVar2 = uVar2 - 1;
          if ((int)uVar2 < 0) {
            return 0xffffffff;
          }
          do {
            piVar4 = piVar4 + -1;
            if (*piVar4 == param_2) {
              *(uint *)(param_1 + 0x48) = uVar2;
              return uVar2;
            }
            bVar5 = uVar2 != 0;
            uVar2 = uVar2 - 1;
          } while (bVar5);
          return 0xffffffff;
        }
        piVar1 = piVar1 + 1;
      } while (*piVar1 != param_2);
      *(uint *)(param_1 + 0x48) = uVar3;
    }
    return uVar3;
  }
  return 0xffffffff;
}

