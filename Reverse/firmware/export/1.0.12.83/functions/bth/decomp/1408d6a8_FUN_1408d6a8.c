/* FUN_1408d6a8 @ 0x1408d6a8 */

void FUN_1408d6a8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  short sVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined8 uVar10;
  
  puVar3 = (undefined2 *)FUN_14075258(param_4);
  sVar2 = puVar3[1];
  uVar1 = *puVar3;
  iVar4 = FUN_1408a624(sVar2);
  piVar8 = (int *)(param_2 + 0x14);
  iVar9 = 0;
  do {
    while( true ) {
      piVar8 = piVar8 + 1;
      iVar5 = *piVar8;
      if (iVar5 != 0) break;
LAB_1408d6e8:
      if ((int *)(param_2 + 0x44) == piVar8) goto LAB_1408d70c;
    }
    if (iVar4 == 0) {
      if (*(short *)(iVar5 + 0x12) == sVar2) {
        if (*(char *)(iVar5 + 0xae) == '\0') goto LAB_1408d706;
LAB_1408d77c:
        *(undefined2 *)(iVar5 + 0x14) = uVar1;
        *(undefined1 *)(iVar5 + 0x96) = 6;
        *(undefined2 *)(iVar5 + 0xae) = 0x100;
        FUN_1408c5a4(*(undefined1 *)(param_2 + 0x11),iVar5,0);
      }
      goto LAB_1408d6e8;
    }
    uVar10 = FUN_1408a624(*(undefined2 *)(iVar5 + 0x12));
    iVar5 = (int)((ulonglong)uVar10 >> 0x20);
    if ((iVar4 != (int)uVar10) || (*(short *)(iVar5 + 0x14) != 0)) goto LAB_1408d6e8;
    if (*(char *)(iVar5 + 0xae) != '\0') goto LAB_1408d77c;
LAB_1408d706:
    iVar9 = iVar5;
  } while ((int *)(param_2 + 0x44) != piVar8);
LAB_1408d70c:
  if (iVar9 != 0) {
    uVar7 = (uint)*(byte *)(iVar9 + 0x96);
    uVar6 = DAT_1408d83c;
    if (uVar7 < 10) {
      uVar6 = *(undefined4 *)(DAT_1408d838 + uVar7 * 4);
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x45,DAT_1408d840,param_1,uVar7,uVar6,puVar3[1],*puVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x42,DAT_1408d850,param_1,puVar3[1]);
}

