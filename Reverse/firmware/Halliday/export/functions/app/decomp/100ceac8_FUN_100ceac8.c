/* FUN_100ceac8 @ 0x100ceac8 */

void FUN_100ceac8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined1 auStack_34 [4];
  ushort local_30;
  
  iVar3 = FUN_100cc814();
  if (iVar3 != 0) {
    FUN_10132712(auStack_34,param_2,param_3);
    while (4 < local_30) {
      psVar4 = (short *)FUN_100c1f9c(auStack_34,4);
      uVar1 = psVar4[1];
      if (local_30 < uVar1) {
        FUN_100a5b78(DAT_100ceb80 | (DAT_100ceb7c - DAT_100ceb78) * 0x20 & 0xff00U,DAT_100ceb88,
                     DAT_100ceb84,uVar1,param_3);
        return;
      }
      piVar6 = *(int **)(iVar3 + 8);
      if ((piVar6 != (int *)0x0) && (piVar6 + -5 != (int *)0x0)) {
        piVar7 = (int *)*piVar6;
        if (piVar7 != (int *)0x0) {
          piVar7 = piVar7 + -5;
        }
        sVar2 = *psVar4;
        piVar6 = piVar6 + -5;
        while( true ) {
          piVar8 = piVar7;
          if (((short)piVar6[2] == sVar2) &&
             (iVar5 = (*(code *)*piVar6)(param_1,piVar6,psVar4 + 2), iVar5 == 0)) {
            FUN_100ce998(param_1,piVar6);
          }
          if (piVar8 == (int *)0x0) break;
          piVar7 = (int *)0x0;
          piVar6 = piVar8;
          if ((piVar8 != (int *)0xffffffec) && (piVar7 = (int *)piVar8[5], piVar7 != (int *)0x0)) {
            piVar7 = piVar7 + -5;
          }
        }
      }
      FUN_100c1f9c(auStack_34,uVar1);
    }
  }
  return;
}

