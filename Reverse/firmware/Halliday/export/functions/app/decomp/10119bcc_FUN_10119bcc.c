/* FUN_10119bcc @ 0x10119bcc */

int FUN_10119bcc(uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_lr;
  undefined4 *puVar6;
  
  piVar2 = (int *)*DAT_10119bd8;
  if (param_1 < 0x20) {
    iVar3 = piVar2[0x11];
    if ((iVar3 == 0) || (pcVar5 = *(code **)(iVar3 + param_1 * 4), pcVar5 == (code *)0x0)) {
      puVar6 = DAT_10119bd8;
      uVar4 = thunk_FUN_1011e9dc(piVar2);
      piVar1 = DAT_10119bfc;
      *DAT_10119bfc = 0;
      iVar3 = FUN_1011e9d8(uVar4,param_1,param_1,0,puVar6,unaff_r4,unaff_r5,unaff_lr);
      if ((iVar3 == -1) && (*piVar1 != 0)) {
        *piVar2 = *piVar1;
      }
      return iVar3;
    }
    if (pcVar5 != (code *)0x1) {
      if (pcVar5 == (code *)0xffffffff) {
        *piVar2 = 0x16;
        return 1;
      }
      *(undefined4 *)(iVar3 + param_1 * 4) = 0;
      (*pcVar5)(param_1);
    }
    iVar3 = 0;
  }
  else {
    *piVar2 = 0x16;
    iVar3 = -1;
  }
  return iVar3;
}

