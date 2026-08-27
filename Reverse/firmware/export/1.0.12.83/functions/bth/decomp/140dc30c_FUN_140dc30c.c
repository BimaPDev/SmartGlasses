/* FUN_140dc30c @ 0x140dc30c */

int FUN_140dc30c(uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  code *pcVar5;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_lr;
  undefined4 *puVar6;
  
  piVar4 = (int *)*DAT_140dc318;
  if (param_1 < 0x20) {
    iVar2 = piVar4[0x11];
    if ((iVar2 == 0) || (pcVar5 = *(code **)(iVar2 + param_1 * 4), pcVar5 == (code *)0x0)) {
      puVar6 = DAT_140dc318;
      uVar3 = thunk_FUN_140e4560(piVar4);
      piVar1 = DAT_140dc33c;
      *DAT_140dc33c = 0;
      iVar2 = FUN_140e4580(uVar3,param_1,param_1,0,puVar6,unaff_r4,unaff_r5,unaff_lr);
      if ((iVar2 == -1) && (*piVar1 != 0)) {
        *piVar4 = *piVar1;
      }
      return iVar2;
    }
    if (pcVar5 != (code *)0x1) {
      if (pcVar5 == (code *)0xffffffff) {
        *piVar4 = 0x16;
        return 1;
      }
      *(undefined4 *)(iVar2 + param_1 * 4) = 0;
      (*pcVar5)(param_1);
    }
    iVar2 = 0;
  }
  else {
    *piVar4 = 0x16;
    iVar2 = -1;
  }
  return iVar2;
}

