/* FUN_1408ab6c @ 0x1408ab6c */

void FUN_1408ab6c(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  ushort uVar6;
  short sVar7;
  
  piVar4 = DAT_1408ac10;
  do {
    piVar5 = piVar4 + 1;
    if (*piVar4 == 0) {
      iVar3 = FUN_140759b8(0x50);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x40,DAT_1408ac20);
      }
      FUN_140e5658(iVar3,0,0x50);
      if (param_1 == 0xffff) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = (ushort)((uint)(param_1 << 0x14) >> 0x14);
      }
      *(ushort *)(iVar3 + 0xe) = uVar6;
      iVar2 = DAT_1408ac14;
      *(undefined4 *)(iVar3 + 8) = *param_2;
      uVar1 = *(undefined2 *)(param_2 + 1);
      *(undefined1 *)(iVar3 + 0x10) = 0x1f;
      *(undefined2 *)(iVar3 + 0xc) = uVar1;
      *piVar4 = iVar3;
      sVar7 = *(short *)(iVar2 + 2) + 1;
      *(short *)(iVar2 + 2) = sVar7;
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x46,DAT_1408ac1c,iVar3,param_1,*(undefined1 *)param_2,
                   *(undefined1 *)((int)param_2 + 1),*(undefined1 *)((int)param_2 + 5),sVar7);
    }
    piVar4 = piVar5;
  } while (DAT_1408ac10 + 8 != piVar5);
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x41,DAT_1408ac18,*(undefined2 *)(DAT_1408ac14 + 2));
}

